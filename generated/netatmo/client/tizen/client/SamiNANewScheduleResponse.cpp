
#include "SamiNANewScheduleResponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNANewScheduleResponse::SamiNANewScheduleResponse() {
    init();
}

SamiNANewScheduleResponse::~SamiNANewScheduleResponse() {
    this->cleanup();
}

void
SamiNANewScheduleResponse::init() {
    pBody = null;
    
}

void
SamiNANewScheduleResponse::cleanup() {
    if(pBody != null) {
        
        delete pBody;
        pBody = null;
    }
    
}


SamiNANewScheduleResponse*
SamiNANewScheduleResponse::fromJson(String* json) {
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
SamiNANewScheduleResponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            
            pBody = new SamiNANewScheduleBody();
            jsonToValue(pBody, pBodyVal, L"SamiNANewScheduleBody", L"SamiNANewScheduleBody");
        }
        delete pBodyKey;
        
    }
}

SamiNANewScheduleResponse::SamiNANewScheduleResponse(String* json) {
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
SamiNANewScheduleResponse::asJson ()
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
SamiNANewScheduleResponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "SamiNANewScheduleBody", ""));

    
    return pJsonObject;
}

SamiNANewScheduleBody*
SamiNANewScheduleResponse::getPBody() {
    return pBody;
}
void
SamiNANewScheduleResponse::setPBody(SamiNANewScheduleBody* pBody) {
    this->pBody = pBody;
}



} /* namespace Swagger */

