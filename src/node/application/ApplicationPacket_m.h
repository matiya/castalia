//
// Generated file, do not edit! Created by opp_msgc 4.2 from src/node/application/ApplicationPacket.msg.
//

#ifndef _APPLICATIONPACKET_M_H_
#define _APPLICATIONPACKET_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Struct generated from src/node/application/ApplicationPacket.msg by opp_msgc.
 */
struct AppNetInfoExchange_type
{
    AppNetInfoExchange_type();
    double RSSI;
    double LQI;
    opp_string source;
    opp_string destination;
    simtime_t timestamp;
};

void doPacking(cCommBuffer *b, AppNetInfoExchange_type& a);
void doUnpacking(cCommBuffer *b, AppNetInfoExchange_type& a);

/**
 * Class generated from <tt>src/node/application/ApplicationPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet ApplicationPacket {
 * 	AppNetInfoExchange_type appNetInfoExchange;
 * 
 * 	string applicationID;		
 * 	unsigned int sequenceNumber;
 * 	double data;				
 * }
 * </pre>
 */
class ApplicationPacket : public ::cPacket
{
  protected:
    AppNetInfoExchange_type appNetInfoExchange_var;
    opp_string applicationID_var;
    unsigned int sequenceNumber_var;
    double data_var;

  private:
    void copy(const ApplicationPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ApplicationPacket&);

  public:
    ApplicationPacket(const char *name=NULL, int kind=0);
    ApplicationPacket(const ApplicationPacket& other);
    virtual ~ApplicationPacket();
    ApplicationPacket& operator=(const ApplicationPacket& other);
    virtual ApplicationPacket *dup() const {return new ApplicationPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual AppNetInfoExchange_type& getAppNetInfoExchange();
    virtual const AppNetInfoExchange_type& getAppNetInfoExchange() const {return const_cast<ApplicationPacket*>(this)->getAppNetInfoExchange();}
    virtual void setAppNetInfoExchange(const AppNetInfoExchange_type& appNetInfoExchange);
    virtual const char * getApplicationID() const;
    virtual void setApplicationID(const char * applicationID);
    virtual unsigned int getSequenceNumber() const;
    virtual void setSequenceNumber(unsigned int sequenceNumber);
    virtual double getData() const;
    virtual void setData(double data);
};

inline void doPacking(cCommBuffer *b, ApplicationPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ApplicationPacket& obj) {obj.parsimUnpack(b);}


#endif // _APPLICATIONPACKET_M_H_