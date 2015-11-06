/*
 * SamiNAThermStateBody.h
 * 
 * 
 */

#ifndef SamiNAThermStateBody_H_
#define SamiNAThermStateBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
#include "SamiNAThermMeasure.h"
#include "SamiNAThermProgram.h"
using Tizen::Base::Boolean;
#include "SamiNASetpoint.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAThermStateBody: public SamiObject {
public:
    SamiNAThermStateBody();
    SamiNAThermStateBody(String* json);
    virtual ~SamiNAThermStateBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAThermStateBody* fromJson(String* obj);

    
    SamiNASetpoint* getPSetpoint();
    void setPSetpoint(SamiNASetpoint* pSetpoint);
    
    SamiNASetpoint* getPSetpointOrder();
    void setPSetpointOrder(SamiNASetpoint* pSetpoint_order);
    
    SamiNAThermProgram* getPThermProgram();
    void setPThermProgram(SamiNAThermProgram* pTherm_program);
    
    IList* getPThermProgramBackup();
    void setPThermProgramBackup(IList* pTherm_program_backup);
    
    SamiNAThermProgram* getPThermProgramOrder();
    void setPThermProgramOrder(SamiNAThermProgram* pTherm_program_order);
    
    Integer* getPThermOrientation();
    void setPThermOrientation(Integer* pTherm_orientation);
    
    Integer* getPThermRelayCmd();
    void setPThermRelayCmd(Integer* pTherm_relay_cmd);
    
    Integer* getPBatteryVp();
    void setPBatteryVp(Integer* pBattery_vp);
    
    Integer* getPRfStatus();
    void setPRfStatus(Integer* pRf_status);
    
    Boolean* getPPlugConnectedBoiler();
    void setPPlugConnectedBoiler(Boolean* pPlug_connected_boiler);
    
    Boolean* getPUdpConn();
    void setPUdpConn(Boolean* pUdp_conn);
    
    Integer* getPLastThermSeen();
    void setPLastThermSeen(Integer* pLast_therm_seen);
    
    Integer* getPLastPlugSeen();
    void setPLastPlugSeen(Integer* pLast_plug_seen);
    
    Integer* getPWifiStatus();
    void setPWifiStatus(Integer* pWifi_status);
    
    SamiNAThermMeasure* getPMeasured();
    void setPMeasured(SamiNAThermMeasure* pMeasured);
    

private:
    SamiNASetpoint* pSetpoint;
    SamiNASetpoint* pSetpoint_order;
    SamiNAThermProgram* pTherm_program;
    IList* pTherm_program_backup;
    SamiNAThermProgram* pTherm_program_order;
    Integer* pTherm_orientation;
    Integer* pTherm_relay_cmd;
    Integer* pBattery_vp;
    Integer* pRf_status;
    Boolean* pPlug_connected_boiler;
    Boolean* pUdp_conn;
    Integer* pLast_therm_seen;
    Integer* pLast_plug_seen;
    Integer* pWifi_status;
    SamiNAThermMeasure* pMeasured;
    
};

} /* namespace Swagger */

#endif /* SamiNAThermStateBody_H_ */
