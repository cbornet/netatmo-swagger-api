
#include "SamiNADashboardData.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNADashboardData::SamiNADashboardData() {
    init();
}

SamiNADashboardData::~SamiNADashboardData() {
    this->cleanup();
}

void
SamiNADashboardData::init() {
    pTime_utc = null;
    pDevice_id = null;
    pBoilerOn = null;
    pBoilerOff = null;
    pTemperature = null;
    pDate_max_temp = null;
    pDate_min_temp = null;
    pMin_temp = null;
    pMax_temp = null;
    pAbsolutePressure = null;
    pCO2 = null;
    pHumidity = null;
    pNoise = null;
    pPressure = null;
    pRain = null;
    pSum_rain_1 = null;
    pSum_rain_24 = null;
    
}

void
SamiNADashboardData::cleanup() {
    if(pTime_utc != null) {
        
        delete pTime_utc;
        pTime_utc = null;
    }
    if(pDevice_id != null) {
        
        delete pDevice_id;
        pDevice_id = null;
    }
    if(pBoilerOn != null) {
        
        delete pBoilerOn;
        pBoilerOn = null;
    }
    if(pBoilerOff != null) {
        
        delete pBoilerOff;
        pBoilerOff = null;
    }
    if(pTemperature != null) {
        
        delete pTemperature;
        pTemperature = null;
    }
    if(pDate_max_temp != null) {
        
        delete pDate_max_temp;
        pDate_max_temp = null;
    }
    if(pDate_min_temp != null) {
        
        delete pDate_min_temp;
        pDate_min_temp = null;
    }
    if(pMin_temp != null) {
        
        delete pMin_temp;
        pMin_temp = null;
    }
    if(pMax_temp != null) {
        
        delete pMax_temp;
        pMax_temp = null;
    }
    if(pAbsolutePressure != null) {
        
        delete pAbsolutePressure;
        pAbsolutePressure = null;
    }
    if(pCO2 != null) {
        
        delete pCO2;
        pCO2 = null;
    }
    if(pHumidity != null) {
        
        delete pHumidity;
        pHumidity = null;
    }
    if(pNoise != null) {
        
        delete pNoise;
        pNoise = null;
    }
    if(pPressure != null) {
        
        delete pPressure;
        pPressure = null;
    }
    if(pRain != null) {
        
        delete pRain;
        pRain = null;
    }
    if(pSum_rain_1 != null) {
        
        delete pSum_rain_1;
        pSum_rain_1 = null;
    }
    if(pSum_rain_24 != null) {
        
        delete pSum_rain_24;
        pSum_rain_24 = null;
    }
    
}


SamiNADashboardData*
SamiNADashboardData::fromJson(String* json) {
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
SamiNADashboardData::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTime_utcKey = new JsonString(L"time_utc");
        IJsonValue* pTime_utcVal = null;
        pJsonObject->GetValue(pTime_utcKey, pTime_utcVal);
        if(pTime_utcVal != null) {
            
            pTime_utc = new Integer();
            jsonToValue(pTime_utc, pTime_utcVal, L"Integer", L"Integer");
        }
        delete pTime_utcKey;
        JsonString* pDevice_idKey = new JsonString(L"device_id");
        IJsonValue* pDevice_idVal = null;
        pJsonObject->GetValue(pDevice_idKey, pDevice_idVal);
        if(pDevice_idVal != null) {
            
            pDevice_id = new Float();
            jsonToValue(pDevice_id, pDevice_idVal, L"Float", L"Float");
        }
        delete pDevice_idKey;
        JsonString* pBoilerOnKey = new JsonString(L"BoilerOn");
        IJsonValue* pBoilerOnVal = null;
        pJsonObject->GetValue(pBoilerOnKey, pBoilerOnVal);
        if(pBoilerOnVal != null) {
            
            pBoilerOn = new Integer();
            jsonToValue(pBoilerOn, pBoilerOnVal, L"Integer", L"Integer");
        }
        delete pBoilerOnKey;
        JsonString* pBoilerOffKey = new JsonString(L"BoilerOff");
        IJsonValue* pBoilerOffVal = null;
        pJsonObject->GetValue(pBoilerOffKey, pBoilerOffVal);
        if(pBoilerOffVal != null) {
            
            pBoilerOff = new Integer();
            jsonToValue(pBoilerOff, pBoilerOffVal, L"Integer", L"Integer");
        }
        delete pBoilerOffKey;
        JsonString* pTemperatureKey = new JsonString(L"Temperature");
        IJsonValue* pTemperatureVal = null;
        pJsonObject->GetValue(pTemperatureKey, pTemperatureVal);
        if(pTemperatureVal != null) {
            
            pTemperature = new Float();
            jsonToValue(pTemperature, pTemperatureVal, L"Float", L"Float");
        }
        delete pTemperatureKey;
        JsonString* pDate_max_tempKey = new JsonString(L"date_max_temp");
        IJsonValue* pDate_max_tempVal = null;
        pJsonObject->GetValue(pDate_max_tempKey, pDate_max_tempVal);
        if(pDate_max_tempVal != null) {
            
            pDate_max_temp = new Integer();
            jsonToValue(pDate_max_temp, pDate_max_tempVal, L"Integer", L"Integer");
        }
        delete pDate_max_tempKey;
        JsonString* pDate_min_tempKey = new JsonString(L"date_min_temp");
        IJsonValue* pDate_min_tempVal = null;
        pJsonObject->GetValue(pDate_min_tempKey, pDate_min_tempVal);
        if(pDate_min_tempVal != null) {
            
            pDate_min_temp = new Integer();
            jsonToValue(pDate_min_temp, pDate_min_tempVal, L"Integer", L"Integer");
        }
        delete pDate_min_tempKey;
        JsonString* pMin_tempKey = new JsonString(L"min_temp");
        IJsonValue* pMin_tempVal = null;
        pJsonObject->GetValue(pMin_tempKey, pMin_tempVal);
        if(pMin_tempVal != null) {
            
            pMin_temp = new Float();
            jsonToValue(pMin_temp, pMin_tempVal, L"Float", L"Float");
        }
        delete pMin_tempKey;
        JsonString* pMax_tempKey = new JsonString(L"max_temp");
        IJsonValue* pMax_tempVal = null;
        pJsonObject->GetValue(pMax_tempKey, pMax_tempVal);
        if(pMax_tempVal != null) {
            
            pMax_temp = new Float();
            jsonToValue(pMax_temp, pMax_tempVal, L"Float", L"Float");
        }
        delete pMax_tempKey;
        JsonString* pAbsolutePressureKey = new JsonString(L"AbsolutePressure");
        IJsonValue* pAbsolutePressureVal = null;
        pJsonObject->GetValue(pAbsolutePressureKey, pAbsolutePressureVal);
        if(pAbsolutePressureVal != null) {
            
            pAbsolutePressure = new Float();
            jsonToValue(pAbsolutePressure, pAbsolutePressureVal, L"Float", L"Float");
        }
        delete pAbsolutePressureKey;
        JsonString* pCO2Key = new JsonString(L"CO2");
        IJsonValue* pCO2Val = null;
        pJsonObject->GetValue(pCO2Key, pCO2Val);
        if(pCO2Val != null) {
            
            pCO2 = new Float();
            jsonToValue(pCO2, pCO2Val, L"Float", L"Float");
        }
        delete pCO2Key;
        JsonString* pHumidityKey = new JsonString(L"Humidity");
        IJsonValue* pHumidityVal = null;
        pJsonObject->GetValue(pHumidityKey, pHumidityVal);
        if(pHumidityVal != null) {
            
            pHumidity = new Float();
            jsonToValue(pHumidity, pHumidityVal, L"Float", L"Float");
        }
        delete pHumidityKey;
        JsonString* pNoiseKey = new JsonString(L"Noise");
        IJsonValue* pNoiseVal = null;
        pJsonObject->GetValue(pNoiseKey, pNoiseVal);
        if(pNoiseVal != null) {
            
            pNoise = new Float();
            jsonToValue(pNoise, pNoiseVal, L"Float", L"Float");
        }
        delete pNoiseKey;
        JsonString* pPressureKey = new JsonString(L"Pressure");
        IJsonValue* pPressureVal = null;
        pJsonObject->GetValue(pPressureKey, pPressureVal);
        if(pPressureVal != null) {
            
            pPressure = new Float();
            jsonToValue(pPressure, pPressureVal, L"Float", L"Float");
        }
        delete pPressureKey;
        JsonString* pRainKey = new JsonString(L"Rain");
        IJsonValue* pRainVal = null;
        pJsonObject->GetValue(pRainKey, pRainVal);
        if(pRainVal != null) {
            
            pRain = new Integer();
            jsonToValue(pRain, pRainVal, L"Integer", L"Integer");
        }
        delete pRainKey;
        JsonString* pSum_rain_1Key = new JsonString(L"sum_rain_1");
        IJsonValue* pSum_rain_1Val = null;
        pJsonObject->GetValue(pSum_rain_1Key, pSum_rain_1Val);
        if(pSum_rain_1Val != null) {
            
            pSum_rain_1 = new Integer();
            jsonToValue(pSum_rain_1, pSum_rain_1Val, L"Integer", L"Integer");
        }
        delete pSum_rain_1Key;
        JsonString* pSum_rain_24Key = new JsonString(L"sum_rain_24");
        IJsonValue* pSum_rain_24Val = null;
        pJsonObject->GetValue(pSum_rain_24Key, pSum_rain_24Val);
        if(pSum_rain_24Val != null) {
            
            pSum_rain_24 = new Integer();
            jsonToValue(pSum_rain_24, pSum_rain_24Val, L"Integer", L"Integer");
        }
        delete pSum_rain_24Key;
        
    }
}

SamiNADashboardData::SamiNADashboardData(String* json) {
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
SamiNADashboardData::asJson ()
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
SamiNADashboardData::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pTime_utcKey = new JsonString(L"time_utc");
    pJsonObject->Add(pTime_utcKey, toJson(getPTimeUtc(), "Integer", ""));

    
    JsonString *pDevice_idKey = new JsonString(L"device_id");
    pJsonObject->Add(pDevice_idKey, toJson(getPDeviceId(), "Float", ""));

    
    JsonString *pBoilerOnKey = new JsonString(L"BoilerOn");
    pJsonObject->Add(pBoilerOnKey, toJson(getPBoilerOn(), "Integer", ""));

    
    JsonString *pBoilerOffKey = new JsonString(L"BoilerOff");
    pJsonObject->Add(pBoilerOffKey, toJson(getPBoilerOff(), "Integer", ""));

    
    JsonString *pTemperatureKey = new JsonString(L"Temperature");
    pJsonObject->Add(pTemperatureKey, toJson(getPTemperature(), "Float", ""));

    
    JsonString *pDate_max_tempKey = new JsonString(L"date_max_temp");
    pJsonObject->Add(pDate_max_tempKey, toJson(getPDateMaxTemp(), "Integer", ""));

    
    JsonString *pDate_min_tempKey = new JsonString(L"date_min_temp");
    pJsonObject->Add(pDate_min_tempKey, toJson(getPDateMinTemp(), "Integer", ""));

    
    JsonString *pMin_tempKey = new JsonString(L"min_temp");
    pJsonObject->Add(pMin_tempKey, toJson(getPMinTemp(), "Float", ""));

    
    JsonString *pMax_tempKey = new JsonString(L"max_temp");
    pJsonObject->Add(pMax_tempKey, toJson(getPMaxTemp(), "Float", ""));

    
    JsonString *pAbsolutePressureKey = new JsonString(L"AbsolutePressure");
    pJsonObject->Add(pAbsolutePressureKey, toJson(getPAbsolutePressure(), "Float", ""));

    
    JsonString *pCO2Key = new JsonString(L"CO2");
    pJsonObject->Add(pCO2Key, toJson(getPCO2(), "Float", ""));

    
    JsonString *pHumidityKey = new JsonString(L"Humidity");
    pJsonObject->Add(pHumidityKey, toJson(getPHumidity(), "Float", ""));

    
    JsonString *pNoiseKey = new JsonString(L"Noise");
    pJsonObject->Add(pNoiseKey, toJson(getPNoise(), "Float", ""));

    
    JsonString *pPressureKey = new JsonString(L"Pressure");
    pJsonObject->Add(pPressureKey, toJson(getPPressure(), "Float", ""));

    
    JsonString *pRainKey = new JsonString(L"Rain");
    pJsonObject->Add(pRainKey, toJson(getPRain(), "Integer", ""));

    
    JsonString *pSum_rain_1Key = new JsonString(L"sum_rain_1");
    pJsonObject->Add(pSum_rain_1Key, toJson(getPSumRain1(), "Integer", ""));

    
    JsonString *pSum_rain_24Key = new JsonString(L"sum_rain_24");
    pJsonObject->Add(pSum_rain_24Key, toJson(getPSumRain24(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiNADashboardData::getPTimeUtc() {
    return pTime_utc;
}
void
SamiNADashboardData::setPTimeUtc(Integer* pTime_utc) {
    this->pTime_utc = pTime_utc;
}

Float*
SamiNADashboardData::getPDeviceId() {
    return pDevice_id;
}
void
SamiNADashboardData::setPDeviceId(Float* pDevice_id) {
    this->pDevice_id = pDevice_id;
}

Integer*
SamiNADashboardData::getPBoilerOn() {
    return pBoilerOn;
}
void
SamiNADashboardData::setPBoilerOn(Integer* pBoilerOn) {
    this->pBoilerOn = pBoilerOn;
}

Integer*
SamiNADashboardData::getPBoilerOff() {
    return pBoilerOff;
}
void
SamiNADashboardData::setPBoilerOff(Integer* pBoilerOff) {
    this->pBoilerOff = pBoilerOff;
}

Float*
SamiNADashboardData::getPTemperature() {
    return pTemperature;
}
void
SamiNADashboardData::setPTemperature(Float* pTemperature) {
    this->pTemperature = pTemperature;
}

Integer*
SamiNADashboardData::getPDateMaxTemp() {
    return pDate_max_temp;
}
void
SamiNADashboardData::setPDateMaxTemp(Integer* pDate_max_temp) {
    this->pDate_max_temp = pDate_max_temp;
}

Integer*
SamiNADashboardData::getPDateMinTemp() {
    return pDate_min_temp;
}
void
SamiNADashboardData::setPDateMinTemp(Integer* pDate_min_temp) {
    this->pDate_min_temp = pDate_min_temp;
}

Float*
SamiNADashboardData::getPMinTemp() {
    return pMin_temp;
}
void
SamiNADashboardData::setPMinTemp(Float* pMin_temp) {
    this->pMin_temp = pMin_temp;
}

Float*
SamiNADashboardData::getPMaxTemp() {
    return pMax_temp;
}
void
SamiNADashboardData::setPMaxTemp(Float* pMax_temp) {
    this->pMax_temp = pMax_temp;
}

Float*
SamiNADashboardData::getPAbsolutePressure() {
    return pAbsolutePressure;
}
void
SamiNADashboardData::setPAbsolutePressure(Float* pAbsolutePressure) {
    this->pAbsolutePressure = pAbsolutePressure;
}

Float*
SamiNADashboardData::getPCO2() {
    return pCO2;
}
void
SamiNADashboardData::setPCO2(Float* pCO2) {
    this->pCO2 = pCO2;
}

Float*
SamiNADashboardData::getPHumidity() {
    return pHumidity;
}
void
SamiNADashboardData::setPHumidity(Float* pHumidity) {
    this->pHumidity = pHumidity;
}

Float*
SamiNADashboardData::getPNoise() {
    return pNoise;
}
void
SamiNADashboardData::setPNoise(Float* pNoise) {
    this->pNoise = pNoise;
}

Float*
SamiNADashboardData::getPPressure() {
    return pPressure;
}
void
SamiNADashboardData::setPPressure(Float* pPressure) {
    this->pPressure = pPressure;
}

Integer*
SamiNADashboardData::getPRain() {
    return pRain;
}
void
SamiNADashboardData::setPRain(Integer* pRain) {
    this->pRain = pRain;
}

Integer*
SamiNADashboardData::getPSumRain1() {
    return pSum_rain_1;
}
void
SamiNADashboardData::setPSumRain1(Integer* pSum_rain_1) {
    this->pSum_rain_1 = pSum_rain_1;
}

Integer*
SamiNADashboardData::getPSumRain24() {
    return pSum_rain_24;
}
void
SamiNADashboardData::setPSumRain24(Integer* pSum_rain_24) {
    this->pSum_rain_24 = pSum_rain_24;
}



} /* namespace Swagger */

