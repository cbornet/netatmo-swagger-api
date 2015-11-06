
#include "SamiNAResponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAResponse::SamiNAResponse() {
    init();
}

SamiNAResponse::~SamiNAResponse() {
    this->cleanup();
}

void
SamiNAResponse::init() {
    pStatus = null;
    pTime_exec = null;
    pTime_server = null;
    
}

void
SamiNAResponse::cleanup() {
    if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
    if(pTime_exec != null) {
        
        delete pTime_exec;
        pTime_exec = null;
    }
    if(pTime_server != null) {
        
        delete pTime_server;
        pTime_server = null;
    }
    
}


SamiNAResponse*
SamiNAResponse::fromJson(String* json) {
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
SamiNAResponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
        JsonString* pTime_execKey = new JsonString(L"time_exec");
        IJsonValue* pTime_execVal = null;
        pJsonObject->GetValue(pTime_execKey, pTime_execVal);
        if(pTime_execVal != null) {
            
            pTime_exec = new Double();
            jsonToValue(pTime_exec, pTime_execVal, L"Double", L"Double");
        }
        delete pTime_execKey;
        JsonString* pTime_serverKey = new JsonString(L"time_server");
        IJsonValue* pTime_serverVal = null;
        pJsonObject->GetValue(pTime_serverKey, pTime_serverVal);
        if(pTime_serverVal != null) {
            
            pTime_server = new Integer();
            jsonToValue(pTime_server, pTime_serverVal, L"Integer", L"Integer");
        }
        delete pTime_serverKey;
        
    }
}

SamiNAResponse::SamiNAResponse(String* json) {
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
SamiNAResponse::asJson ()
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
SamiNAResponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    
    JsonString *pTime_execKey = new JsonString(L"time_exec");
    pJsonObject->Add(pTime_execKey, toJson(getPTimeExec(), "Double", ""));

    
    JsonString *pTime_serverKey = new JsonString(L"time_server");
    pJsonObject->Add(pTime_serverKey, toJson(getPTimeServer(), "Integer", ""));

    
    return pJsonObject;
}

String*
SamiNAResponse::getPStatus() {
    return pStatus;
}
void
SamiNAResponse::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Double*
SamiNAResponse::getPTimeExec() {
    return pTime_exec;
}
void
SamiNAResponse::setPTimeExec(Double* pTime_exec) {
    this->pTime_exec = pTime_exec;
}

Integer*
SamiNAResponse::getPTimeServer() {
    return pTime_server;
}
void
SamiNAResponse::setPTimeServer(Integer* pTime_server) {
    this->pTime_server = pTime_server;
}



} /* namespace Swagger */

