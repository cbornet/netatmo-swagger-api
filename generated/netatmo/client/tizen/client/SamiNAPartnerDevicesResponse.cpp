
#include "SamiNAPartnerDevicesResponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAPartnerDevicesResponse::SamiNAPartnerDevicesResponse() {
    init();
}

SamiNAPartnerDevicesResponse::~SamiNAPartnerDevicesResponse() {
    this->cleanup();
}

void
SamiNAPartnerDevicesResponse::init() {
    pBody = null;
    
}

void
SamiNAPartnerDevicesResponse::cleanup() {
    if(pBody != null) {
        pBody->RemoveAll(true);
        delete pBody;
        pBody = null;
    }
    
}


SamiNAPartnerDevicesResponse*
SamiNAPartnerDevicesResponse::fromJson(String* json) {
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
SamiNAPartnerDevicesResponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            pBody = new ArrayList();
            
            jsonToValue(pBody, pBodyVal, L"IList", L"String");
        }
        delete pBodyKey;
        
    }
}

SamiNAPartnerDevicesResponse::SamiNAPartnerDevicesResponse(String* json) {
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
SamiNAPartnerDevicesResponse::asJson ()
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
SamiNAPartnerDevicesResponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "String", "array"));

    
    return pJsonObject;
}

IList*
SamiNAPartnerDevicesResponse::getPBody() {
    return pBody;
}
void
SamiNAPartnerDevicesResponse::setPBody(IList* pBody) {
    this->pBody = pBody;
}



} /* namespace Swagger */

