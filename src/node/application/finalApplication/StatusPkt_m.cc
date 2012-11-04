//
// Generated file, do not edit! Created by opp_msgc 4.2 from src/node/application/finalApplication/StatusPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "StatusPkt_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




status::status()
{
    nodeID = 0;
    locX = 0;
    locY = 0;
    spentEnergy = 0;
}

void doPacking(cCommBuffer *b, status& a)
{
    doPacking(b,a.nodeID);
    doPacking(b,a.locX);
    doPacking(b,a.locY);
    doPacking(b,a.spentEnergy);
}

void doUnpacking(cCommBuffer *b, status& a)
{
    doUnpacking(b,a.nodeID);
    doUnpacking(b,a.locX);
    doUnpacking(b,a.locY);
    doUnpacking(b,a.spentEnergy);
}

class statusDescriptor : public cClassDescriptor
{
  public:
    statusDescriptor();
    virtual ~statusDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(statusDescriptor);

statusDescriptor::statusDescriptor() : cClassDescriptor("status", "")
{
}

statusDescriptor::~statusDescriptor()
{
}

bool statusDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<status *>(obj)!=NULL;
}

const char *statusDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int statusDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int statusDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *statusDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodeID",
        "locX",
        "locY",
        "spentEnergy",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int statusDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodeID")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "locX")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "locY")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "spentEnergy")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *statusDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
        "double",
        "double",
        "double",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *statusDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int statusDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    status *pp = (status *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string statusDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    status *pp = (status *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->nodeID);
        case 1: return double2string(pp->locX);
        case 2: return double2string(pp->locY);
        case 3: return double2string(pp->spentEnergy);
        default: return "";
    }
}

bool statusDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    status *pp = (status *)object; (void)pp;
    switch (field) {
        case 0: pp->nodeID = string2ulong(value); return true;
        case 1: pp->locX = string2double(value); return true;
        case 2: pp->locY = string2double(value); return true;
        case 3: pp->spentEnergy = string2double(value); return true;
        default: return false;
    }
}

const char *statusDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *statusDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    status *pp = (status *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

orders::orders()
{
    nodeID = 0;
    stingyMode = 0;
}

void doPacking(cCommBuffer *b, orders& a)
{
    doPacking(b,a.nodeID);
    doPacking(b,a.stingyMode);
}

void doUnpacking(cCommBuffer *b, orders& a)
{
    doUnpacking(b,a.nodeID);
    doUnpacking(b,a.stingyMode);
}

class ordersDescriptor : public cClassDescriptor
{
  public:
    ordersDescriptor();
    virtual ~ordersDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(ordersDescriptor);

ordersDescriptor::ordersDescriptor() : cClassDescriptor("orders", "")
{
}

ordersDescriptor::~ordersDescriptor()
{
}

bool ordersDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<orders *>(obj)!=NULL;
}

const char *ordersDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ordersDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ordersDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *ordersDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodeID",
        "stingyMode",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ordersDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodeID")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "stingyMode")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ordersDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
        "bool",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ordersDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int ordersDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    orders *pp = (orders *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ordersDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    orders *pp = (orders *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->nodeID);
        case 1: return bool2string(pp->stingyMode);
        default: return "";
    }
}

bool ordersDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    orders *pp = (orders *)object; (void)pp;
    switch (field) {
        case 0: pp->nodeID = string2ulong(value); return true;
        case 1: pp->stingyMode = string2bool(value); return true;
        default: return false;
    }
}

const char *ordersDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *ordersDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    orders *pp = (orders *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(StatusPkt);

StatusPkt::StatusPkt(const char *name, int kind) : ApplicationPacket(name,kind)
{
}

StatusPkt::StatusPkt(const StatusPkt& other) : ApplicationPacket(other)
{
    copy(other);
}

StatusPkt::~StatusPkt()
{
}

StatusPkt& StatusPkt::operator=(const StatusPkt& other)
{
    if (this==&other) return *this;
    ApplicationPacket::operator=(other);
    copy(other);
    return *this;
}

void StatusPkt::copy(const StatusPkt& other)
{
    this->extraData_var = other.extraData_var;
    this->someData_var = other.someData_var;
}

void StatusPkt::parsimPack(cCommBuffer *b)
{
    ApplicationPacket::parsimPack(b);
    doPacking(b,this->extraData_var);
    doPacking(b,this->someData_var);
}

void StatusPkt::parsimUnpack(cCommBuffer *b)
{
    ApplicationPacket::parsimUnpack(b);
    doUnpacking(b,this->extraData_var);
    doUnpacking(b,this->someData_var);
}

status& StatusPkt::getExtraData()
{
    return extraData_var;
}

void StatusPkt::setExtraData(const status& extraData)
{
    this->extraData_var = extraData;
}

orders& StatusPkt::getSomeData()
{
    return someData_var;
}

void StatusPkt::setSomeData(const orders& someData)
{
    this->someData_var = someData;
}

class StatusPktDescriptor : public cClassDescriptor
{
  public:
    StatusPktDescriptor();
    virtual ~StatusPktDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(StatusPktDescriptor);

StatusPktDescriptor::StatusPktDescriptor() : cClassDescriptor("StatusPkt", "ApplicationPacket")
{
}

StatusPktDescriptor::~StatusPktDescriptor()
{
}

bool StatusPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<StatusPkt *>(obj)!=NULL;
}

const char *StatusPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int StatusPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int StatusPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *StatusPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "extraData",
        "someData",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int StatusPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "extraData")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "someData")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *StatusPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "status",
        "orders",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *StatusPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int StatusPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    StatusPkt *pp = (StatusPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string StatusPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    StatusPkt *pp = (StatusPkt *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getExtraData(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSomeData(); return out.str();}
        default: return "";
    }
}

bool StatusPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    StatusPkt *pp = (StatusPkt *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *StatusPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "status",
        "orders",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *StatusPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    StatusPkt *pp = (StatusPkt *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getExtraData()); break;
        case 1: return (void *)(&pp->getSomeData()); break;
        default: return NULL;
    }
}


