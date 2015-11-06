
#include "SamiNASetpoint.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNASetpoint::SamiNASetpoint() {
    init();
}

SamiNASetpoint::~SamiNASetpoint() {
    this->cleanup();
}

void
SamiNASetpoint::init() {
    pSetpoint_temp = null;
    pSetpoint_endtime = null;
    pSetpoint_mode = null;
    
}

void
SamiNASetpoint::cleanup() {
    if(pSetpoint_temp != null) {
        
        delete pSetpoint_temp;
        pSetpoint_temp = null;
    }
    if(pSetpoint_endtime != null) {
        
        delete pSetpoint_endtime;
        pSetpoint_endtime = null;
    }
    if(pSetpoint_mode != null) {
        
        delete pSetpoint_mode;
        pSetpoint_mode = null;
    }
    
}


SamiNASetpoint*
SamiNASetpoint::fromJson(String* json) {
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
SamiNASetpoint::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pSetpoint_tempKey = new JsonString(L"setpoint_temp");
        IJsonValue* pSetpoint_tempVal = null;
        pJsonObject->GetValue(pSetpoint_tempKey, pSetpoint_tempVal);
        if(pSetpoint_tempVal != null) {
            
            pSetpoint_temp = new Float();
            jsonToValue(pSetpoint_temp, pSetpoint_tempVal, L"Float", L"Float");
        }
        delete pSetpoint_tempKey;
        JsonString* pSetpoint_endtimeKey = new JsonString(L"setpoint_endtime");
        IJsonValue* pSetpoint_endtimeVal = null;
        pJsonObject->GetValue(pSetpoint_endtimeKey, pSetpoint_endtimeVal);
        if(pSetpoint_endtimeVal != null) {
            
            pSetpoint_endtime = new Integer();
            jsonToValue(pSetpoint_endtime, pSetpoint_endtimeVal, L"Integer", L"Integer");
        }
        delete pSetpoint_endtimeKey;
        JsonString* pSetpoint_modeKey = new JsonString(L"setpoint_mode");
        IJsonValue* pSetpoint_modeVal = null;
        pJsonObject->GetValue(pSetpoint_modeKey, pSetpoint_modeVal);
        if(pSetpoint_modeVal != null) {
            
            pSetpoint_mode = new String();
            jsonToValue(pSetpoint_mode, pSetpoint_modeVal, L"String", L"String");
        }
        delete pSetpoint_modeKey;
        
    }
}

SamiNASetpoint::SamiNASetpoint(String* json) {
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
SamiNASetpoint::asJson ()
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
SamiNASetpoint::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pSetpoint_tempKey = new JsonString(L"setpoint_temp");
    pJsonObject->Add(pSetpoint_tempKey, toJson(getPSetpointTemp(), "Float", ""));

    
    JsonString *pSetpoint_endtimeKey = new JsonString(L"setpoint_endtime");
    pJsonObject->Add(pSetpoint_endtimeKey, toJson(getPSetpointEndtime(), "Integer", ""));

    
    JsonString *pSetpoint_modeKey = new JsonString(L"setpoint_mode");
    pJsonObject->Add(pSetpoint_modeKey, toJson(getPSetpointMode(), "String", ""));

    
    return pJsonObject;
}

Float*
SamiNASetpoint::getPSetpointTemp() {
    return pSetpoint_temp;
}
void
SamiNASetpoint::setPSetpointTemp(Float* pSetpoint_temp) {
    this->pSetpoint_temp = pSetpoint_temp;
}

Integer*
SamiNASetpoint::getPSetpointEndtime() {
    return pSetpoint_endtime;
}
void
SamiNASetpoint::setPSetpointEndtime(Integer* pSetpoint_endtime) {
    this->pSetpoint_endtime = pSetpoint_endtime;
}

String*
SamiNASetpoint::getPSetpointMode() {
    return pSetpoint_mode;
}
void
SamiNASetpoint::setPSetpointMode(String* pSetpoint_mode) {
    this->pSetpoint_mode = pSetpoint_mode;
}



} /* namespace Swagger */

