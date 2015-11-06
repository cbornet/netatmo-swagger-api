
#include "SamiNAZone.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAZone::SamiNAZone() {
    init();
}

SamiNAZone::~SamiNAZone() {
    this->cleanup();
}

void
SamiNAZone::init() {
    pId = null;
    pType = null;
    pName = null;
    pTemp = null;
    
}

void
SamiNAZone::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pTemp != null) {
        
        delete pTemp;
        pTemp = null;
    }
    
}


SamiNAZone*
SamiNAZone::fromJson(String* json) {
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
SamiNAZone::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new Integer();
            jsonToValue(pType, pTypeVal, L"Integer", L"Integer");
        }
        delete pTypeKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pTempKey = new JsonString(L"temp");
        IJsonValue* pTempVal = null;
        pJsonObject->GetValue(pTempKey, pTempVal);
        if(pTempVal != null) {
            
            pTemp = new Float();
            jsonToValue(pTemp, pTempVal, L"Float", L"Float");
        }
        delete pTempKey;
        
    }
}

SamiNAZone::SamiNAZone(String* json) {
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
SamiNAZone::asJson ()
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
SamiNAZone::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "Integer", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pTempKey = new JsonString(L"temp");
    pJsonObject->Add(pTempKey, toJson(getPTemp(), "Float", ""));

    
    return pJsonObject;
}

Integer*
SamiNAZone::getPId() {
    return pId;
}
void
SamiNAZone::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiNAZone::getPType() {
    return pType;
}
void
SamiNAZone::setPType(Integer* pType) {
    this->pType = pType;
}

String*
SamiNAZone::getPName() {
    return pName;
}
void
SamiNAZone::setPName(String* pName) {
    this->pName = pName;
}

Float*
SamiNAZone::getPTemp() {
    return pTemp;
}
void
SamiNAZone::setPTemp(Float* pTemp) {
    this->pTemp = pTemp;
}



} /* namespace Swagger */

