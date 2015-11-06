
#include "SamiNAUserBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAUserBody::SamiNAUserBody() {
    init();
}

SamiNAUserBody::~SamiNAUserBody() {
    this->cleanup();
}

void
SamiNAUserBody::init() {
    p_id = null;
    pAdministrative = null;
    pDate_creation = null;
    pDevices = null;
    pFriend_devices = null;
    pMail = null;
    pTimeline_not_read = null;
    pTimeline_size = null;
    
}

void
SamiNAUserBody::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pAdministrative != null) {
        
        delete pAdministrative;
        pAdministrative = null;
    }
    if(pDate_creation != null) {
        
        delete pDate_creation;
        pDate_creation = null;
    }
    if(pDevices != null) {
        pDevices->RemoveAll(true);
        delete pDevices;
        pDevices = null;
    }
    if(pFriend_devices != null) {
        pFriend_devices->RemoveAll(true);
        delete pFriend_devices;
        pFriend_devices = null;
    }
    if(pMail != null) {
        
        delete pMail;
        pMail = null;
    }
    if(pTimeline_not_read != null) {
        
        delete pTimeline_not_read;
        pTimeline_not_read = null;
    }
    if(pTimeline_size != null) {
        
        delete pTimeline_size;
        pTimeline_size = null;
    }
    
}


SamiNAUserBody*
SamiNAUserBody::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiNAUserBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* pAdministrativeKey = new JsonString(L"administrative");
        IJsonValue* pAdministrativeVal = null;
        pJsonObject->GetValue(pAdministrativeKey, pAdministrativeVal);
        if(pAdministrativeVal != null) {
            
            pAdministrative = new SamiNAUserAdministrative();
            jsonToValue(pAdministrative, pAdministrativeVal, L"SamiNAUserAdministrative", L"SamiNAUserAdministrative");
        }
        delete pAdministrativeKey;
        JsonString* pDate_creationKey = new JsonString(L"date_creation");
        IJsonValue* pDate_creationVal = null;
        pJsonObject->GetValue(pDate_creationKey, pDate_creationVal);
        if(pDate_creationVal != null) {
            
            pDate_creation = new SamiNADate();
            jsonToValue(pDate_creation, pDate_creationVal, L"SamiNADate", L"SamiNADate");
        }
        delete pDate_creationKey;
        JsonString* pDevicesKey = new JsonString(L"devices");
        IJsonValue* pDevicesVal = null;
        pJsonObject->GetValue(pDevicesKey, pDevicesVal);
        if(pDevicesVal != null) {
            pDevices = new ArrayList();
            
            jsonToValue(pDevices, pDevicesVal, L"IList", L"String");
        }
        delete pDevicesKey;
        JsonString* pFriend_devicesKey = new JsonString(L"friend_devices");
        IJsonValue* pFriend_devicesVal = null;
        pJsonObject->GetValue(pFriend_devicesKey, pFriend_devicesVal);
        if(pFriend_devicesVal != null) {
            pFriend_devices = new ArrayList();
            
            jsonToValue(pFriend_devices, pFriend_devicesVal, L"IList", L"String");
        }
        delete pFriend_devicesKey;
        JsonString* pMailKey = new JsonString(L"mail");
        IJsonValue* pMailVal = null;
        pJsonObject->GetValue(pMailKey, pMailVal);
        if(pMailVal != null) {
            
            pMail = new String();
            jsonToValue(pMail, pMailVal, L"String", L"String");
        }
        delete pMailKey;
        JsonString* pTimeline_not_readKey = new JsonString(L"timeline_not_read");
        IJsonValue* pTimeline_not_readVal = null;
        pJsonObject->GetValue(pTimeline_not_readKey, pTimeline_not_readVal);
        if(pTimeline_not_readVal != null) {
            
            pTimeline_not_read = new Integer();
            jsonToValue(pTimeline_not_read, pTimeline_not_readVal, L"Integer", L"Integer");
        }
        delete pTimeline_not_readKey;
        JsonString* pTimeline_sizeKey = new JsonString(L"timeline_size");
        IJsonValue* pTimeline_sizeVal = null;
        pJsonObject->GetValue(pTimeline_sizeKey, pTimeline_sizeVal);
        if(pTimeline_sizeVal != null) {
            
            pTimeline_size = new Integer();
            jsonToValue(pTimeline_size, pTimeline_sizeVal, L"Integer", L"Integer");
        }
        delete pTimeline_sizeKey;
        
    }
}

SamiNAUserBody::SamiNAUserBody(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiNAUserBody::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiNAUserBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pAdministrativeKey = new JsonString(L"administrative");
    pJsonObject->Add(pAdministrativeKey, toJson(getPAdministrative(), "SamiNAUserAdministrative", ""));

    
    JsonString *pDate_creationKey = new JsonString(L"date_creation");
    pJsonObject->Add(pDate_creationKey, toJson(getPDateCreation(), "SamiNADate", ""));

    
    JsonString *pDevicesKey = new JsonString(L"devices");
    pJsonObject->Add(pDevicesKey, toJson(getPDevices(), "String", "array"));

    
    JsonString *pFriend_devicesKey = new JsonString(L"friend_devices");
    pJsonObject->Add(pFriend_devicesKey, toJson(getPFriendDevices(), "String", "array"));

    
    JsonString *pMailKey = new JsonString(L"mail");
    pJsonObject->Add(pMailKey, toJson(getPMail(), "String", ""));

    
    JsonString *pTimeline_not_readKey = new JsonString(L"timeline_not_read");
    pJsonObject->Add(pTimeline_not_readKey, toJson(getPTimelineNotRead(), "Integer", ""));

    
    JsonString *pTimeline_sizeKey = new JsonString(L"timeline_size");
    pJsonObject->Add(pTimeline_sizeKey, toJson(getPTimelineSize(), "Integer", ""));

    
    return pJsonObject;
}

String*
SamiNAUserBody::getPId() {
    return p_id;
}
void
SamiNAUserBody::setPId(String* p_id) {
    this->p_id = p_id;
}

SamiNAUserAdministrative*
SamiNAUserBody::getPAdministrative() {
    return pAdministrative;
}
void
SamiNAUserBody::setPAdministrative(SamiNAUserAdministrative* pAdministrative) {
    this->pAdministrative = pAdministrative;
}

SamiNADate*
SamiNAUserBody::getPDateCreation() {
    return pDate_creation;
}
void
SamiNAUserBody::setPDateCreation(SamiNADate* pDate_creation) {
    this->pDate_creation = pDate_creation;
}

IList*
SamiNAUserBody::getPDevices() {
    return pDevices;
}
void
SamiNAUserBody::setPDevices(IList* pDevices) {
    this->pDevices = pDevices;
}

IList*
SamiNAUserBody::getPFriendDevices() {
    return pFriend_devices;
}
void
SamiNAUserBody::setPFriendDevices(IList* pFriend_devices) {
    this->pFriend_devices = pFriend_devices;
}

String*
SamiNAUserBody::getPMail() {
    return pMail;
}
void
SamiNAUserBody::setPMail(String* pMail) {
    this->pMail = pMail;
}

Integer*
SamiNAUserBody::getPTimelineNotRead() {
    return pTimeline_not_read;
}
void
SamiNAUserBody::setPTimelineNotRead(Integer* pTimeline_not_read) {
    this->pTimeline_not_read = pTimeline_not_read;
}

Integer*
SamiNAUserBody::getPTimelineSize() {
    return pTimeline_size;
}
void
SamiNAUserBody::setPTimelineSize(Integer* pTimeline_size) {
    this->pTimeline_size = pTimeline_size;
}



} /* namespace Swagger */

