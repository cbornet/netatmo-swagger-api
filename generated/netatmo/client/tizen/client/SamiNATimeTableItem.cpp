
#include "SamiNATimeTableItem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNATimeTableItem::SamiNATimeTableItem() {
    init();
}

SamiNATimeTableItem::~SamiNATimeTableItem() {
    this->cleanup();
}

void
SamiNATimeTableItem::init() {
    pId = null;
    pM_offset = null;
    
}

void
SamiNATimeTableItem::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pM_offset != null) {
        
        delete pM_offset;
        pM_offset = null;
    }
    
}


SamiNATimeTableItem*
SamiNATimeTableItem::fromJson(String* json) {
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
SamiNATimeTableItem::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pM_offsetKey = new JsonString(L"m_offset");
        IJsonValue* pM_offsetVal = null;
        pJsonObject->GetValue(pM_offsetKey, pM_offsetVal);
        if(pM_offsetVal != null) {
            
            pM_offset = new Integer();
            jsonToValue(pM_offset, pM_offsetVal, L"Integer", L"Integer");
        }
        delete pM_offsetKey;
        
    }
}

SamiNATimeTableItem::SamiNATimeTableItem(String* json) {
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
SamiNATimeTableItem::asJson ()
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
SamiNATimeTableItem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pM_offsetKey = new JsonString(L"m_offset");
    pJsonObject->Add(pM_offsetKey, toJson(getPMOffset(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiNATimeTableItem::getPId() {
    return pId;
}
void
SamiNATimeTableItem::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiNATimeTableItem::getPMOffset() {
    return pM_offset;
}
void
SamiNATimeTableItem::setPMOffset(Integer* pM_offset) {
    this->pM_offset = pM_offset;
}



} /* namespace Swagger */

