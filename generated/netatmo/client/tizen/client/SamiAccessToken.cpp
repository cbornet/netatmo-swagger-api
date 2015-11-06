
#include "SamiAccessToken.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAccessToken::SamiAccessToken() {
    init();
}

SamiAccessToken::~SamiAccessToken() {
    this->cleanup();
}

void
SamiAccessToken::init() {
    pAccess_token = null;
    pRefresh_token = null;
    pExpire_in = null;
    pExpires_in = null;
    pScope = null;
    
}

void
SamiAccessToken::cleanup() {
    if(pAccess_token != null) {
        
        delete pAccess_token;
        pAccess_token = null;
    }
    if(pRefresh_token != null) {
        
        delete pRefresh_token;
        pRefresh_token = null;
    }
    if(pExpire_in != null) {
        
        delete pExpire_in;
        pExpire_in = null;
    }
    if(pExpires_in != null) {
        
        delete pExpires_in;
        pExpires_in = null;
    }
    if(pScope != null) {
        pScope->RemoveAll(true);
        delete pScope;
        pScope = null;
    }
    
}


SamiAccessToken*
SamiAccessToken::fromJson(String* json) {
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
SamiAccessToken::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAccess_tokenKey = new JsonString(L"access_token");
        IJsonValue* pAccess_tokenVal = null;
        pJsonObject->GetValue(pAccess_tokenKey, pAccess_tokenVal);
        if(pAccess_tokenVal != null) {
            
            pAccess_token = new String();
            jsonToValue(pAccess_token, pAccess_tokenVal, L"String", L"String");
        }
        delete pAccess_tokenKey;
        JsonString* pRefresh_tokenKey = new JsonString(L"refresh_token");
        IJsonValue* pRefresh_tokenVal = null;
        pJsonObject->GetValue(pRefresh_tokenKey, pRefresh_tokenVal);
        if(pRefresh_tokenVal != null) {
            
            pRefresh_token = new String();
            jsonToValue(pRefresh_token, pRefresh_tokenVal, L"String", L"String");
        }
        delete pRefresh_tokenKey;
        JsonString* pExpire_inKey = new JsonString(L"expire_in");
        IJsonValue* pExpire_inVal = null;
        pJsonObject->GetValue(pExpire_inKey, pExpire_inVal);
        if(pExpire_inVal != null) {
            
            pExpire_in = new Integer();
            jsonToValue(pExpire_in, pExpire_inVal, L"Integer", L"Integer");
        }
        delete pExpire_inKey;
        JsonString* pExpires_inKey = new JsonString(L"expires_in");
        IJsonValue* pExpires_inVal = null;
        pJsonObject->GetValue(pExpires_inKey, pExpires_inVal);
        if(pExpires_inVal != null) {
            
            pExpires_in = new Integer();
            jsonToValue(pExpires_in, pExpires_inVal, L"Integer", L"Integer");
        }
        delete pExpires_inKey;
        JsonString* pScopeKey = new JsonString(L"scope");
        IJsonValue* pScopeVal = null;
        pJsonObject->GetValue(pScopeKey, pScopeVal);
        if(pScopeVal != null) {
            pScope = new ArrayList();
            
            jsonToValue(pScope, pScopeVal, L"IList", L"String");
        }
        delete pScopeKey;
        
    }
}

SamiAccessToken::SamiAccessToken(String* json) {
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
SamiAccessToken::asJson ()
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
SamiAccessToken::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pAccess_tokenKey = new JsonString(L"access_token");
    pJsonObject->Add(pAccess_tokenKey, toJson(getPAccessToken(), "String", ""));

    
    JsonString *pRefresh_tokenKey = new JsonString(L"refresh_token");
    pJsonObject->Add(pRefresh_tokenKey, toJson(getPRefreshToken(), "String", ""));

    
    JsonString *pExpire_inKey = new JsonString(L"expire_in");
    pJsonObject->Add(pExpire_inKey, toJson(getPExpireIn(), "Integer", ""));

    
    JsonString *pExpires_inKey = new JsonString(L"expires_in");
    pJsonObject->Add(pExpires_inKey, toJson(getPExpiresIn(), "Integer", ""));

    
    JsonString *pScopeKey = new JsonString(L"scope");
    pJsonObject->Add(pScopeKey, toJson(getPScope(), "String", "array"));

    
    return pJsonObject;
}

String*
SamiAccessToken::getPAccessToken() {
    return pAccess_token;
}
void
SamiAccessToken::setPAccessToken(String* pAccess_token) {
    this->pAccess_token = pAccess_token;
}

String*
SamiAccessToken::getPRefreshToken() {
    return pRefresh_token;
}
void
SamiAccessToken::setPRefreshToken(String* pRefresh_token) {
    this->pRefresh_token = pRefresh_token;
}

Integer*
SamiAccessToken::getPExpireIn() {
    return pExpire_in;
}
void
SamiAccessToken::setPExpireIn(Integer* pExpire_in) {
    this->pExpire_in = pExpire_in;
}

Integer*
SamiAccessToken::getPExpiresIn() {
    return pExpires_in;
}
void
SamiAccessToken::setPExpiresIn(Integer* pExpires_in) {
    this->pExpires_in = pExpires_in;
}

IList*
SamiAccessToken::getPScope() {
    return pScope;
}
void
SamiAccessToken::setPScope(IList* pScope) {
    this->pScope = pScope;
}



} /* namespace Swagger */

