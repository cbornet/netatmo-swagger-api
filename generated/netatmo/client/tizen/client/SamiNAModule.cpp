
#include "SamiNAModule.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAModule::SamiNAModule() {
    init();
}

SamiNAModule::~SamiNAModule() {
    this->cleanup();
}

void
SamiNAModule::init() {
    p_id = null;
    pDate_setup = null;
    pFirmware = null;
    pType = null;
    pModule_name = null;
    pMain_device = null;
    pLast_message = null;
    pLast_seen = null;
    pPublic_ext_data = null;
    pRf_status = null;
    pBattery_vp = null;
    pTherm_orientation = null;
    pTherm_relay_cmd = null;
    pDashboard_data = null;
    pData_type = null;
    
}

void
SamiNAModule::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pDate_setup != null) {
        
        delete pDate_setup;
        pDate_setup = null;
    }
    if(pFirmware != null) {
        
        delete pFirmware;
        pFirmware = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pModule_name != null) {
        
        delete pModule_name;
        pModule_name = null;
    }
    if(pMain_device != null) {
        
        delete pMain_device;
        pMain_device = null;
    }
    if(pLast_message != null) {
        
        delete pLast_message;
        pLast_message = null;
    }
    if(pLast_seen != null) {
        
        delete pLast_seen;
        pLast_seen = null;
    }
    if(pPublic_ext_data != null) {
        
        delete pPublic_ext_data;
        pPublic_ext_data = null;
    }
    if(pRf_status != null) {
        
        delete pRf_status;
        pRf_status = null;
    }
    if(pBattery_vp != null) {
        
        delete pBattery_vp;
        pBattery_vp = null;
    }
    if(pTherm_orientation != null) {
        
        delete pTherm_orientation;
        pTherm_orientation = null;
    }
    if(pTherm_relay_cmd != null) {
        
        delete pTherm_relay_cmd;
        pTherm_relay_cmd = null;
    }
    if(pDashboard_data != null) {
        
        delete pDashboard_data;
        pDashboard_data = null;
    }
    if(pData_type != null) {
        pData_type->RemoveAll(true);
        delete pData_type;
        pData_type = null;
    }
    
}


SamiNAModule*
SamiNAModule::fromJson(String* json) {
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
SamiNAModule::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new String();
            jsonToValue(p_id, p_idVal, L"String", L"String");
        }
        delete p_idKey;
        JsonString* pDate_setupKey = new JsonString(L"date_setup");
        IJsonValue* pDate_setupVal = null;
        pJsonObject->GetValue(pDate_setupKey, pDate_setupVal);
        if(pDate_setupVal != null) {
            
            pDate_setup = new SamiNADate();
            jsonToValue(pDate_setup, pDate_setupVal, L"SamiNADate", L"SamiNADate");
        }
        delete pDate_setupKey;
        JsonString* pFirmwareKey = new JsonString(L"firmware");
        IJsonValue* pFirmwareVal = null;
        pJsonObject->GetValue(pFirmwareKey, pFirmwareVal);
        if(pFirmwareVal != null) {
            
            pFirmware = new Integer();
            jsonToValue(pFirmware, pFirmwareVal, L"Integer", L"Integer");
        }
        delete pFirmwareKey;
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pModule_nameKey = new JsonString(L"module_name");
        IJsonValue* pModule_nameVal = null;
        pJsonObject->GetValue(pModule_nameKey, pModule_nameVal);
        if(pModule_nameVal != null) {
            
            pModule_name = new String();
            jsonToValue(pModule_name, pModule_nameVal, L"String", L"String");
        }
        delete pModule_nameKey;
        JsonString* pMain_deviceKey = new JsonString(L"main_device");
        IJsonValue* pMain_deviceVal = null;
        pJsonObject->GetValue(pMain_deviceKey, pMain_deviceVal);
        if(pMain_deviceVal != null) {
            
            pMain_device = new String();
            jsonToValue(pMain_device, pMain_deviceVal, L"String", L"String");
        }
        delete pMain_deviceKey;
        JsonString* pLast_messageKey = new JsonString(L"last_message");
        IJsonValue* pLast_messageVal = null;
        pJsonObject->GetValue(pLast_messageKey, pLast_messageVal);
        if(pLast_messageVal != null) {
            
            pLast_message = new Integer();
            jsonToValue(pLast_message, pLast_messageVal, L"Integer", L"Integer");
        }
        delete pLast_messageKey;
        JsonString* pLast_seenKey = new JsonString(L"last_seen");
        IJsonValue* pLast_seenVal = null;
        pJsonObject->GetValue(pLast_seenKey, pLast_seenVal);
        if(pLast_seenVal != null) {
            
            pLast_seen = new Integer();
            jsonToValue(pLast_seen, pLast_seenVal, L"Integer", L"Integer");
        }
        delete pLast_seenKey;
        JsonString* pPublic_ext_dataKey = new JsonString(L"public_ext_data");
        IJsonValue* pPublic_ext_dataVal = null;
        pJsonObject->GetValue(pPublic_ext_dataKey, pPublic_ext_dataVal);
        if(pPublic_ext_dataVal != null) {
            
            pPublic_ext_data = new Boolean(false);
            jsonToValue(pPublic_ext_data, pPublic_ext_dataVal, L"Boolean", L"Boolean");
        }
        delete pPublic_ext_dataKey;
        JsonString* pRf_statusKey = new JsonString(L"rf_status");
        IJsonValue* pRf_statusVal = null;
        pJsonObject->GetValue(pRf_statusKey, pRf_statusVal);
        if(pRf_statusVal != null) {
            
            pRf_status = new Integer();
            jsonToValue(pRf_status, pRf_statusVal, L"Integer", L"Integer");
        }
        delete pRf_statusKey;
        JsonString* pBattery_vpKey = new JsonString(L"battery_vp");
        IJsonValue* pBattery_vpVal = null;
        pJsonObject->GetValue(pBattery_vpKey, pBattery_vpVal);
        if(pBattery_vpVal != null) {
            
            pBattery_vp = new Integer();
            jsonToValue(pBattery_vp, pBattery_vpVal, L"Integer", L"Integer");
        }
        delete pBattery_vpKey;
        JsonString* pTherm_orientationKey = new JsonString(L"therm_orientation");
        IJsonValue* pTherm_orientationVal = null;
        pJsonObject->GetValue(pTherm_orientationKey, pTherm_orientationVal);
        if(pTherm_orientationVal != null) {
            
            pTherm_orientation = new Integer();
            jsonToValue(pTherm_orientation, pTherm_orientationVal, L"Integer", L"Integer");
        }
        delete pTherm_orientationKey;
        JsonString* pTherm_relay_cmdKey = new JsonString(L"therm_relay_cmd");
        IJsonValue* pTherm_relay_cmdVal = null;
        pJsonObject->GetValue(pTherm_relay_cmdKey, pTherm_relay_cmdVal);
        if(pTherm_relay_cmdVal != null) {
            
            pTherm_relay_cmd = new Integer();
            jsonToValue(pTherm_relay_cmd, pTherm_relay_cmdVal, L"Integer", L"Integer");
        }
        delete pTherm_relay_cmdKey;
        JsonString* pDashboard_dataKey = new JsonString(L"dashboard_data");
        IJsonValue* pDashboard_dataVal = null;
        pJsonObject->GetValue(pDashboard_dataKey, pDashboard_dataVal);
        if(pDashboard_dataVal != null) {
            
            pDashboard_data = new SamiNADashboardData();
            jsonToValue(pDashboard_data, pDashboard_dataVal, L"SamiNADashboardData", L"SamiNADashboardData");
        }
        delete pDashboard_dataKey;
        JsonString* pData_typeKey = new JsonString(L"data_type");
        IJsonValue* pData_typeVal = null;
        pJsonObject->GetValue(pData_typeKey, pData_typeVal);
        if(pData_typeVal != null) {
            pData_type = new ArrayList();
            
            jsonToValue(pData_type, pData_typeVal, L"IList", L"String");
        }
        delete pData_typeKey;
        
    }
}

SamiNAModule::SamiNAModule(String* json) {
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
SamiNAModule::asJson ()
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
SamiNAModule::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pDate_setupKey = new JsonString(L"date_setup");
    pJsonObject->Add(pDate_setupKey, toJson(getPDateSetup(), "SamiNADate", ""));

    
    JsonString *pFirmwareKey = new JsonString(L"firmware");
    pJsonObject->Add(pFirmwareKey, toJson(getPFirmware(), "Integer", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pModule_nameKey = new JsonString(L"module_name");
    pJsonObject->Add(pModule_nameKey, toJson(getPModuleName(), "String", ""));

    
    JsonString *pMain_deviceKey = new JsonString(L"main_device");
    pJsonObject->Add(pMain_deviceKey, toJson(getPMainDevice(), "String", ""));

    
    JsonString *pLast_messageKey = new JsonString(L"last_message");
    pJsonObject->Add(pLast_messageKey, toJson(getPLastMessage(), "Integer", ""));

    
    JsonString *pLast_seenKey = new JsonString(L"last_seen");
    pJsonObject->Add(pLast_seenKey, toJson(getPLastSeen(), "Integer", ""));

    
    JsonString *pPublic_ext_dataKey = new JsonString(L"public_ext_data");
    pJsonObject->Add(pPublic_ext_dataKey, toJson(getPPublicExtData(), "Boolean", ""));

    
    JsonString *pRf_statusKey = new JsonString(L"rf_status");
    pJsonObject->Add(pRf_statusKey, toJson(getPRfStatus(), "Integer", ""));

    
    JsonString *pBattery_vpKey = new JsonString(L"battery_vp");
    pJsonObject->Add(pBattery_vpKey, toJson(getPBatteryVp(), "Integer", ""));

    
    JsonString *pTherm_orientationKey = new JsonString(L"therm_orientation");
    pJsonObject->Add(pTherm_orientationKey, toJson(getPThermOrientation(), "Integer", ""));

    
    JsonString *pTherm_relay_cmdKey = new JsonString(L"therm_relay_cmd");
    pJsonObject->Add(pTherm_relay_cmdKey, toJson(getPThermRelayCmd(), "Integer", ""));

    
    JsonString *pDashboard_dataKey = new JsonString(L"dashboard_data");
    pJsonObject->Add(pDashboard_dataKey, toJson(getPDashboardData(), "SamiNADashboardData", ""));

    
    JsonString *pData_typeKey = new JsonString(L"data_type");
    pJsonObject->Add(pData_typeKey, toJson(getPDataType(), "String", "array"));

    
    return pJsonObject;
}

String*
SamiNAModule::getPId() {
    return p_id;
}
void
SamiNAModule::setPId(String* p_id) {
    this->p_id = p_id;
}

SamiNADate*
SamiNAModule::getPDateSetup() {
    return pDate_setup;
}
void
SamiNAModule::setPDateSetup(SamiNADate* pDate_setup) {
    this->pDate_setup = pDate_setup;
}

Integer*
SamiNAModule::getPFirmware() {
    return pFirmware;
}
void
SamiNAModule::setPFirmware(Integer* pFirmware) {
    this->pFirmware = pFirmware;
}

String*
SamiNAModule::getPType() {
    return pType;
}
void
SamiNAModule::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiNAModule::getPModuleName() {
    return pModule_name;
}
void
SamiNAModule::setPModuleName(String* pModule_name) {
    this->pModule_name = pModule_name;
}

String*
SamiNAModule::getPMainDevice() {
    return pMain_device;
}
void
SamiNAModule::setPMainDevice(String* pMain_device) {
    this->pMain_device = pMain_device;
}

Integer*
SamiNAModule::getPLastMessage() {
    return pLast_message;
}
void
SamiNAModule::setPLastMessage(Integer* pLast_message) {
    this->pLast_message = pLast_message;
}

Integer*
SamiNAModule::getPLastSeen() {
    return pLast_seen;
}
void
SamiNAModule::setPLastSeen(Integer* pLast_seen) {
    this->pLast_seen = pLast_seen;
}

Boolean*
SamiNAModule::getPPublicExtData() {
    return pPublic_ext_data;
}
void
SamiNAModule::setPPublicExtData(Boolean* pPublic_ext_data) {
    this->pPublic_ext_data = pPublic_ext_data;
}

Integer*
SamiNAModule::getPRfStatus() {
    return pRf_status;
}
void
SamiNAModule::setPRfStatus(Integer* pRf_status) {
    this->pRf_status = pRf_status;
}

Integer*
SamiNAModule::getPBatteryVp() {
    return pBattery_vp;
}
void
SamiNAModule::setPBatteryVp(Integer* pBattery_vp) {
    this->pBattery_vp = pBattery_vp;
}

Integer*
SamiNAModule::getPThermOrientation() {
    return pTherm_orientation;
}
void
SamiNAModule::setPThermOrientation(Integer* pTherm_orientation) {
    this->pTherm_orientation = pTherm_orientation;
}

Integer*
SamiNAModule::getPThermRelayCmd() {
    return pTherm_relay_cmd;
}
void
SamiNAModule::setPThermRelayCmd(Integer* pTherm_relay_cmd) {
    this->pTherm_relay_cmd = pTherm_relay_cmd;
}

SamiNADashboardData*
SamiNAModule::getPDashboardData() {
    return pDashboard_data;
}
void
SamiNAModule::setPDashboardData(SamiNADashboardData* pDashboard_data) {
    this->pDashboard_data = pDashboard_data;
}

IList*
SamiNAModule::getPDataType() {
    return pData_type;
}
void
SamiNAModule::setPDataType(IList* pData_type) {
    this->pData_type = pData_type;
}



} /* namespace Swagger */

