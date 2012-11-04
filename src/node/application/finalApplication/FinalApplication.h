#include "VirtualApplication.h"
#include "StatusPkt_m.h"
#include "TunableMacControl_m.h"

using namespace std;

enum TestTimers
{
  SEND_PACKET = 1,
  REQUEST_READING = 2,
};

class FinalApplication: public VirtualApplication{
 private:
  double packetSpacing, sampleInterval, initialEnergy, dutyCycle, txPower;
  int  listeningInterval;
  stringstream replicant;
  string srcAddr;
 public:
  void startup();
  void fromNetworkLayer(ApplicationPacket *, const char *, double, double);
  void timerFiredCallback(int);
  void handleSensorReading(SensorReadingMessage * );
};
