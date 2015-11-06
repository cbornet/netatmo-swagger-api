
#include "SamiNAPlace.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAPlace::SamiNAPlace() {
    init();
}

SamiNAPlace::~SamiNAPlace() {
    this->cleanup();
}

void
SamiNAPlace::init() {
    pCity = null;
    pAltitude = null;
    pCountry = null;
    pFrom_ip = null;
    pImproveLocProposed = null;
    pLocation = null;
    pTimezone = null;
    pTrust_location = null;
    
}

void
SamiNAPlace::cleanup() {
    if(pCity != null) {
        
        delete pCity;
        pCity = null;
    }
    if(pAltitude != null) {
        
        delete pAltitude;
        pAltitude = null;
    }
    if(pCountry != null) {
        
        delete pCountry;
        pCountry = null;
    }
    if(pFrom_ip != null) {
        
        delete pFrom_ip;
        pFrom_ip = null;
    }
    if(pImproveLocProposed != null) {
        
        delete pImproveLocProposed;
        pImproveLocProposed = null;
    }
    if(pLocation != null) {
        pLocation->RemoveAll(true);
        delete pLocation;
        pLocation = null;
    }
    if(pTimezone != null) {
        
        delete pTimezone;
        pTimezone = null;
    }
    if(pTrust_location != null) {
        
        delete pTrust_location;
        pTrust_location = null;
    }
    
}


SamiNAPlace*
SamiNAPlace::fromJson(String* json) {
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
SamiNAPlace::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCityKey = new JsonString(L"city");
        IJsonValue* pCityVal = null;
        pJsonObject->GetValue(pCityKey, pCityVal);
        if(pCityVal != null) {
            
            pCity = new String();
            jsonToValue(pCity, pCityVal, L"String", L"String");
        }
        delete pCityKey;
        JsonString* pAltitudeKey = new JsonString(L"altitude");
        IJsonValue* pAltitudeVal = null;
        pJsonObject->GetValue(pAltitudeKey, pAltitudeVal);
        if(pAltitudeVal != null) {
            
            pAltitude = new Float();
            jsonToValue(pAltitude, pAltitudeVal, L"Float", L"Float");
        }
        delete pAltitudeKey;
        JsonString* pCountryKey = new JsonString(L"country");
        IJsonValue* pCountryVal = null;
        pJsonObject->GetValue(pCountryKey, pCountryVal);
        if(pCountryVal != null) {
            
            pCountry = new String();
            jsonToValue(pCountry, pCountryVal, L"String", L"String");
        }
        delete pCountryKey;
        JsonString* pFrom_ipKey = new JsonString(L"from_ip");
        IJsonValue* pFrom_ipVal = null;
        pJsonObject->GetValue(pFrom_ipKey, pFrom_ipVal);
        if(pFrom_ipVal != null) {
            
            pFrom_ip = new Boolean(false);
            jsonToValue(pFrom_ip, pFrom_ipVal, L"Boolean", L"Boolean");
        }
        delete pFrom_ipKey;
        JsonString* pImproveLocProposedKey = new JsonString(L"improveLocProposed");
        IJsonValue* pImproveLocProposedVal = null;
        pJsonObject->GetValue(pImproveLocProposedKey, pImproveLocProposedVal);
        if(pImproveLocProposedVal != null) {
            
            pImproveLocProposed = new Boolean(false);
            jsonToValue(pImproveLocProposed, pImproveLocProposedVal, L"Boolean", L"Boolean");
        }
        delete pImproveLocProposedKey;
        JsonString* pLocationKey = new JsonString(L"location");
        IJsonValue* pLocationVal = null;
        pJsonObject->GetValue(pLocationKey, pLocationVal);
        if(pLocationVal != null) {
            pLocation = new ArrayList();
            
            jsonToValue(pLocation, pLocationVal, L"IList", L"Double");
        }
        delete pLocationKey;
        JsonString* pTimezoneKey = new JsonString(L"timezone");
        IJsonValue* pTimezoneVal = null;
        pJsonObject->GetValue(pTimezoneKey, pTimezoneVal);
        if(pTimezoneVal != null) {
            
            pTimezone = new String();
            jsonToValue(pTimezone, pTimezoneVal, L"String", L"String");
        }
        delete pTimezoneKey;
        JsonString* pTrust_locationKey = new JsonString(L"trust_location");
        IJsonValue* pTrust_locationVal = null;
        pJsonObject->GetValue(pTrust_locationKey, pTrust_locationVal);
        if(pTrust_locationVal != null) {
            
            pTrust_location = new Boolean(false);
            jsonToValue(pTrust_location, pTrust_locationVal, L"Boolean", L"Boolean");
        }
        delete pTrust_locationKey;
        
    }
}

SamiNAPlace::SamiNAPlace(String* json) {
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
SamiNAPlace::asJson ()
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
SamiNAPlace::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getPCity(), "String", ""));

    
    JsonString *pAltitudeKey = new JsonString(L"altitude");
    pJsonObject->Add(pAltitudeKey, toJson(getPAltitude(), "Float", ""));

    
    JsonString *pCountryKey = new JsonString(L"country");
    pJsonObject->Add(pCountryKey, toJson(getPCountry(), "String", ""));

    
    JsonString *pFrom_ipKey = new JsonString(L"from_ip");
    pJsonObject->Add(pFrom_ipKey, toJson(getPFromIp(), "Boolean", ""));

    
    JsonString *pImproveLocProposedKey = new JsonString(L"improveLocProposed");
    pJsonObject->Add(pImproveLocProposedKey, toJson(getPImproveLocProposed(), "Boolean", ""));

    
    JsonString *pLocationKey = new JsonString(L"location");
    pJsonObject->Add(pLocationKey, toJson(getPLocation(), "Double", "array"));

    
    JsonString *pTimezoneKey = new JsonString(L"timezone");
    pJsonObject->Add(pTimezoneKey, toJson(getPTimezone(), "String", ""));

    
    JsonString *pTrust_locationKey = new JsonString(L"trust_location");
    pJsonObject->Add(pTrust_locationKey, toJson(getPTrustLocation(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiNAPlace::getPCity() {
    return pCity;
}
void
SamiNAPlace::setPCity(String* pCity) {
    this->pCity = pCity;
}

Float*
SamiNAPlace::getPAltitude() {
    return pAltitude;
}
void
SamiNAPlace::setPAltitude(Float* pAltitude) {
    this->pAltitude = pAltitude;
}

String*
SamiNAPlace::getPCountry() {
    return pCountry;
}
void
SamiNAPlace::setPCountry(String* pCountry) {
    this->pCountry = pCountry;
}

Boolean*
SamiNAPlace::getPFromIp() {
    return pFrom_ip;
}
void
SamiNAPlace::setPFromIp(Boolean* pFrom_ip) {
    this->pFrom_ip = pFrom_ip;
}

Boolean*
SamiNAPlace::getPImproveLocProposed() {
    return pImproveLocProposed;
}
void
SamiNAPlace::setPImproveLocProposed(Boolean* pImproveLocProposed) {
    this->pImproveLocProposed = pImproveLocProposed;
}

IList*
SamiNAPlace::getPLocation() {
    return pLocation;
}
void
SamiNAPlace::setPLocation(IList* pLocation) {
    this->pLocation = pLocation;
}

String*
SamiNAPlace::getPTimezone() {
    return pTimezone;
}
void
SamiNAPlace::setPTimezone(String* pTimezone) {
    this->pTimezone = pTimezone;
}

Boolean*
SamiNAPlace::getPTrustLocation() {
    return pTrust_location;
}
void
SamiNAPlace::setPTrustLocation(Boolean* pTrust_location) {
    this->pTrust_location = pTrust_location;
}



} /* namespace Swagger */

