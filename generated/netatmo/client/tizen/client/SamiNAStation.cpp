
#include "SamiNAStation.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAStation::SamiNAStation() {
    init();
}

SamiNAStation::~SamiNAStation() {
    this->cleanup();
}

void
SamiNAStation::init() {
    pLag_down = null;
    pLag_up = null;
    pOff_overshoot = null;
    pOn_overshoot = null;
    pPk = null;
    pTau = null;
    
}

void
SamiNAStation::cleanup() {
    if(pLag_down != null) {
        
        delete pLag_down;
        pLag_down = null;
    }
    if(pLag_up != null) {
        
        delete pLag_up;
        pLag_up = null;
    }
    if(pOff_overshoot != null) {
        
        delete pOff_overshoot;
        pOff_overshoot = null;
    }
    if(pOn_overshoot != null) {
        
        delete pOn_overshoot;
        pOn_overshoot = null;
    }
    if(pPk != null) {
        
        delete pPk;
        pPk = null;
    }
    if(pTau != null) {
        
        delete pTau;
        pTau = null;
    }
    
}


SamiNAStation*
SamiNAStation::fromJson(String* json) {
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
SamiNAStation::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pLag_downKey = new JsonString(L"lag_down");
        IJsonValue* pLag_downVal = null;
        pJsonObject->GetValue(pLag_downKey, pLag_downVal);
        if(pLag_downVal != null) {
            
            pLag_down = new Integer();
            jsonToValue(pLag_down, pLag_downVal, L"Integer", L"Integer");
        }
        delete pLag_downKey;
        JsonString* pLag_upKey = new JsonString(L"lag_up");
        IJsonValue* pLag_upVal = null;
        pJsonObject->GetValue(pLag_upKey, pLag_upVal);
        if(pLag_upVal != null) {
            
            pLag_up = new Integer();
            jsonToValue(pLag_up, pLag_upVal, L"Integer", L"Integer");
        }
        delete pLag_upKey;
        JsonString* pOff_overshootKey = new JsonString(L"off_overshoot");
        IJsonValue* pOff_overshootVal = null;
        pJsonObject->GetValue(pOff_overshootKey, pOff_overshootVal);
        if(pOff_overshootVal != null) {
            
            pOff_overshoot = new Float();
            jsonToValue(pOff_overshoot, pOff_overshootVal, L"Float", L"Float");
        }
        delete pOff_overshootKey;
        JsonString* pOn_overshootKey = new JsonString(L"on_overshoot");
        IJsonValue* pOn_overshootVal = null;
        pJsonObject->GetValue(pOn_overshootKey, pOn_overshootVal);
        if(pOn_overshootVal != null) {
            
            pOn_overshoot = new Float();
            jsonToValue(pOn_overshoot, pOn_overshootVal, L"Float", L"Float");
        }
        delete pOn_overshootKey;
        JsonString* pPkKey = new JsonString(L"pk");
        IJsonValue* pPkVal = null;
        pJsonObject->GetValue(pPkKey, pPkVal);
        if(pPkVal != null) {
            
            pPk = new Integer();
            jsonToValue(pPk, pPkVal, L"Integer", L"Integer");
        }
        delete pPkKey;
        JsonString* pTauKey = new JsonString(L"tau");
        IJsonValue* pTauVal = null;
        pJsonObject->GetValue(pTauKey, pTauVal);
        if(pTauVal != null) {
            
            pTau = new Integer();
            jsonToValue(pTau, pTauVal, L"Integer", L"Integer");
        }
        delete pTauKey;
        
    }
}

SamiNAStation::SamiNAStation(String* json) {
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
SamiNAStation::asJson ()
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
SamiNAStation::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pLag_downKey = new JsonString(L"lag_down");
    pJsonObject->Add(pLag_downKey, toJson(getPLagDown(), "Integer", ""));

    
    JsonString *pLag_upKey = new JsonString(L"lag_up");
    pJsonObject->Add(pLag_upKey, toJson(getPLagUp(), "Integer", ""));

    
    JsonString *pOff_overshootKey = new JsonString(L"off_overshoot");
    pJsonObject->Add(pOff_overshootKey, toJson(getPOffOvershoot(), "Float", ""));

    
    JsonString *pOn_overshootKey = new JsonString(L"on_overshoot");
    pJsonObject->Add(pOn_overshootKey, toJson(getPOnOvershoot(), "Float", ""));

    
    JsonString *pPkKey = new JsonString(L"pk");
    pJsonObject->Add(pPkKey, toJson(getPPk(), "Integer", ""));

    
    JsonString *pTauKey = new JsonString(L"tau");
    pJsonObject->Add(pTauKey, toJson(getPTau(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiNAStation::getPLagDown() {
    return pLag_down;
}
void
SamiNAStation::setPLagDown(Integer* pLag_down) {
    this->pLag_down = pLag_down;
}

Integer*
SamiNAStation::getPLagUp() {
    return pLag_up;
}
void
SamiNAStation::setPLagUp(Integer* pLag_up) {
    this->pLag_up = pLag_up;
}

Float*
SamiNAStation::getPOffOvershoot() {
    return pOff_overshoot;
}
void
SamiNAStation::setPOffOvershoot(Float* pOff_overshoot) {
    this->pOff_overshoot = pOff_overshoot;
}

Float*
SamiNAStation::getPOnOvershoot() {
    return pOn_overshoot;
}
void
SamiNAStation::setPOnOvershoot(Float* pOn_overshoot) {
    this->pOn_overshoot = pOn_overshoot;
}

Integer*
SamiNAStation::getPPk() {
    return pPk;
}
void
SamiNAStation::setPPk(Integer* pPk) {
    this->pPk = pPk;
}

Integer*
SamiNAStation::getPTau() {
    return pTau;
}
void
SamiNAStation::setPTau(Integer* pTau) {
    this->pTau = pTau;
}



} /* namespace Swagger */

