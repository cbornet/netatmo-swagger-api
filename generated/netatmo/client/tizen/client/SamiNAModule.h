/*
 * SamiNAModule.h
 * 
 * 
 */

#ifndef SamiNAModule_H_
#define SamiNAModule_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
#include "SamiNADashboardData.h"
#include "SamiNADate.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAModule: public SamiObject {
public:
    SamiNAModule();
    SamiNAModule(String* json);
    virtual ~SamiNAModule();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAModule* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    SamiNADate* getPDateSetup();
    void setPDateSetup(SamiNADate* pDate_setup);
    
    Integer* getPFirmware();
    void setPFirmware(Integer* pFirmware);
    
    String* getPType();
    void setPType(String* pType);
    
    String* getPModuleName();
    void setPModuleName(String* pModule_name);
    
    String* getPMainDevice();
    void setPMainDevice(String* pMain_device);
    
    Integer* getPLastMessage();
    void setPLastMessage(Integer* pLast_message);
    
    Integer* getPLastSeen();
    void setPLastSeen(Integer* pLast_seen);
    
    Boolean* getPPublicExtData();
    void setPPublicExtData(Boolean* pPublic_ext_data);
    
    Integer* getPRfStatus();
    void setPRfStatus(Integer* pRf_status);
    
    Integer* getPBatteryVp();
    void setPBatteryVp(Integer* pBattery_vp);
    
    Integer* getPThermOrientation();
    void setPThermOrientation(Integer* pTherm_orientation);
    
    Integer* getPThermRelayCmd();
    void setPThermRelayCmd(Integer* pTherm_relay_cmd);
    
    SamiNADashboardData* getPDashboardData();
    void setPDashboardData(SamiNADashboardData* pDashboard_data);
    
    IList* getPDataType();
    void setPDataType(IList* pData_type);
    

private:
    String* p_id;
    SamiNADate* pDate_setup;
    Integer* pFirmware;
    String* pType;
    String* pModule_name;
    String* pMain_device;
    Integer* pLast_message;
    Integer* pLast_seen;
    Boolean* pPublic_ext_data;
    Integer* pRf_status;
    Integer* pBattery_vp;
    Integer* pTherm_orientation;
    Integer* pTherm_relay_cmd;
    SamiNADashboardData* pDashboard_data;
    IList* pData_type;
    
};

} /* namespace Swagger */

#endif /* SamiNAModule_H_ */
