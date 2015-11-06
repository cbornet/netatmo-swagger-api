
#include "SamiNAHouseModelCa.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAHouseModelCa::SamiNAHouseModelCa() {
    init();
}

SamiNAHouseModelCa::~SamiNAHouseModelCa() {
    this->cleanup();
}

void
SamiNAHouseModelCa::init() {
    pTe = null;
    pTi = null;
    pSo = null;
    
}

void
SamiNAHouseModelCa::cleanup() {
    if(pTe != null) {
        
        delete pTe;
        pTe = null;
    }
    if(pTi != null) {
        
        delete pTi;
        pTi = null;
    }
    if(pSo != null) {
        
        delete pSo;
        pSo = null;
    }
    
}


SamiNAHouseModelCa*
SamiNAHouseModelCa::fromJson(String* json) {
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
SamiNAHouseModelCa::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTeKey = new JsonString(L"te");
        IJsonValue* pTeVal = null;
        pJsonObject->GetValue(pTeKey, pTeVal);
        if(pTeVal != null) {
            
            pTe = new Double();
            jsonToValue(pTe, pTeVal, L"Double", L"Double");
        }
        delete pTeKey;
        JsonString* pTiKey = new JsonString(L"ti");
        IJsonValue* pTiVal = null;
        pJsonObject->GetValue(pTiKey, pTiVal);
        if(pTiVal != null) {
            
            pTi = new Integer();
            jsonToValue(pTi, pTiVal, L"Integer", L"Integer");
        }
        delete pTiKey;
        JsonString* pSoKey = new JsonString(L"so");
        IJsonValue* pSoVal = null;
        pJsonObject->GetValue(pSoKey, pSoVal);
        if(pSoVal != null) {
            
            pSo = new String();
            jsonToValue(pSo, pSoVal, L"String", L"String");
        }
        delete pSoKey;
        
    }
}

SamiNAHouseModelCa::SamiNAHouseModelCa(String* json) {
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
SamiNAHouseModelCa::asJson ()
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
SamiNAHouseModelCa::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pTeKey = new JsonString(L"te");
    pJsonObject->Add(pTeKey, toJson(getPTe(), "Double", ""));

    
    JsonString *pTiKey = new JsonString(L"ti");
    pJsonObject->Add(pTiKey, toJson(getPTi(), "Integer", ""));

    
    JsonString *pSoKey = new JsonString(L"so");
    pJsonObject->Add(pSoKey, toJson(getPSo(), "String", ""));

    
    return pJsonObject;
}

Double*
SamiNAHouseModelCa::getPTe() {
    return pTe;
}
void
SamiNAHouseModelCa::setPTe(Double* pTe) {
    this->pTe = pTe;
}

Integer*
SamiNAHouseModelCa::getPTi() {
    return pTi;
}
void
SamiNAHouseModelCa::setPTi(Integer* pTi) {
    this->pTi = pTi;
}

String*
SamiNAHouseModelCa::getPSo() {
    return pSo;
}
void
SamiNAHouseModelCa::setPSo(String* pSo) {
    this->pSo = pSo;
}



} /* namespace Swagger */

