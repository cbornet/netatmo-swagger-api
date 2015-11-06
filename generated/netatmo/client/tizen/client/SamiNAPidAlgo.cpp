
#include "SamiNAPidAlgo.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAPidAlgo::SamiNAPidAlgo() {
    init();
}

SamiNAPidAlgo::~SamiNAPidAlgo() {
    this->cleanup();
}

void
SamiNAPidAlgo::init() {
    pGain = null;
    pPeriod = null;
    pTd = null;
    pTi = null;
    
}

void
SamiNAPidAlgo::cleanup() {
    if(pGain != null) {
        
        delete pGain;
        pGain = null;
    }
    if(pPeriod != null) {
        
        delete pPeriod;
        pPeriod = null;
    }
    if(pTd != null) {
        
        delete pTd;
        pTd = null;
    }
    if(pTi != null) {
        
        delete pTi;
        pTi = null;
    }
    
}


SamiNAPidAlgo*
SamiNAPidAlgo::fromJson(String* json) {
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
SamiNAPidAlgo::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pGainKey = new JsonString(L"gain");
        IJsonValue* pGainVal = null;
        pJsonObject->GetValue(pGainKey, pGainVal);
        if(pGainVal != null) {
            
            pGain = new Integer();
            jsonToValue(pGain, pGainVal, L"Integer", L"Integer");
        }
        delete pGainKey;
        JsonString* pPeriodKey = new JsonString(L"period");
        IJsonValue* pPeriodVal = null;
        pJsonObject->GetValue(pPeriodKey, pPeriodVal);
        if(pPeriodVal != null) {
            
            pPeriod = new Integer();
            jsonToValue(pPeriod, pPeriodVal, L"Integer", L"Integer");
        }
        delete pPeriodKey;
        JsonString* pTdKey = new JsonString(L"td");
        IJsonValue* pTdVal = null;
        pJsonObject->GetValue(pTdKey, pTdVal);
        if(pTdVal != null) {
            
            pTd = new Integer();
            jsonToValue(pTd, pTdVal, L"Integer", L"Integer");
        }
        delete pTdKey;
        JsonString* pTiKey = new JsonString(L"ti");
        IJsonValue* pTiVal = null;
        pJsonObject->GetValue(pTiKey, pTiVal);
        if(pTiVal != null) {
            
            pTi = new Integer();
            jsonToValue(pTi, pTiVal, L"Integer", L"Integer");
        }
        delete pTiKey;
        
    }
}

SamiNAPidAlgo::SamiNAPidAlgo(String* json) {
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
SamiNAPidAlgo::asJson ()
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
SamiNAPidAlgo::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pGainKey = new JsonString(L"gain");
    pJsonObject->Add(pGainKey, toJson(getPGain(), "Integer", ""));

    
    JsonString *pPeriodKey = new JsonString(L"period");
    pJsonObject->Add(pPeriodKey, toJson(getPPeriod(), "Integer", ""));

    
    JsonString *pTdKey = new JsonString(L"td");
    pJsonObject->Add(pTdKey, toJson(getPTd(), "Integer", ""));

    
    JsonString *pTiKey = new JsonString(L"ti");
    pJsonObject->Add(pTiKey, toJson(getPTi(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiNAPidAlgo::getPGain() {
    return pGain;
}
void
SamiNAPidAlgo::setPGain(Integer* pGain) {
    this->pGain = pGain;
}

Integer*
SamiNAPidAlgo::getPPeriod() {
    return pPeriod;
}
void
SamiNAPidAlgo::setPPeriod(Integer* pPeriod) {
    this->pPeriod = pPeriod;
}

Integer*
SamiNAPidAlgo::getPTd() {
    return pTd;
}
void
SamiNAPidAlgo::setPTd(Integer* pTd) {
    this->pTd = pTd;
}

Integer*
SamiNAPidAlgo::getPTi() {
    return pTi;
}
void
SamiNAPidAlgo::setPTi(Integer* pTi) {
    this->pTi = pTi;
}



} /* namespace Swagger */

