
#include "SamiNADeviceListBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNADeviceListBody::SamiNADeviceListBody() {
    init();
}

SamiNADeviceListBody::~SamiNADeviceListBody() {
    this->cleanup();
}

void
SamiNADeviceListBody::init() {
    pDevices = null;
    pModules = null;
    
}

void
SamiNADeviceListBody::cleanup() {
    if(pDevices != null) {
        pDevices->RemoveAll(true);
        delete pDevices;
        pDevices = null;
    }
    if(pModules != null) {
        pModules->RemoveAll(true);
        delete pModules;
        pModules = null;
    }
    
}


SamiNADeviceListBody*
SamiNADeviceListBody::fromJson(String* json) {
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
SamiNADeviceListBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDevicesKey = new JsonString(L"devices");
        IJsonValue* pDevicesVal = null;
        pJsonObject->GetValue(pDevicesKey, pDevicesVal);
        if(pDevicesVal != null) {
            pDevices = new ArrayList();
            
            jsonToValue(pDevices, pDevicesVal, L"IList", L"SamiNADevice");
        }
        delete pDevicesKey;
        JsonString* pModulesKey = new JsonString(L"modules");
        IJsonValue* pModulesVal = null;
        pJsonObject->GetValue(pModulesKey, pModulesVal);
        if(pModulesVal != null) {
            pModules = new ArrayList();
            
            jsonToValue(pModules, pModulesVal, L"IList", L"SamiNAModule");
        }
        delete pModulesKey;
        
    }
}

SamiNADeviceListBody::SamiNADeviceListBody(String* json) {
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
SamiNADeviceListBody::asJson ()
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
SamiNADeviceListBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pDevicesKey = new JsonString(L"devices");
    pJsonObject->Add(pDevicesKey, toJson(getPDevices(), "SamiNADevice", "array"));

    
    JsonString *pModulesKey = new JsonString(L"modules");
    pJsonObject->Add(pModulesKey, toJson(getPModules(), "SamiNAModule", "array"));

    
    return pJsonObject;
}

IList*
SamiNADeviceListBody::getPDevices() {
    return pDevices;
}
void
SamiNADeviceListBody::setPDevices(IList* pDevices) {
    this->pDevices = pDevices;
}

IList*
SamiNADeviceListBody::getPModules() {
    return pModules;
}
void
SamiNADeviceListBody::setPModules(IList* pModules) {
    this->pModules = pModules;
}



} /* namespace Swagger */

