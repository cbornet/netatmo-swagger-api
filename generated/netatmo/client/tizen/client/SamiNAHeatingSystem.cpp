
#include "SamiNAHeatingSystem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAHeatingSystem::SamiNAHeatingSystem() {
    init();
}

SamiNAHeatingSystem::~SamiNAHeatingSystem() {
    this->cleanup();
}

void
SamiNAHeatingSystem::init() {
    pHeating_energy = null;
    pHeating_system_window_seen = null;
    
}

void
SamiNAHeatingSystem::cleanup() {
    if(pHeating_energy != null) {
        
        delete pHeating_energy;
        pHeating_energy = null;
    }
    if(pHeating_system_window_seen != null) {
        
        delete pHeating_system_window_seen;
        pHeating_system_window_seen = null;
    }
    
}


SamiNAHeatingSystem*
SamiNAHeatingSystem::fromJson(String* json) {
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
SamiNAHeatingSystem::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pHeating_energyKey = new JsonString(L"heating_energy");
        IJsonValue* pHeating_energyVal = null;
        pJsonObject->GetValue(pHeating_energyKey, pHeating_energyVal);
        if(pHeating_energyVal != null) {
            
            pHeating_energy = new String();
            jsonToValue(pHeating_energy, pHeating_energyVal, L"String", L"String");
        }
        delete pHeating_energyKey;
        JsonString* pHeating_system_window_seenKey = new JsonString(L"heating_system_window_seen");
        IJsonValue* pHeating_system_window_seenVal = null;
        pJsonObject->GetValue(pHeating_system_window_seenKey, pHeating_system_window_seenVal);
        if(pHeating_system_window_seenVal != null) {
            
            pHeating_system_window_seen = new Boolean(false);
            jsonToValue(pHeating_system_window_seen, pHeating_system_window_seenVal, L"Boolean", L"Boolean");
        }
        delete pHeating_system_window_seenKey;
        
    }
}

SamiNAHeatingSystem::SamiNAHeatingSystem(String* json) {
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
SamiNAHeatingSystem::asJson ()
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
SamiNAHeatingSystem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pHeating_energyKey = new JsonString(L"heating_energy");
    pJsonObject->Add(pHeating_energyKey, toJson(getPHeatingEnergy(), "String", ""));

    
    JsonString *pHeating_system_window_seenKey = new JsonString(L"heating_system_window_seen");
    pJsonObject->Add(pHeating_system_window_seenKey, toJson(getPHeatingSystemWindowSeen(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiNAHeatingSystem::getPHeatingEnergy() {
    return pHeating_energy;
}
void
SamiNAHeatingSystem::setPHeatingEnergy(String* pHeating_energy) {
    this->pHeating_energy = pHeating_energy;
}

Boolean*
SamiNAHeatingSystem::getPHeatingSystemWindowSeen() {
    return pHeating_system_window_seen;
}
void
SamiNAHeatingSystem::setPHeatingSystemWindowSeen(Boolean* pHeating_system_window_seen) {
    this->pHeating_system_window_seen = pHeating_system_window_seen;
}



} /* namespace Swagger */

