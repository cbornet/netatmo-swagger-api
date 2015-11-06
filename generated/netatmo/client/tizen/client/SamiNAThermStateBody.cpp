
#include "SamiNAThermStateBody.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAThermStateBody::SamiNAThermStateBody() {
    init();
}

SamiNAThermStateBody::~SamiNAThermStateBody() {
    this->cleanup();
}

void
SamiNAThermStateBody::init() {
    pSetpoint = null;
    pSetpoint_order = null;
    pTherm_program = null;
    pTherm_program_backup = null;
    pTherm_program_order = null;
    pTherm_orientation = null;
    pTherm_relay_cmd = null;
    pBattery_vp = null;
    pRf_status = null;
    pPlug_connected_boiler = null;
    pUdp_conn = null;
    pLast_therm_seen = null;
    pLast_plug_seen = null;
    pWifi_status = null;
    pMeasured = null;
    
}

void
SamiNAThermStateBody::cleanup() {
    if(pSetpoint != null) {
        
        delete pSetpoint;
        pSetpoint = null;
    }
    if(pSetpoint_order != null) {
        
        delete pSetpoint_order;
        pSetpoint_order = null;
    }
    if(pTherm_program != null) {
        
        delete pTherm_program;
        pTherm_program = null;
    }
    if(pTherm_program_backup != null) {
        pTherm_program_backup->RemoveAll(true);
        delete pTherm_program_backup;
        pTherm_program_backup = null;
    }
    if(pTherm_program_order != null) {
        
        delete pTherm_program_order;
        pTherm_program_order = null;
    }
    if(pTherm_orientation != null) {
        
        delete pTherm_orientation;
        pTherm_orientation = null;
    }
    if(pTherm_relay_cmd != null) {
        
        delete pTherm_relay_cmd;
        pTherm_relay_cmd = null;
    }
    if(pBattery_vp != null) {
        
        delete pBattery_vp;
        pBattery_vp = null;
    }
    if(pRf_status != null) {
        
        delete pRf_status;
        pRf_status = null;
    }
    if(pPlug_connected_boiler != null) {
        
        delete pPlug_connected_boiler;
        pPlug_connected_boiler = null;
    }
    if(pUdp_conn != null) {
        
        delete pUdp_conn;
        pUdp_conn = null;
    }
    if(pLast_therm_seen != null) {
        
        delete pLast_therm_seen;
        pLast_therm_seen = null;
    }
    if(pLast_plug_seen != null) {
        
        delete pLast_plug_seen;
        pLast_plug_seen = null;
    }
    if(pWifi_status != null) {
        
        delete pWifi_status;
        pWifi_status = null;
    }
    if(pMeasured != null) {
        
        delete pMeasured;
        pMeasured = null;
    }
    
}


SamiNAThermStateBody*
SamiNAThermStateBody::fromJson(String* json) {
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
SamiNAThermStateBody::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pSetpointKey = new JsonString(L"setpoint");
        IJsonValue* pSetpointVal = null;
        pJsonObject->GetValue(pSetpointKey, pSetpointVal);
        if(pSetpointVal != null) {
            
            pSetpoint = new SamiNASetpoint();
            jsonToValue(pSetpoint, pSetpointVal, L"SamiNASetpoint", L"SamiNASetpoint");
        }
        delete pSetpointKey;
        JsonString* pSetpoint_orderKey = new JsonString(L"setpoint_order");
        IJsonValue* pSetpoint_orderVal = null;
        pJsonObject->GetValue(pSetpoint_orderKey, pSetpoint_orderVal);
        if(pSetpoint_orderVal != null) {
            
            pSetpoint_order = new SamiNASetpoint();
            jsonToValue(pSetpoint_order, pSetpoint_orderVal, L"SamiNASetpoint", L"SamiNASetpoint");
        }
        delete pSetpoint_orderKey;
        JsonString* pTherm_programKey = new JsonString(L"therm_program");
        IJsonValue* pTherm_programVal = null;
        pJsonObject->GetValue(pTherm_programKey, pTherm_programVal);
        if(pTherm_programVal != null) {
            
            pTherm_program = new SamiNAThermProgram();
            jsonToValue(pTherm_program, pTherm_programVal, L"SamiNAThermProgram", L"SamiNAThermProgram");
        }
        delete pTherm_programKey;
        JsonString* pTherm_program_backupKey = new JsonString(L"therm_program_backup");
        IJsonValue* pTherm_program_backupVal = null;
        pJsonObject->GetValue(pTherm_program_backupKey, pTherm_program_backupVal);
        if(pTherm_program_backupVal != null) {
            pTherm_program_backup = new ArrayList();
            
            jsonToValue(pTherm_program_backup, pTherm_program_backupVal, L"IList", L"SamiNAThermProgram");
        }
        delete pTherm_program_backupKey;
        JsonString* pTherm_program_orderKey = new JsonString(L"therm_program_order");
        IJsonValue* pTherm_program_orderVal = null;
        pJsonObject->GetValue(pTherm_program_orderKey, pTherm_program_orderVal);
        if(pTherm_program_orderVal != null) {
            
            pTherm_program_order = new SamiNAThermProgram();
            jsonToValue(pTherm_program_order, pTherm_program_orderVal, L"SamiNAThermProgram", L"SamiNAThermProgram");
        }
        delete pTherm_program_orderKey;
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
        JsonString* pBattery_vpKey = new JsonString(L"battery_vp");
        IJsonValue* pBattery_vpVal = null;
        pJsonObject->GetValue(pBattery_vpKey, pBattery_vpVal);
        if(pBattery_vpVal != null) {
            
            pBattery_vp = new Integer();
            jsonToValue(pBattery_vp, pBattery_vpVal, L"Integer", L"Integer");
        }
        delete pBattery_vpKey;
        JsonString* pRf_statusKey = new JsonString(L"rf_status");
        IJsonValue* pRf_statusVal = null;
        pJsonObject->GetValue(pRf_statusKey, pRf_statusVal);
        if(pRf_statusVal != null) {
            
            pRf_status = new Integer();
            jsonToValue(pRf_status, pRf_statusVal, L"Integer", L"Integer");
        }
        delete pRf_statusKey;
        JsonString* pPlug_connected_boilerKey = new JsonString(L"plug_connected_boiler");
        IJsonValue* pPlug_connected_boilerVal = null;
        pJsonObject->GetValue(pPlug_connected_boilerKey, pPlug_connected_boilerVal);
        if(pPlug_connected_boilerVal != null) {
            
            pPlug_connected_boiler = new Boolean(false);
            jsonToValue(pPlug_connected_boiler, pPlug_connected_boilerVal, L"Boolean", L"Boolean");
        }
        delete pPlug_connected_boilerKey;
        JsonString* pUdp_connKey = new JsonString(L"udp_conn");
        IJsonValue* pUdp_connVal = null;
        pJsonObject->GetValue(pUdp_connKey, pUdp_connVal);
        if(pUdp_connVal != null) {
            
            pUdp_conn = new Boolean(false);
            jsonToValue(pUdp_conn, pUdp_connVal, L"Boolean", L"Boolean");
        }
        delete pUdp_connKey;
        JsonString* pLast_therm_seenKey = new JsonString(L"last_therm_seen");
        IJsonValue* pLast_therm_seenVal = null;
        pJsonObject->GetValue(pLast_therm_seenKey, pLast_therm_seenVal);
        if(pLast_therm_seenVal != null) {
            
            pLast_therm_seen = new Integer();
            jsonToValue(pLast_therm_seen, pLast_therm_seenVal, L"Integer", L"Integer");
        }
        delete pLast_therm_seenKey;
        JsonString* pLast_plug_seenKey = new JsonString(L"last_plug_seen");
        IJsonValue* pLast_plug_seenVal = null;
        pJsonObject->GetValue(pLast_plug_seenKey, pLast_plug_seenVal);
        if(pLast_plug_seenVal != null) {
            
            pLast_plug_seen = new Integer();
            jsonToValue(pLast_plug_seen, pLast_plug_seenVal, L"Integer", L"Integer");
        }
        delete pLast_plug_seenKey;
        JsonString* pWifi_statusKey = new JsonString(L"wifi_status");
        IJsonValue* pWifi_statusVal = null;
        pJsonObject->GetValue(pWifi_statusKey, pWifi_statusVal);
        if(pWifi_statusVal != null) {
            
            pWifi_status = new Integer();
            jsonToValue(pWifi_status, pWifi_statusVal, L"Integer", L"Integer");
        }
        delete pWifi_statusKey;
        JsonString* pMeasuredKey = new JsonString(L"measured");
        IJsonValue* pMeasuredVal = null;
        pJsonObject->GetValue(pMeasuredKey, pMeasuredVal);
        if(pMeasuredVal != null) {
            
            pMeasured = new SamiNAThermMeasure();
            jsonToValue(pMeasured, pMeasuredVal, L"SamiNAThermMeasure", L"SamiNAThermMeasure");
        }
        delete pMeasuredKey;
        
    }
}

SamiNAThermStateBody::SamiNAThermStateBody(String* json) {
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
SamiNAThermStateBody::asJson ()
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
SamiNAThermStateBody::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pSetpointKey = new JsonString(L"setpoint");
    pJsonObject->Add(pSetpointKey, toJson(getPSetpoint(), "SamiNASetpoint", ""));

    
    JsonString *pSetpoint_orderKey = new JsonString(L"setpoint_order");
    pJsonObject->Add(pSetpoint_orderKey, toJson(getPSetpointOrder(), "SamiNASetpoint", ""));

    
    JsonString *pTherm_programKey = new JsonString(L"therm_program");
    pJsonObject->Add(pTherm_programKey, toJson(getPThermProgram(), "SamiNAThermProgram", ""));

    
    JsonString *pTherm_program_backupKey = new JsonString(L"therm_program_backup");
    pJsonObject->Add(pTherm_program_backupKey, toJson(getPThermProgramBackup(), "SamiNAThermProgram", "array"));

    
    JsonString *pTherm_program_orderKey = new JsonString(L"therm_program_order");
    pJsonObject->Add(pTherm_program_orderKey, toJson(getPThermProgramOrder(), "SamiNAThermProgram", ""));

    
    JsonString *pTherm_orientationKey = new JsonString(L"therm_orientation");
    pJsonObject->Add(pTherm_orientationKey, toJson(getPThermOrientation(), "Integer", ""));

    
    JsonString *pTherm_relay_cmdKey = new JsonString(L"therm_relay_cmd");
    pJsonObject->Add(pTherm_relay_cmdKey, toJson(getPThermRelayCmd(), "Integer", ""));

    
    JsonString *pBattery_vpKey = new JsonString(L"battery_vp");
    pJsonObject->Add(pBattery_vpKey, toJson(getPBatteryVp(), "Integer", ""));

    
    JsonString *pRf_statusKey = new JsonString(L"rf_status");
    pJsonObject->Add(pRf_statusKey, toJson(getPRfStatus(), "Integer", ""));

    
    JsonString *pPlug_connected_boilerKey = new JsonString(L"plug_connected_boiler");
    pJsonObject->Add(pPlug_connected_boilerKey, toJson(getPPlugConnectedBoiler(), "Boolean", ""));

    
    JsonString *pUdp_connKey = new JsonString(L"udp_conn");
    pJsonObject->Add(pUdp_connKey, toJson(getPUdpConn(), "Boolean", ""));

    
    JsonString *pLast_therm_seenKey = new JsonString(L"last_therm_seen");
    pJsonObject->Add(pLast_therm_seenKey, toJson(getPLastThermSeen(), "Integer", ""));

    
    JsonString *pLast_plug_seenKey = new JsonString(L"last_plug_seen");
    pJsonObject->Add(pLast_plug_seenKey, toJson(getPLastPlugSeen(), "Integer", ""));

    
    JsonString *pWifi_statusKey = new JsonString(L"wifi_status");
    pJsonObject->Add(pWifi_statusKey, toJson(getPWifiStatus(), "Integer", ""));

    
    JsonString *pMeasuredKey = new JsonString(L"measured");
    pJsonObject->Add(pMeasuredKey, toJson(getPMeasured(), "SamiNAThermMeasure", ""));

    
    return pJsonObject;
}

SamiNASetpoint*
SamiNAThermStateBody::getPSetpoint() {
    return pSetpoint;
}
void
SamiNAThermStateBody::setPSetpoint(SamiNASetpoint* pSetpoint) {
    this->pSetpoint = pSetpoint;
}

SamiNASetpoint*
SamiNAThermStateBody::getPSetpointOrder() {
    return pSetpoint_order;
}
void
SamiNAThermStateBody::setPSetpointOrder(SamiNASetpoint* pSetpoint_order) {
    this->pSetpoint_order = pSetpoint_order;
}

SamiNAThermProgram*
SamiNAThermStateBody::getPThermProgram() {
    return pTherm_program;
}
void
SamiNAThermStateBody::setPThermProgram(SamiNAThermProgram* pTherm_program) {
    this->pTherm_program = pTherm_program;
}

IList*
SamiNAThermStateBody::getPThermProgramBackup() {
    return pTherm_program_backup;
}
void
SamiNAThermStateBody::setPThermProgramBackup(IList* pTherm_program_backup) {
    this->pTherm_program_backup = pTherm_program_backup;
}

SamiNAThermProgram*
SamiNAThermStateBody::getPThermProgramOrder() {
    return pTherm_program_order;
}
void
SamiNAThermStateBody::setPThermProgramOrder(SamiNAThermProgram* pTherm_program_order) {
    this->pTherm_program_order = pTherm_program_order;
}

Integer*
SamiNAThermStateBody::getPThermOrientation() {
    return pTherm_orientation;
}
void
SamiNAThermStateBody::setPThermOrientation(Integer* pTherm_orientation) {
    this->pTherm_orientation = pTherm_orientation;
}

Integer*
SamiNAThermStateBody::getPThermRelayCmd() {
    return pTherm_relay_cmd;
}
void
SamiNAThermStateBody::setPThermRelayCmd(Integer* pTherm_relay_cmd) {
    this->pTherm_relay_cmd = pTherm_relay_cmd;
}

Integer*
SamiNAThermStateBody::getPBatteryVp() {
    return pBattery_vp;
}
void
SamiNAThermStateBody::setPBatteryVp(Integer* pBattery_vp) {
    this->pBattery_vp = pBattery_vp;
}

Integer*
SamiNAThermStateBody::getPRfStatus() {
    return pRf_status;
}
void
SamiNAThermStateBody::setPRfStatus(Integer* pRf_status) {
    this->pRf_status = pRf_status;
}

Boolean*
SamiNAThermStateBody::getPPlugConnectedBoiler() {
    return pPlug_connected_boiler;
}
void
SamiNAThermStateBody::setPPlugConnectedBoiler(Boolean* pPlug_connected_boiler) {
    this->pPlug_connected_boiler = pPlug_connected_boiler;
}

Boolean*
SamiNAThermStateBody::getPUdpConn() {
    return pUdp_conn;
}
void
SamiNAThermStateBody::setPUdpConn(Boolean* pUdp_conn) {
    this->pUdp_conn = pUdp_conn;
}

Integer*
SamiNAThermStateBody::getPLastThermSeen() {
    return pLast_therm_seen;
}
void
SamiNAThermStateBody::setPLastThermSeen(Integer* pLast_therm_seen) {
    this->pLast_therm_seen = pLast_therm_seen;
}

Integer*
SamiNAThermStateBody::getPLastPlugSeen() {
    return pLast_plug_seen;
}
void
SamiNAThermStateBody::setPLastPlugSeen(Integer* pLast_plug_seen) {
    this->pLast_plug_seen = pLast_plug_seen;
}

Integer*
SamiNAThermStateBody::getPWifiStatus() {
    return pWifi_status;
}
void
SamiNAThermStateBody::setPWifiStatus(Integer* pWifi_status) {
    this->pWifi_status = pWifi_status;
}

SamiNAThermMeasure*
SamiNAThermStateBody::getPMeasured() {
    return pMeasured;
}
void
SamiNAThermStateBody::setPMeasured(SamiNAThermMeasure* pMeasured) {
    this->pMeasured = pMeasured;
}



} /* namespace Swagger */

