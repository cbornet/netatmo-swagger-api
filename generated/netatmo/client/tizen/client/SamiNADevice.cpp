
#include "SamiNADevice.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNADevice::SamiNADevice() {
    init();
}

SamiNADevice::~SamiNADevice() {
    this->cleanup();
}

void
SamiNADevice::init() {
    p_id = null;
    pBehavior = null;
    pCipher_id = null;
    pDate_setup = null;
    pFirmware = null;
    pHw_version = null;
    pHeating_system = null;
    pHouse_model = null;
    pIp = null;
    pLast_fw_update = null;
    pLast_radio_store = null;
    pLast_status_store = null;
    pLast_upgrade = null;
    pModule_name = null;
    pModules = null;
    pPlace = null;
    pSetpoint = null;
    pSetpoint_default_duration = null;
    pSetpoint_order = null;
    pPublic_ext_data = null;
    pStation_name = null;
    pTherm_program = null;
    pTherm_program_backup = null;
    pTherm_program_order = null;
    pType = null;
    pUser_owner = null;
    pUdp_conn = null;
    pWifi_status = null;
    pNew_feature_avail = null;
    pFirst_pid_avail = null;
    pData_type = null;
    
}

void
SamiNADevice::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pBehavior != null) {
        
        delete pBehavior;
        pBehavior = null;
    }
    if(pCipher_id != null) {
        
        delete pCipher_id;
        pCipher_id = null;
    }
    if(pDate_setup != null) {
        
        delete pDate_setup;
        pDate_setup = null;
    }
    if(pFirmware != null) {
        
        delete pFirmware;
        pFirmware = null;
    }
    if(pHw_version != null) {
        
        delete pHw_version;
        pHw_version = null;
    }
    if(pHeating_system != null) {
        
        delete pHeating_system;
        pHeating_system = null;
    }
    if(pHouse_model != null) {
        
        delete pHouse_model;
        pHouse_model = null;
    }
    if(pIp != null) {
        
        delete pIp;
        pIp = null;
    }
    if(pLast_fw_update != null) {
        
        delete pLast_fw_update;
        pLast_fw_update = null;
    }
    if(pLast_radio_store != null) {
        
        delete pLast_radio_store;
        pLast_radio_store = null;
    }
    if(pLast_status_store != null) {
        
        delete pLast_status_store;
        pLast_status_store = null;
    }
    if(pLast_upgrade != null) {
        
        delete pLast_upgrade;
        pLast_upgrade = null;
    }
    if(pModule_name != null) {
        
        delete pModule_name;
        pModule_name = null;
    }
    if(pModules != null) {
        pModules->RemoveAll(true);
        delete pModules;
        pModules = null;
    }
    if(pPlace != null) {
        
        delete pPlace;
        pPlace = null;
    }
    if(pSetpoint != null) {
        
        delete pSetpoint;
        pSetpoint = null;
    }
    if(pSetpoint_default_duration != null) {
        
        delete pSetpoint_default_duration;
        pSetpoint_default_duration = null;
    }
    if(pSetpoint_order != null) {
        pSetpoint_order->RemoveAll(true);
        delete pSetpoint_order;
        pSetpoint_order = null;
    }
    if(pPublic_ext_data != null) {
        
        delete pPublic_ext_data;
        pPublic_ext_data = null;
    }
    if(pStation_name != null) {
        
        delete pStation_name;
        pStation_name = null;
    }
    if(pTherm_program != null) {
        pTherm_program->RemoveAll(true);
        delete pTherm_program;
        pTherm_program = null;
    }
    if(pTherm_program_backup != null) {
        pTherm_program_backup->RemoveAll(true);
        delete pTherm_program_backup;
        pTherm_program_backup = null;
    }
    if(pTherm_program_order != null) {
        pTherm_program_order->RemoveAll(true);
        delete pTherm_program_order;
        pTherm_program_order = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pUser_owner != null) {
        pUser_owner->RemoveAll(true);
        delete pUser_owner;
        pUser_owner = null;
    }
    if(pUdp_conn != null) {
        
        delete pUdp_conn;
        pUdp_conn = null;
    }
    if(pWifi_status != null) {
        
        delete pWifi_status;
        pWifi_status = null;
    }
    if(pNew_feature_avail != null) {
        
        delete pNew_feature_avail;
        pNew_feature_avail = null;
    }
    if(pFirst_pid_avail != null) {
        
        delete pFirst_pid_avail;
        pFirst_pid_avail = null;
    }
    if(pData_type != null) {
        pData_type->RemoveAll(true);
        delete pData_type;
        pData_type = null;
    }
    
}


SamiNADevice*
SamiNADevice::fromJson(String* json) {
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
SamiNADevice::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pBehaviorKey = new JsonString(L"behavior");
        IJsonValue* pBehaviorVal = null;
        pJsonObject->GetValue(pBehaviorKey, pBehaviorVal);
        if(pBehaviorVal != null) {
            
            pBehavior = new Integer();
            jsonToValue(pBehavior, pBehaviorVal, L"Integer", L"Integer");
        }
        delete pBehaviorKey;
        JsonString* pCipher_idKey = new JsonString(L"cipher_id");
        IJsonValue* pCipher_idVal = null;
        pJsonObject->GetValue(pCipher_idKey, pCipher_idVal);
        if(pCipher_idVal != null) {
            
            pCipher_id = new String();
            jsonToValue(pCipher_id, pCipher_idVal, L"String", L"String");
        }
        delete pCipher_idKey;
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
        JsonString* pHw_versionKey = new JsonString(L"hw_version");
        IJsonValue* pHw_versionVal = null;
        pJsonObject->GetValue(pHw_versionKey, pHw_versionVal);
        if(pHw_versionVal != null) {
            
            pHw_version = new Integer();
            jsonToValue(pHw_version, pHw_versionVal, L"Integer", L"Integer");
        }
        delete pHw_versionKey;
        JsonString* pHeating_systemKey = new JsonString(L"heating_system");
        IJsonValue* pHeating_systemVal = null;
        pJsonObject->GetValue(pHeating_systemKey, pHeating_systemVal);
        if(pHeating_systemVal != null) {
            
            pHeating_system = new SamiNAHeatingSystem();
            jsonToValue(pHeating_system, pHeating_systemVal, L"SamiNAHeatingSystem", L"SamiNAHeatingSystem");
        }
        delete pHeating_systemKey;
        JsonString* pHouse_modelKey = new JsonString(L"house_model");
        IJsonValue* pHouse_modelVal = null;
        pJsonObject->GetValue(pHouse_modelKey, pHouse_modelVal);
        if(pHouse_modelVal != null) {
            
            pHouse_model = new SamiNAHouseModel();
            jsonToValue(pHouse_model, pHouse_modelVal, L"SamiNAHouseModel", L"SamiNAHouseModel");
        }
        delete pHouse_modelKey;
        JsonString* pIpKey = new JsonString(L"ip");
        IJsonValue* pIpVal = null;
        pJsonObject->GetValue(pIpKey, pIpVal);
        if(pIpVal != null) {
            
            pIp = new String();
            jsonToValue(pIp, pIpVal, L"String", L"String");
        }
        delete pIpKey;
        JsonString* pLast_fw_updateKey = new JsonString(L"last_fw_update");
        IJsonValue* pLast_fw_updateVal = null;
        pJsonObject->GetValue(pLast_fw_updateKey, pLast_fw_updateVal);
        if(pLast_fw_updateVal != null) {
            
            pLast_fw_update = new Integer();
            jsonToValue(pLast_fw_update, pLast_fw_updateVal, L"Integer", L"Integer");
        }
        delete pLast_fw_updateKey;
        JsonString* pLast_radio_storeKey = new JsonString(L"last_radio_store");
        IJsonValue* pLast_radio_storeVal = null;
        pJsonObject->GetValue(pLast_radio_storeKey, pLast_radio_storeVal);
        if(pLast_radio_storeVal != null) {
            
            pLast_radio_store = new Integer();
            jsonToValue(pLast_radio_store, pLast_radio_storeVal, L"Integer", L"Integer");
        }
        delete pLast_radio_storeKey;
        JsonString* pLast_status_storeKey = new JsonString(L"last_status_store");
        IJsonValue* pLast_status_storeVal = null;
        pJsonObject->GetValue(pLast_status_storeKey, pLast_status_storeVal);
        if(pLast_status_storeVal != null) {
            
            pLast_status_store = new Integer();
            jsonToValue(pLast_status_store, pLast_status_storeVal, L"Integer", L"Integer");
        }
        delete pLast_status_storeKey;
        JsonString* pLast_upgradeKey = new JsonString(L"last_upgrade");
        IJsonValue* pLast_upgradeVal = null;
        pJsonObject->GetValue(pLast_upgradeKey, pLast_upgradeVal);
        if(pLast_upgradeVal != null) {
            
            pLast_upgrade = new Integer();
            jsonToValue(pLast_upgrade, pLast_upgradeVal, L"Integer", L"Integer");
        }
        delete pLast_upgradeKey;
        JsonString* pModule_nameKey = new JsonString(L"module_name");
        IJsonValue* pModule_nameVal = null;
        pJsonObject->GetValue(pModule_nameKey, pModule_nameVal);
        if(pModule_nameVal != null) {
            
            pModule_name = new String();
            jsonToValue(pModule_name, pModule_nameVal, L"String", L"String");
        }
        delete pModule_nameKey;
        JsonString* pModulesKey = new JsonString(L"modules");
        IJsonValue* pModulesVal = null;
        pJsonObject->GetValue(pModulesKey, pModulesVal);
        if(pModulesVal != null) {
            pModules = new ArrayList();
            
            jsonToValue(pModules, pModulesVal, L"IList", L"String");
        }
        delete pModulesKey;
        JsonString* pPlaceKey = new JsonString(L"place");
        IJsonValue* pPlaceVal = null;
        pJsonObject->GetValue(pPlaceKey, pPlaceVal);
        if(pPlaceVal != null) {
            
            pPlace = new SamiNAPlace();
            jsonToValue(pPlace, pPlaceVal, L"SamiNAPlace", L"SamiNAPlace");
        }
        delete pPlaceKey;
        JsonString* pSetpointKey = new JsonString(L"setpoint");
        IJsonValue* pSetpointVal = null;
        pJsonObject->GetValue(pSetpointKey, pSetpointVal);
        if(pSetpointVal != null) {
            
            pSetpoint = null;
            jsonToValue(pSetpoint, pSetpointVal, L"SamiObject", L"SamiObject");
        }
        delete pSetpointKey;
        JsonString* pSetpoint_default_durationKey = new JsonString(L"setpoint_default_duration");
        IJsonValue* pSetpoint_default_durationVal = null;
        pJsonObject->GetValue(pSetpoint_default_durationKey, pSetpoint_default_durationVal);
        if(pSetpoint_default_durationVal != null) {
            
            pSetpoint_default_duration = new Integer();
            jsonToValue(pSetpoint_default_duration, pSetpoint_default_durationVal, L"Integer", L"Integer");
        }
        delete pSetpoint_default_durationKey;
        JsonString* pSetpoint_orderKey = new JsonString(L"setpoint_order");
        IJsonValue* pSetpoint_orderVal = null;
        pJsonObject->GetValue(pSetpoint_orderKey, pSetpoint_orderVal);
        if(pSetpoint_orderVal != null) {
            pSetpoint_order = new HashMap();
            
            jsonToValue(pSetpoint_order, pSetpoint_orderVal, L"HashMap", L"IList");
        }
        delete pSetpoint_orderKey;
        JsonString* pPublic_ext_dataKey = new JsonString(L"public_ext_data");
        IJsonValue* pPublic_ext_dataVal = null;
        pJsonObject->GetValue(pPublic_ext_dataKey, pPublic_ext_dataVal);
        if(pPublic_ext_dataVal != null) {
            
            pPublic_ext_data = new Boolean(false);
            jsonToValue(pPublic_ext_data, pPublic_ext_dataVal, L"Boolean", L"Boolean");
        }
        delete pPublic_ext_dataKey;
        JsonString* pStation_nameKey = new JsonString(L"station_name");
        IJsonValue* pStation_nameVal = null;
        pJsonObject->GetValue(pStation_nameKey, pStation_nameVal);
        if(pStation_nameVal != null) {
            
            pStation_name = new String();
            jsonToValue(pStation_name, pStation_nameVal, L"String", L"String");
        }
        delete pStation_nameKey;
        JsonString* pTherm_programKey = new JsonString(L"therm_program");
        IJsonValue* pTherm_programVal = null;
        pJsonObject->GetValue(pTherm_programKey, pTherm_programVal);
        if(pTherm_programVal != null) {
            pTherm_program = new HashMap();
            
            jsonToValue(pTherm_program, pTherm_programVal, L"HashMap", L"SamiNAThermProgram");
        }
        delete pTherm_programKey;
        JsonString* pTherm_program_backupKey = new JsonString(L"therm_program_backup");
        IJsonValue* pTherm_program_backupVal = null;
        pJsonObject->GetValue(pTherm_program_backupKey, pTherm_program_backupVal);
        if(pTherm_program_backupVal != null) {
            pTherm_program_backup = new HashMap();
            
            jsonToValue(pTherm_program_backup, pTherm_program_backupVal, L"HashMap", L"IList");
        }
        delete pTherm_program_backupKey;
        JsonString* pTherm_program_orderKey = new JsonString(L"therm_program_order");
        IJsonValue* pTherm_program_orderVal = null;
        pJsonObject->GetValue(pTherm_program_orderKey, pTherm_program_orderVal);
        if(pTherm_program_orderVal != null) {
            pTherm_program_order = new HashMap();
            
            jsonToValue(pTherm_program_order, pTherm_program_orderVal, L"HashMap", L"IList");
        }
        delete pTherm_program_orderKey;
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pUser_ownerKey = new JsonString(L"user_owner");
        IJsonValue* pUser_ownerVal = null;
        pJsonObject->GetValue(pUser_ownerKey, pUser_ownerVal);
        if(pUser_ownerVal != null) {
            pUser_owner = new ArrayList();
            
            jsonToValue(pUser_owner, pUser_ownerVal, L"IList", L"String");
        }
        delete pUser_ownerKey;
        JsonString* pUdp_connKey = new JsonString(L"udp_conn");
        IJsonValue* pUdp_connVal = null;
        pJsonObject->GetValue(pUdp_connKey, pUdp_connVal);
        if(pUdp_connVal != null) {
            
            pUdp_conn = new Boolean(false);
            jsonToValue(pUdp_conn, pUdp_connVal, L"Boolean", L"Boolean");
        }
        delete pUdp_connKey;
        JsonString* pWifi_statusKey = new JsonString(L"wifi_status");
        IJsonValue* pWifi_statusVal = null;
        pJsonObject->GetValue(pWifi_statusKey, pWifi_statusVal);
        if(pWifi_statusVal != null) {
            
            pWifi_status = new Integer();
            jsonToValue(pWifi_status, pWifi_statusVal, L"Integer", L"Integer");
        }
        delete pWifi_statusKey;
        JsonString* pNew_feature_availKey = new JsonString(L"new_feature_avail");
        IJsonValue* pNew_feature_availVal = null;
        pJsonObject->GetValue(pNew_feature_availKey, pNew_feature_availVal);
        if(pNew_feature_availVal != null) {
            
            pNew_feature_avail = new Boolean(false);
            jsonToValue(pNew_feature_avail, pNew_feature_availVal, L"Boolean", L"Boolean");
        }
        delete pNew_feature_availKey;
        JsonString* pFirst_pid_availKey = new JsonString(L"first_pid_avail");
        IJsonValue* pFirst_pid_availVal = null;
        pJsonObject->GetValue(pFirst_pid_availKey, pFirst_pid_availVal);
        if(pFirst_pid_availVal != null) {
            
            pFirst_pid_avail = new Boolean(false);
            jsonToValue(pFirst_pid_avail, pFirst_pid_availVal, L"Boolean", L"Boolean");
        }
        delete pFirst_pid_availKey;
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

SamiNADevice::SamiNADevice(String* json) {
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
SamiNADevice::asJson ()
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
SamiNADevice::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "String", ""));

    
    JsonString *pBehaviorKey = new JsonString(L"behavior");
    pJsonObject->Add(pBehaviorKey, toJson(getPBehavior(), "Integer", ""));

    
    JsonString *pCipher_idKey = new JsonString(L"cipher_id");
    pJsonObject->Add(pCipher_idKey, toJson(getPCipherId(), "String", ""));

    
    JsonString *pDate_setupKey = new JsonString(L"date_setup");
    pJsonObject->Add(pDate_setupKey, toJson(getPDateSetup(), "SamiNADate", ""));

    
    JsonString *pFirmwareKey = new JsonString(L"firmware");
    pJsonObject->Add(pFirmwareKey, toJson(getPFirmware(), "Integer", ""));

    
    JsonString *pHw_versionKey = new JsonString(L"hw_version");
    pJsonObject->Add(pHw_versionKey, toJson(getPHwVersion(), "Integer", ""));

    
    JsonString *pHeating_systemKey = new JsonString(L"heating_system");
    pJsonObject->Add(pHeating_systemKey, toJson(getPHeatingSystem(), "SamiNAHeatingSystem", ""));

    
    JsonString *pHouse_modelKey = new JsonString(L"house_model");
    pJsonObject->Add(pHouse_modelKey, toJson(getPHouseModel(), "SamiNAHouseModel", ""));

    
    JsonString *pIpKey = new JsonString(L"ip");
    pJsonObject->Add(pIpKey, toJson(getPIp(), "String", ""));

    
    JsonString *pLast_fw_updateKey = new JsonString(L"last_fw_update");
    pJsonObject->Add(pLast_fw_updateKey, toJson(getPLastFwUpdate(), "Integer", ""));

    
    JsonString *pLast_radio_storeKey = new JsonString(L"last_radio_store");
    pJsonObject->Add(pLast_radio_storeKey, toJson(getPLastRadioStore(), "Integer", ""));

    
    JsonString *pLast_status_storeKey = new JsonString(L"last_status_store");
    pJsonObject->Add(pLast_status_storeKey, toJson(getPLastStatusStore(), "Integer", ""));

    
    JsonString *pLast_upgradeKey = new JsonString(L"last_upgrade");
    pJsonObject->Add(pLast_upgradeKey, toJson(getPLastUpgrade(), "Integer", ""));

    
    JsonString *pModule_nameKey = new JsonString(L"module_name");
    pJsonObject->Add(pModule_nameKey, toJson(getPModuleName(), "String", ""));

    
    JsonString *pModulesKey = new JsonString(L"modules");
    pJsonObject->Add(pModulesKey, toJson(getPModules(), "String", "array"));

    
    JsonString *pPlaceKey = new JsonString(L"place");
    pJsonObject->Add(pPlaceKey, toJson(getPPlace(), "SamiNAPlace", ""));

    
    JsonString *pSetpointKey = new JsonString(L"setpoint");
    pJsonObject->Add(pSetpointKey, toJson(getPSetpoint(), "SamiObject", ""));

    
    JsonString *pSetpoint_default_durationKey = new JsonString(L"setpoint_default_duration");
    pJsonObject->Add(pSetpoint_default_durationKey, toJson(getPSetpointDefaultDuration(), "Integer", ""));

    
    JsonString *pSetpoint_orderKey = new JsonString(L"setpoint_order");
    pJsonObject->Add(pSetpoint_orderKey, toJson(getPSetpointOrder(), "IList", "map"));

    
    JsonString *pPublic_ext_dataKey = new JsonString(L"public_ext_data");
    pJsonObject->Add(pPublic_ext_dataKey, toJson(getPPublicExtData(), "Boolean", ""));

    
    JsonString *pStation_nameKey = new JsonString(L"station_name");
    pJsonObject->Add(pStation_nameKey, toJson(getPStationName(), "String", ""));

    
    JsonString *pTherm_programKey = new JsonString(L"therm_program");
    pJsonObject->Add(pTherm_programKey, toJson(getPThermProgram(), "SamiNAThermProgram", "map"));

    
    JsonString *pTherm_program_backupKey = new JsonString(L"therm_program_backup");
    pJsonObject->Add(pTherm_program_backupKey, toJson(getPThermProgramBackup(), "IList", "map"));

    
    JsonString *pTherm_program_orderKey = new JsonString(L"therm_program_order");
    pJsonObject->Add(pTherm_program_orderKey, toJson(getPThermProgramOrder(), "IList", "map"));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pUser_ownerKey = new JsonString(L"user_owner");
    pJsonObject->Add(pUser_ownerKey, toJson(getPUserOwner(), "String", "array"));

    
    JsonString *pUdp_connKey = new JsonString(L"udp_conn");
    pJsonObject->Add(pUdp_connKey, toJson(getPUdpConn(), "Boolean", ""));

    
    JsonString *pWifi_statusKey = new JsonString(L"wifi_status");
    pJsonObject->Add(pWifi_statusKey, toJson(getPWifiStatus(), "Integer", ""));

    
    JsonString *pNew_feature_availKey = new JsonString(L"new_feature_avail");
    pJsonObject->Add(pNew_feature_availKey, toJson(getPNewFeatureAvail(), "Boolean", ""));

    
    JsonString *pFirst_pid_availKey = new JsonString(L"first_pid_avail");
    pJsonObject->Add(pFirst_pid_availKey, toJson(getPFirstPidAvail(), "Boolean", ""));

    
    JsonString *pData_typeKey = new JsonString(L"data_type");
    pJsonObject->Add(pData_typeKey, toJson(getPDataType(), "String", "array"));

    
    return pJsonObject;
}

String*
SamiNADevice::getPId() {
    return p_id;
}
void
SamiNADevice::setPId(String* p_id) {
    this->p_id = p_id;
}

Integer*
SamiNADevice::getPBehavior() {
    return pBehavior;
}
void
SamiNADevice::setPBehavior(Integer* pBehavior) {
    this->pBehavior = pBehavior;
}

String*
SamiNADevice::getPCipherId() {
    return pCipher_id;
}
void
SamiNADevice::setPCipherId(String* pCipher_id) {
    this->pCipher_id = pCipher_id;
}

SamiNADate*
SamiNADevice::getPDateSetup() {
    return pDate_setup;
}
void
SamiNADevice::setPDateSetup(SamiNADate* pDate_setup) {
    this->pDate_setup = pDate_setup;
}

Integer*
SamiNADevice::getPFirmware() {
    return pFirmware;
}
void
SamiNADevice::setPFirmware(Integer* pFirmware) {
    this->pFirmware = pFirmware;
}

Integer*
SamiNADevice::getPHwVersion() {
    return pHw_version;
}
void
SamiNADevice::setPHwVersion(Integer* pHw_version) {
    this->pHw_version = pHw_version;
}

SamiNAHeatingSystem*
SamiNADevice::getPHeatingSystem() {
    return pHeating_system;
}
void
SamiNADevice::setPHeatingSystem(SamiNAHeatingSystem* pHeating_system) {
    this->pHeating_system = pHeating_system;
}

SamiNAHouseModel*
SamiNADevice::getPHouseModel() {
    return pHouse_model;
}
void
SamiNADevice::setPHouseModel(SamiNAHouseModel* pHouse_model) {
    this->pHouse_model = pHouse_model;
}

String*
SamiNADevice::getPIp() {
    return pIp;
}
void
SamiNADevice::setPIp(String* pIp) {
    this->pIp = pIp;
}

Integer*
SamiNADevice::getPLastFwUpdate() {
    return pLast_fw_update;
}
void
SamiNADevice::setPLastFwUpdate(Integer* pLast_fw_update) {
    this->pLast_fw_update = pLast_fw_update;
}

Integer*
SamiNADevice::getPLastRadioStore() {
    return pLast_radio_store;
}
void
SamiNADevice::setPLastRadioStore(Integer* pLast_radio_store) {
    this->pLast_radio_store = pLast_radio_store;
}

Integer*
SamiNADevice::getPLastStatusStore() {
    return pLast_status_store;
}
void
SamiNADevice::setPLastStatusStore(Integer* pLast_status_store) {
    this->pLast_status_store = pLast_status_store;
}

Integer*
SamiNADevice::getPLastUpgrade() {
    return pLast_upgrade;
}
void
SamiNADevice::setPLastUpgrade(Integer* pLast_upgrade) {
    this->pLast_upgrade = pLast_upgrade;
}

String*
SamiNADevice::getPModuleName() {
    return pModule_name;
}
void
SamiNADevice::setPModuleName(String* pModule_name) {
    this->pModule_name = pModule_name;
}

IList*
SamiNADevice::getPModules() {
    return pModules;
}
void
SamiNADevice::setPModules(IList* pModules) {
    this->pModules = pModules;
}

SamiNAPlace*
SamiNADevice::getPPlace() {
    return pPlace;
}
void
SamiNADevice::setPPlace(SamiNAPlace* pPlace) {
    this->pPlace = pPlace;
}

SamiObject*
SamiNADevice::getPSetpoint() {
    return pSetpoint;
}
void
SamiNADevice::setPSetpoint(SamiObject* pSetpoint) {
    this->pSetpoint = pSetpoint;
}

Integer*
SamiNADevice::getPSetpointDefaultDuration() {
    return pSetpoint_default_duration;
}
void
SamiNADevice::setPSetpointDefaultDuration(Integer* pSetpoint_default_duration) {
    this->pSetpoint_default_duration = pSetpoint_default_duration;
}

HashMap*
SamiNADevice::getPSetpointOrder() {
    return pSetpoint_order;
}
void
SamiNADevice::setPSetpointOrder(HashMap* pSetpoint_order) {
    this->pSetpoint_order = pSetpoint_order;
}

Boolean*
SamiNADevice::getPPublicExtData() {
    return pPublic_ext_data;
}
void
SamiNADevice::setPPublicExtData(Boolean* pPublic_ext_data) {
    this->pPublic_ext_data = pPublic_ext_data;
}

String*
SamiNADevice::getPStationName() {
    return pStation_name;
}
void
SamiNADevice::setPStationName(String* pStation_name) {
    this->pStation_name = pStation_name;
}

HashMap*
SamiNADevice::getPThermProgram() {
    return pTherm_program;
}
void
SamiNADevice::setPThermProgram(HashMap* pTherm_program) {
    this->pTherm_program = pTherm_program;
}

HashMap*
SamiNADevice::getPThermProgramBackup() {
    return pTherm_program_backup;
}
void
SamiNADevice::setPThermProgramBackup(HashMap* pTherm_program_backup) {
    this->pTherm_program_backup = pTherm_program_backup;
}

HashMap*
SamiNADevice::getPThermProgramOrder() {
    return pTherm_program_order;
}
void
SamiNADevice::setPThermProgramOrder(HashMap* pTherm_program_order) {
    this->pTherm_program_order = pTherm_program_order;
}

String*
SamiNADevice::getPType() {
    return pType;
}
void
SamiNADevice::setPType(String* pType) {
    this->pType = pType;
}

IList*
SamiNADevice::getPUserOwner() {
    return pUser_owner;
}
void
SamiNADevice::setPUserOwner(IList* pUser_owner) {
    this->pUser_owner = pUser_owner;
}

Boolean*
SamiNADevice::getPUdpConn() {
    return pUdp_conn;
}
void
SamiNADevice::setPUdpConn(Boolean* pUdp_conn) {
    this->pUdp_conn = pUdp_conn;
}

Integer*
SamiNADevice::getPWifiStatus() {
    return pWifi_status;
}
void
SamiNADevice::setPWifiStatus(Integer* pWifi_status) {
    this->pWifi_status = pWifi_status;
}

Boolean*
SamiNADevice::getPNewFeatureAvail() {
    return pNew_feature_avail;
}
void
SamiNADevice::setPNewFeatureAvail(Boolean* pNew_feature_avail) {
    this->pNew_feature_avail = pNew_feature_avail;
}

Boolean*
SamiNADevice::getPFirstPidAvail() {
    return pFirst_pid_avail;
}
void
SamiNADevice::setPFirstPidAvail(Boolean* pFirst_pid_avail) {
    this->pFirst_pid_avail = pFirst_pid_avail;
}

IList*
SamiNADevice::getPDataType() {
    return pData_type;
}
void
SamiNADevice::setPDataType(IList* pData_type) {
    this->pData_type = pData_type;
}



} /* namespace Swagger */

