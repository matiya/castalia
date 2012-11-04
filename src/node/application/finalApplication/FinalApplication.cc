/****************************************************************************
 *  la idea es que haga un survey de energía restante, conociendo la        *
 *  inicial. En base a la info obtenida el sistema va a ajustar sus         *
 *  parametros de funcionamiento de manera acorde, i.e.: cambiar duty       *
 *  cycle, cambiar el intervalo de lectura de los sensoresile.              *
 *  todo: brodcastear hasta los que no llega, comparativa                                                                        *
 *                                                                          *
 *      NICTA, Locked Bag 9013, Alexandria, NSW 1435, Australia             *
 *      Attention:  License Inquiry.                                        *
 *                                                                          *
 ****************************************************************************/


#include "FinalApplication.h"

Define_Module(FinalApplication);

void FinalApplication::startup()
{  
  sampleInterval = ((double)par("sample_interval")) / 1000.0 ;
  packetSpacing = ((double)par("packet_spacing")) / 1000.0;
  initialEnergy = par("initial_energy");
  dutyCycle = ((double)par("duty_cycle")) / 1000.0 ;
  listeningInterval = par("listening_interval");
  txPower = -((double)par ("tx_power")) / 1000.0;

  setTimer(SEND_PACKET, packetSpacing);
  setTimer(REQUEST_READING, 0);
}

void FinalApplication::fromNetworkLayer(ApplicationPacket * rcvPacket, const char *sourceAddr, double RSSI, double LQI)
{
  
  if(isSink)
  {
    StatusPkt *dataPacket = check_and_cast<StatusPkt*>(rcvPacket);
    status actualData = dataPacket -> getExtraData();
    trace() << "Received from: " << actualData.nodeID 
            << " \tvalue=" << dataPacket->getData();
    trace() << "Remaining energy: " 
            << - actualData.spentEnergy + initialEnergy;
    if( initialEnergy - actualData.spentEnergy < 3)
    {
      trace() << "Critical energy level reached in node: " 
              << actualData.nodeID;
      orders tmpData;
      tmpData.nodeID = actualData.nodeID;
      tmpData.stingyMode = true;
      StatusPkt *orders2Net =
      new StatusPkt("puturbackin2it", APPLICATION_PACKET);
      orders2Net->setSomeData(tmpData);
      srcAddr = '0' + tmpData.nodeID; 
      //no sourceAddr porque puede venir saltando
      toNetworkLayer(orders2Net, srcAddr.c_str()); //do stuf


    }
  }
  if (!isSink){
    StatusPkt *dataPacket = check_and_cast<StatusPkt*>(rcvPacket);
    orders tmpData = dataPacket -> getSomeData();
    if(tmpData.stingyMode){
      trace()<< "Node "<< SELF_NETWORK_ADDRESS << " is going into stingy mode";
      TunableMacControlCommand *cmd = new TunableMacControlCommand ("TunableMAC control command", MAC_CONTROL_COMMAND);
      cmd->setTunableMacCommandKind (SET_DUTY_CYCLE); 
      cmd->setParameter(dutyCycle); //default = 1.0
      //TO_DO: SET_LISTEN_INTERVAL (for mac) and dynamucally change radio tx_power and mode perhaps
      sampleInterval = sampleInterval*2;
      toNetworkLayer(cmd);
      //TunableMacControlCommand *cmd2 = new TunableMacControlCommand ("TunableMAC control command", MAC_CONTROL_COMMAND);
      //cmd2->setTunableMacCommandKind (SET_LISTEN_INTERVAL); 
      //cmd2->setParameter(listeningInterval);
      //toNetworkLayer(cmd2);
      toNetworkLayer(createRadioCommand(SET_TX_OUTPUT,txPower));
      
      
    }
  }
    
  
}

void FinalApplication::timerFiredCallback(int index)
{
  switch (index) {
    case SEND_PACKET:{
      if(isSink)
      {
        //toNetworkLayer(createGenericDataPacket(10,1,1),BROADCAST_NETWORK_ADDRESS);
      }
      setTimer(SEND_PACKET, packetSpacing);   
      break;
    }
    case REQUEST_READING:{
      requestSensorReading();
      setTimer(REQUEST_READING, sampleInterval);
      break;
    }
  }
  
}

void FinalApplication::handleSensorReading(SensorReadingMessage * rcvReading)
{
  
  double sensValue = rcvReading->getSensedValue();

  // schedule the TX of the value
  //trace() << "Sensed = " << sensValue;

  status tmpData;
  tmpData.nodeID = (unsigned short)self;
  tmpData.locX = mobilityModule->getLocation().x;
  tmpData.locY = mobilityModule->getLocation().y;
  tmpData.spentEnergy = resMgrModule -> getSpentEnergy();

  StatusPkt *status2Net =
      new StatusPkt("loc, batt, val", APPLICATION_PACKET);
  
  status2Net->setExtraData(tmpData);
  status2Net->setData(sensValue);
    //status2Net->setSequenceNumber(currSentSampleSN);
  //currSentSampleSN++;

  toNetworkLayer(status2Net, SINK_NETWORK_ADDRESS);
}
