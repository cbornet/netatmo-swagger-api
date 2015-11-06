
#include "SamiNANewScheduleBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNANewScheduleBody::SamiNANewScheduleBody() {
    init();
}

SamiNANewScheduleBody::~SamiNANewScheduleBody() {
    this->cleanup();
}

void
SamiNANewScheduleBody::init() {
    pSchedule_id = null;
    
}

void
SamiNANewScheduleBody::cleanup() {
    if(pSchedule_id != null) {
        
        delete pSchedule_id;
        pSchedule_id = null;
    }
    
}


SamiNANewScheduleBody*
SamiNANewScheduleBody::fromJson(String* json) {
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
SamiNANewScheduleBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pSchedule_idKey = new JsonString(L"schedule_id");
        IJsonValue* pSchedule_idVal = null;
        pJsonObject->GetValue(pSchedule_idKey, pSchedule_idVal);
        if(pSchedule_idVal != null) {
            
            pSchedule_id = new String();
            jsonToValue(pSchedule_id, pSchedule_idVal, L"String", L"String");
        }
        delete pSchedule_idKey;
        
    }
}

SamiNANewScheduleBody::SamiNANewScheduleBody(String* json) {
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
SamiNANewScheduleBody::asJson ()
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
SamiNANewScheduleBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pSchedule_idKey = new JsonString(L"schedule_id");
    pJsonObject->Add(pSchedule_idKey, toJson(getPScheduleId(), "String", ""));

    
    return pJsonObject;
}

String*
SamiNANewScheduleBody::getPScheduleId() {
    return pSchedule_id;
}
void
SamiNANewScheduleBody::setPScheduleId(String* pSchedule_id) {
    this->pSchedule_id = pSchedule_id;
}



} /* namespace Swagger */

