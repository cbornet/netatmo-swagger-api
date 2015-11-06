
#include "SamiNAMeasureBodyElem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAMeasureBodyElem::SamiNAMeasureBodyElem() {
    init();
}

SamiNAMeasureBodyElem::~SamiNAMeasureBodyElem() {
    this->cleanup();
}

void
SamiNAMeasureBodyElem::init() {
    pBeg_time = null;
    pStep_time = null;
    pValue = null;
    
}

void
SamiNAMeasureBodyElem::cleanup() {
    if(pBeg_time != null) {
        
        delete pBeg_time;
        pBeg_time = null;
    }
    if(pStep_time != null) {
        
        delete pStep_time;
        pStep_time = null;
    }
    if(pValue != null) {
        pValue->RemoveAll(true);
        delete pValue;
        pValue = null;
    }
    
}


SamiNAMeasureBodyElem*
SamiNAMeasureBodyElem::fromJson(String* json) {
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
SamiNAMeasureBodyElem::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBeg_timeKey = new JsonString(L"beg_time");
        IJsonValue* pBeg_timeVal = null;
        pJsonObject->GetValue(pBeg_timeKey, pBeg_timeVal);
        if(pBeg_timeVal != null) {
            
            pBeg_time = new Integer();
            jsonToValue(pBeg_time, pBeg_timeVal, L"Integer", L"Integer");
        }
        delete pBeg_timeKey;
        JsonString* pStep_timeKey = new JsonString(L"step_time");
        IJsonValue* pStep_timeVal = null;
        pJsonObject->GetValue(pStep_timeKey, pStep_timeVal);
        if(pStep_timeVal != null) {
            
            pStep_time = new Integer();
            jsonToValue(pStep_time, pStep_timeVal, L"Integer", L"Integer");
        }
        delete pStep_timeKey;
        JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            pValue = new ArrayList();
            
            jsonToValue(pValue, pValueVal, L"IList", L"IList");
        }
        delete pValueKey;
        
    }
}

SamiNAMeasureBodyElem::SamiNAMeasureBodyElem(String* json) {
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
SamiNAMeasureBodyElem::asJson ()
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
SamiNAMeasureBodyElem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pBeg_timeKey = new JsonString(L"beg_time");
    pJsonObject->Add(pBeg_timeKey, toJson(getPBegTime(), "Integer", ""));

    
    JsonString *pStep_timeKey = new JsonString(L"step_time");
    pJsonObject->Add(pStep_timeKey, toJson(getPStepTime(), "Integer", ""));

    
    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "IList", "array"));

    
    return pJsonObject;
}

Integer*
SamiNAMeasureBodyElem::getPBegTime() {
    return pBeg_time;
}
void
SamiNAMeasureBodyElem::setPBegTime(Integer* pBeg_time) {
    this->pBeg_time = pBeg_time;
}

Integer*
SamiNAMeasureBodyElem::getPStepTime() {
    return pStep_time;
}
void
SamiNAMeasureBodyElem::setPStepTime(Integer* pStep_time) {
    this->pStep_time = pStep_time;
}

IList*
SamiNAMeasureBodyElem::getPValue() {
    return pValue;
}
void
SamiNAMeasureBodyElem::setPValue(IList* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

