
#include "SamiNADate.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNADate::SamiNADate() {
    init();
}

SamiNADate::~SamiNADate() {
    this->cleanup();
}

void
SamiNADate::init() {
    pSec = null;
    pUsec = null;
    
}

void
SamiNADate::cleanup() {
    if(pSec != null) {
        
        delete pSec;
        pSec = null;
    }
    if(pUsec != null) {
        
        delete pUsec;
        pUsec = null;
    }
    
}


SamiNADate*
SamiNADate::fromJson(String* json) {
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
SamiNADate::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pSecKey = new JsonString(L"sec");
        IJsonValue* pSecVal = null;
        pJsonObject->GetValue(pSecKey, pSecVal);
        if(pSecVal != null) {
            
            pSec = new Integer();
            jsonToValue(pSec, pSecVal, L"Integer", L"Integer");
        }
        delete pSecKey;
        JsonString* pUsecKey = new JsonString(L"usec");
        IJsonValue* pUsecVal = null;
        pJsonObject->GetValue(pUsecKey, pUsecVal);
        if(pUsecVal != null) {
            
            pUsec = new Integer();
            jsonToValue(pUsec, pUsecVal, L"Integer", L"Integer");
        }
        delete pUsecKey;
        
    }
}

SamiNADate::SamiNADate(String* json) {
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
SamiNADate::asJson ()
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
SamiNADate::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pSecKey = new JsonString(L"sec");
    pJsonObject->Add(pSecKey, toJson(getPSec(), "Integer", ""));

    
    JsonString *pUsecKey = new JsonString(L"usec");
    pJsonObject->Add(pUsecKey, toJson(getPUsec(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiNADate::getPSec() {
    return pSec;
}
void
SamiNADate::setPSec(Integer* pSec) {
    this->pSec = pSec;
}

Integer*
SamiNADate::getPUsec() {
    return pUsec;
}
void
SamiNADate::setPUsec(Integer* pUsec) {
    this->pUsec = pUsec;
}



} /* namespace Swagger */

