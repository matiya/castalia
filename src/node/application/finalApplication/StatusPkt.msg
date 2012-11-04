cplusplus {{ 
#include "ApplicationPacket_m.h" 
}}

class ApplicationPacket;

struct status {
  unsigned short nodeID; //the ID of the Node 
  double locX; 
  double locY;
  double spentEnergy;
}


struct orders {
  unsigned short nodeID; //the ID of the Node 
  bool stingyMode;
}

packet StatusPkt extends ApplicationPacket { 
  status extraData;
  orders someData;
} 