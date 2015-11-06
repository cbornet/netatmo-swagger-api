
#include "SamiNAThermMeasure.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAThermMeasure::SamiNAThermMeasure() {
    init();
}

SamiNAThermMeasure::~SamiNAThermMeasure() {
    this->cleanup();
}

void
SamiNAThermMeasure::init() {
    pTime = null;
    pTemperature = null;
    pSetpoint_temp = null;
    
}

void
SamiNAThermMeasure::cleanup() {
    if(pTime != null) {
        
        delete pTime;
        pTime = null;
    }
    if(pTemperature != null) {
        
        delete pTemperature;
        pTemperature = null;
    }
    if(pSetpoint_temp != null) {
        
        delete pSetpoint_temp;
        pSetpoint_temp = null;
    }
    
}


SamiNAThermMeasure*
SamiNAThermMeasure::fromJson(String* json) {
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
SamiNAThermMeasure::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTimeKey = new JsonString(L"time");
        IJsonValue* pTimeVal = null;
        pJsonObject->GetValue(pTimeKey, pTimeVal);
        if(pTimeVal != null) {
            
            pTime = new Integer();
            jsonToValue(pTime, pTimeVal, L"Integer", L"Integer");
        }
        delete pTimeKey;
        JsonString* pTemperatureKey = new JsonString(L"temperature");
        IJsonValue* pTemperatureVal = null;
        pJsonObject->GetValue(pTemperatureKey, pTemperatureVal);
        if(pTemperatureVal != null) {
            
            pTemperature = new Float();
            jsonToValue(pTemperature, pTemperatureVal, L"Float", L"Float");
        }
        delete pTemperatureKey;
        JsonString* pSetpoint_tempKey = new JsonString(L"setpoint_temp");
        IJsonValue* pSetpoint_tempVal = null;
        pJsonObject->GetValue(pSetpoint_tempKey, pSetpoint_tempVal);
        if(pSetpoint_tempVal != null) {
            
            pSetpoint_temp = new Float();
            jsonToValue(pSetpoint_temp, pSetpoint_tempVal, L"Float", L"Float");
        }
        delete pSetpoint_tempKey;
        
    }
}

SamiNAThermMeasure::SamiNAThermMeasure(String* json) {
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
SamiNAThermMeasure::asJson ()
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
SamiNAThermMeasure::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pTimeKey = new JsonString(L"time");
    pJsonObject->Add(pTimeKey, toJson(getPTime(), "Integer", ""));

    
    JsonString *pTemperatureKey = new JsonString(L"temperature");
    pJsonObject->Add(pTemperatureKey, toJson(getPTemperature(), "Float", ""));

    
    JsonString *pSetpoint_tempKey = new JsonString(L"setpoint_temp");
    pJsonObject->Add(pSetpoint_tempKey, toJson(getPSetpointTemp(), "Float", ""));

    
    return pJsonObject;
}

Integer*
SamiNAThermMeasure::getPTime() {
    return pTime;
}
void
SamiNAThermMeasure::setPTime(Integer* pTime) {
    this->pTime = pTime;
}

Float*
SamiNAThermMeasure::getPTemperature() {
    return pTemperature;
}
void
SamiNAThermMeasure::setPTemperature(Float* pTemperature) {
    this->pTemperature = pTemperature;
}

Float*
SamiNAThermMeasure::getPSetpointTemp() {
    return pSetpoint_temp;
}
void
SamiNAThermMeasure::setPSetpointTemp(Float* pSetpoint_temp) {
    this->pSetpoint_temp = pSetpoint_temp;
}



} /* namespace Swagger */

