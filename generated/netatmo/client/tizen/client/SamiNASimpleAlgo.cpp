
#include "SamiNASimpleAlgo.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNASimpleAlgo::SamiNASimpleAlgo() {
    init();
}

SamiNASimpleAlgo::~SamiNASimpleAlgo() {
    this->cleanup();
}

void
SamiNASimpleAlgo::init() {
    pHigh_deadband = null;
    
}

void
SamiNASimpleAlgo::cleanup() {
    if(pHigh_deadband != null) {
        
        delete pHigh_deadband;
        pHigh_deadband = null;
    }
    
}


SamiNASimpleAlgo*
SamiNASimpleAlgo::fromJson(String* json) {
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
SamiNASimpleAlgo::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pHigh_deadbandKey = new JsonString(L"high_deadband");
        IJsonValue* pHigh_deadbandVal = null;
        pJsonObject->GetValue(pHigh_deadbandKey, pHigh_deadbandVal);
        if(pHigh_deadbandVal != null) {
            
            pHigh_deadband = new Integer();
            jsonToValue(pHigh_deadband, pHigh_deadbandVal, L"Integer", L"Integer");
        }
        delete pHigh_deadbandKey;
        
    }
}

SamiNASimpleAlgo::SamiNASimpleAlgo(String* json) {
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
SamiNASimpleAlgo::asJson ()
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
SamiNASimpleAlgo::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pHigh_deadbandKey = new JsonString(L"high_deadband");
    pJsonObject->Add(pHigh_deadbandKey, toJson(getPHighDeadband(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiNASimpleAlgo::getPHighDeadband() {
    return pHigh_deadband;
}
void
SamiNASimpleAlgo::setPHighDeadband(Integer* pHigh_deadband) {
    this->pHigh_deadband = pHigh_deadband;
}



} /* namespace Swagger */

