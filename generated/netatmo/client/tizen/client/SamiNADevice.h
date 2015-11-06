/*
 * SamiNADevice.h
 * 
 * 
 */

#ifndef SamiNADevice_H_
#define SamiNADevice_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
#include "SamiNADate.h"
using Tizen::Base::Collection::HashMap;
#include "SamiNAHouseModel.h"
#include "SamiObject.h"
#include "SamiNAPlace.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;
#include "SamiNAThermProgram.h"
#include "SamiNAHeatingSystem.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNADevice: public SamiObject {
public:
    SamiNADevice();
    SamiNADevice(String* json);
    virtual ~SamiNADevice();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNADevice* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    Integer* getPBehavior();
    void setPBehavior(Integer* pBehavior);
    
    String* getPCipherId();
    void setPCipherId(String* pCipher_id);
    
    SamiNADate* getPDateSetup();
    void setPDateSetup(SamiNADate* pDate_setup);
    
    Integer* getPFirmware();
    void setPFirmware(Integer* pFirmware);
    
    Integer* getPHwVersion();
    void setPHwVersion(Integer* pHw_version);
    
    SamiNAHeatingSystem* getPHeatingSystem();
    void setPHeatingSystem(SamiNAHeatingSystem* pHeating_system);
    
    SamiNAHouseModel* getPHouseModel();
    void setPHouseModel(SamiNAHouseModel* pHouse_model);
    
    String* getPIp();
    void setPIp(String* pIp);
    
    Integer* getPLastFwUpdate();
    void setPLastFwUpdate(Integer* pLast_fw_update);
    
    Integer* getPLastRadioStore();
    void setPLastRadioStore(Integer* pLast_radio_store);
    
    Integer* getPLastStatusStore();
    void setPLastStatusStore(Integer* pLast_status_store);
    
    Integer* getPLastUpgrade();
    void setPLastUpgrade(Integer* pLast_upgrade);
    
    String* getPModuleName();
    void setPModuleName(String* pModule_name);
    
    IList* getPModules();
    void setPModules(IList* pModules);
    
    SamiNAPlace* getPPlace();
    void setPPlace(SamiNAPlace* pPlace);
    
    SamiObject* getPSetpoint();
    void setPSetpoint(SamiObject* pSetpoint);
    
    Integer* getPSetpointDefaultDuration();
    void setPSetpointDefaultDuration(Integer* pSetpoint_default_duration);
    
    HashMap* getPSetpointOrder();
    void setPSetpointOrder(HashMap* pSetpoint_order);
    
    Boolean* getPPublicExtData();
    void setPPublicExtData(Boolean* pPublic_ext_data);
    
    String* getPStationName();
    void setPStationName(String* pStation_name);
    
    HashMap* getPThermProgram();
    void setPThermProgram(HashMap* pTherm_program);
    
    HashMap* getPThermProgramBackup();
    void setPThermProgramBackup(HashMap* pTherm_program_backup);
    
    HashMap* getPThermProgramOrder();
    void setPThermProgramOrder(HashMap* pTherm_program_order);
    
    String* getPType();
    void setPType(String* pType);
    
    IList* getPUserOwner();
    void setPUserOwner(IList* pUser_owner);
    
    Boolean* getPUdpConn();
    void setPUdpConn(Boolean* pUdp_conn);
    
    Integer* getPWifiStatus();
    void setPWifiStatus(Integer* pWifi_status);
    
    Boolean* getPNewFeatureAvail();
    void setPNewFeatureAvail(Boolean* pNew_feature_avail);
    
    Boolean* getPFirstPidAvail();
    void setPFirstPidAvail(Boolean* pFirst_pid_avail);
    
    IList* getPDataType();
    void setPDataType(IList* pData_type);
    

private:
    String* p_id;
    Integer* pBehavior;
    String* pCipher_id;
    SamiNADate* pDate_setup;
    Integer* pFirmware;
    Integer* pHw_version;
    SamiNAHeatingSystem* pHeating_system;
    SamiNAHouseModel* pHouse_model;
    String* pIp;
    Integer* pLast_fw_update;
    Integer* pLast_radio_store;
    Integer* pLast_status_store;
    Integer* pLast_upgrade;
    String* pModule_name;
    IList* pModules;
    SamiNAPlace* pPlace;
    SamiObject* pSetpoint;
    Integer* pSetpoint_default_duration;
    HashMap* pSetpoint_order;
    Boolean* pPublic_ext_data;
    String* pStation_name;
    HashMap* pTherm_program;
    HashMap* pTherm_program_backup;
    HashMap* pTherm_program_order;
    String* pType;
    IList* pUser_owner;
    Boolean* pUdp_conn;
    Integer* pWifi_status;
    Boolean* pNew_feature_avail;
    Boolean* pFirst_pid_avail;
    IList* pData_type;
    
};

} /* namespace Swagger */

#endif /* SamiNADevice_H_ */
