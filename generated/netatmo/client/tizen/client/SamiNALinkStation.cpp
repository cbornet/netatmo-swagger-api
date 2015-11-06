
#include "SamiNALinkStation.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNALinkStation::SamiNALinkStation() {
    init();
}

SamiNALinkStation::~SamiNALinkStation() {
    this->cleanup();
}

void
SamiNALinkStation::init() {
    pMac = null;
    pExt = null;
    pTemperature = null;
    
}

void
SamiNALinkStation::cleanup() {
    if(pMac != null) {
        
        delete pMac;
        pMac = null;
    }
    if(pExt != null) {
        
        delete pExt;
        pExt = null;
    }
    if(pTemperature != null) {
        
        delete pTemperature;
        pTemperature = null;
    }
    
}


SamiNALinkStation*
SamiNALinkStation::fromJson(String* json) {
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
SamiNALinkStation::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMacKey = new JsonString(L"mac");
        IJsonValue* pMacVal = null;
        pJsonObject->GetValue(pMacKey, pMacVal);
        if(pMacVal != null) {
            
            pMac = new String();
            jsonToValue(pMac, pMacVal, L"String", L"String");
        }
        delete pMacKey;
        JsonString* pExtKey = new JsonString(L"ext");
        IJsonValue* pExtVal = null;
        pJsonObject->GetValue(pExtKey, pExtVal);
        if(pExtVal != null) {
            
            pExt = new String();
            jsonToValue(pExt, pExtVal, L"String", L"String");
        }
        delete pExtKey;
        JsonString* pTemperatureKey = new JsonString(L"Temperature");
        IJsonValue* pTemperatureVal = null;
        pJsonObject->GetValue(pTemperatureKey, pTemperatureVal);
        if(pTemperatureVal != null) {
            
            pTemperature = new Float();
            jsonToValue(pTemperature, pTemperatureVal, L"Float", L"Float");
        }
        delete pTemperatureKey;
        
    }
}

SamiNALinkStation::SamiNALinkStation(String* json) {
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
SamiNALinkStation::asJson ()
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
SamiNALinkStation::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pMacKey = new JsonString(L"mac");
    pJsonObject->Add(pMacKey, toJson(getPMac(), "String", ""));

    
    JsonString *pExtKey = new JsonString(L"ext");
    pJsonObject->Add(pExtKey, toJson(getPExt(), "String", ""));

    
    JsonString *pTemperatureKey = new JsonString(L"Temperature");
    pJsonObject->Add(pTemperatureKey, toJson(getPTemperature(), "Float", ""));

    
    return pJsonObject;
}

String*
SamiNALinkStation::getPMac() {
    return pMac;
}
void
SamiNALinkStation::setPMac(String* pMac) {
    this->pMac = pMac;
}

String*
SamiNALinkStation::getPExt() {
    return pExt;
}
void
SamiNALinkStation::setPExt(String* pExt) {
    this->pExt = pExt;
}

Float*
SamiNALinkStation::getPTemperature() {
    return pTemperature;
}
void
SamiNALinkStation::setPTemperature(Float* pTemperature) {
    this->pTemperature = pTemperature;
}



} /* namespace Swagger */

