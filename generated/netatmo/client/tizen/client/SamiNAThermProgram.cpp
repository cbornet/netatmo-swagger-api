
#include "SamiNAThermProgram.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAThermProgram::SamiNAThermProgram() {
    init();
}

SamiNAThermProgram::~SamiNAThermProgram() {
    this->cleanup();
}

void
SamiNAThermProgram::init() {
    pProgram_id = null;
    pName = null;
    pZones = null;
    pTimetable = null;
    pSelected = null;
    
}

void
SamiNAThermProgram::cleanup() {
    if(pProgram_id != null) {
        
        delete pProgram_id;
        pProgram_id = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pZones != null) {
        pZones->RemoveAll(true);
        delete pZones;
        pZones = null;
    }
    if(pTimetable != null) {
        pTimetable->RemoveAll(true);
        delete pTimetable;
        pTimetable = null;
    }
    if(pSelected != null) {
        
        delete pSelected;
        pSelected = null;
    }
    
}


SamiNAThermProgram*
SamiNAThermProgram::fromJson(String* json) {
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
SamiNAThermProgram::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pProgram_idKey = new JsonString(L"program_id");
        IJsonValue* pProgram_idVal = null;
        pJsonObject->GetValue(pProgram_idKey, pProgram_idVal);
        if(pProgram_idVal != null) {
            
            pProgram_id = new String();
            jsonToValue(pProgram_id, pProgram_idVal, L"String", L"String");
        }
        delete pProgram_idKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pZonesKey = new JsonString(L"zones");
        IJsonValue* pZonesVal = null;
        pJsonObject->GetValue(pZonesKey, pZonesVal);
        if(pZonesVal != null) {
            pZones = new ArrayList();
            
            jsonToValue(pZones, pZonesVal, L"IList", L"SamiNAZone");
        }
        delete pZonesKey;
        JsonString* pTimetableKey = new JsonString(L"timetable");
        IJsonValue* pTimetableVal = null;
        pJsonObject->GetValue(pTimetableKey, pTimetableVal);
        if(pTimetableVal != null) {
            pTimetable = new ArrayList();
            
            jsonToValue(pTimetable, pTimetableVal, L"IList", L"SamiNATimeTableItem");
        }
        delete pTimetableKey;
        JsonString* pSelectedKey = new JsonString(L"selected");
        IJsonValue* pSelectedVal = null;
        pJsonObject->GetValue(pSelectedKey, pSelectedVal);
        if(pSelectedVal != null) {
            
            pSelected = new Boolean(false);
            jsonToValue(pSelected, pSelectedVal, L"Boolean", L"Boolean");
        }
        delete pSelectedKey;
        
    }
}

SamiNAThermProgram::SamiNAThermProgram(String* json) {
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
SamiNAThermProgram::asJson ()
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
SamiNAThermProgram::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pProgram_idKey = new JsonString(L"program_id");
    pJsonObject->Add(pProgram_idKey, toJson(getPProgramId(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pZonesKey = new JsonString(L"zones");
    pJsonObject->Add(pZonesKey, toJson(getPZones(), "SamiNAZone", "array"));

    
    JsonString *pTimetableKey = new JsonString(L"timetable");
    pJsonObject->Add(pTimetableKey, toJson(getPTimetable(), "SamiNATimeTableItem", "array"));

    
    JsonString *pSelectedKey = new JsonString(L"selected");
    pJsonObject->Add(pSelectedKey, toJson(getPSelected(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiNAThermProgram::getPProgramId() {
    return pProgram_id;
}
void
SamiNAThermProgram::setPProgramId(String* pProgram_id) {
    this->pProgram_id = pProgram_id;
}

String*
SamiNAThermProgram::getPName() {
    return pName;
}
void
SamiNAThermProgram::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiNAThermProgram::getPZones() {
    return pZones;
}
void
SamiNAThermProgram::setPZones(IList* pZones) {
    this->pZones = pZones;
}

IList*
SamiNAThermProgram::getPTimetable() {
    return pTimetable;
}
void
SamiNAThermProgram::setPTimetable(IList* pTimetable) {
    this->pTimetable = pTimetable;
}

Boolean*
SamiNAThermProgram::getPSelected() {
    return pSelected;
}
void
SamiNAThermProgram::setPSelected(Boolean* pSelected) {
    this->pSelected = pSelected;
}



} /* namespace Swagger */

