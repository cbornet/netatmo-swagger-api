/*
 * SWGNAThermStateBody.h
 * 
 * 
 */

#ifndef SWGNAThermStateBody_H_
#define SWGNAThermStateBody_H_

#include <QJsonObject>


#include <QList>
#include "SWGNASetpoint.h"
#include "SWGNAThermProgram.h"
#include "SWGNAThermMeasure.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAThermStateBody: public SWGObject {
public:
    SWGNAThermStateBody();
    SWGNAThermStateBody(QString* json);
    virtual ~SWGNAThermStateBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAThermStateBody* fromJson(QString &jsonString);

    SWGNASetpoint* getSetpoint();
    void setSetpoint(SWGNASetpoint* setpoint);
    SWGNASetpoint* getSetpointOrder();
    void setSetpointOrder(SWGNASetpoint* setpoint_order);
    SWGNAThermProgram* getThermProgram();
    void setThermProgram(SWGNAThermProgram* therm_program);
    QList<SWGNAThermProgram*>* getThermProgramBackup();
    void setThermProgramBackup(QList<SWGNAThermProgram*>* therm_program_backup);
    SWGNAThermProgram* getThermProgramOrder();
    void setThermProgramOrder(SWGNAThermProgram* therm_program_order);
    qint32 getThermOrientation();
    void setThermOrientation(qint32 therm_orientation);
    qint32 getThermRelayCmd();
    void setThermRelayCmd(qint32 therm_relay_cmd);
    qint32 getBatteryVp();
    void setBatteryVp(qint32 battery_vp);
    qint32 getRfStatus();
    void setRfStatus(qint32 rf_status);
    bool getPlugConnectedBoiler();
    void setPlugConnectedBoiler(bool plug_connected_boiler);
    bool getUdpConn();
    void setUdpConn(bool udp_conn);
    qint32 getLastThermSeen();
    void setLastThermSeen(qint32 last_therm_seen);
    qint32 getLastPlugSeen();
    void setLastPlugSeen(qint32 last_plug_seen);
    qint32 getWifiStatus();
    void setWifiStatus(qint32 wifi_status);
    SWGNAThermMeasure* getMeasured();
    void setMeasured(SWGNAThermMeasure* measured);
    

private:
    SWGNASetpoint* setpoint;
    SWGNASetpoint* setpoint_order;
    SWGNAThermProgram* therm_program;
    QList<SWGNAThermProgram*>* therm_program_backup;
    SWGNAThermProgram* therm_program_order;
    qint32 therm_orientation;
    qint32 therm_relay_cmd;
    qint32 battery_vp;
    qint32 rf_status;
    bool plug_connected_boiler;
    bool udp_conn;
    qint32 last_therm_seen;
    qint32 last_plug_seen;
    qint32 wifi_status;
    SWGNAThermMeasure* measured;
    
};

} /* namespace Swagger */

#endif /* SWGNAThermStateBody_H_ */
