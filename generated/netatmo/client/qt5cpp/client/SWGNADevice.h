/*
 * SWGNADevice.h
 * 
 * 
 */

#ifndef SWGNADevice_H_
#define SWGNADevice_H_

#include <QJsonObject>


#include <QString>
#include "SWGNAHeatingSystem.h"
#include "SWGObject.h"
#include <QList>
#include "SWGNADate.h"
#include "SWGNAThermProgram.h"
#include "SWGNAPlace.h"
#include "QMap.h"
#include "SWGNAHouseModel.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNADevice: public SWGObject {
public:
    SWGNADevice();
    SWGNADevice(QString* json);
    virtual ~SWGNADevice();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNADevice* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* _id);
    qint32 getBehavior();
    void setBehavior(qint32 behavior);
    QString* getCipherId();
    void setCipherId(QString* cipher_id);
    SWGNADate* getDateSetup();
    void setDateSetup(SWGNADate* date_setup);
    qint32 getFirmware();
    void setFirmware(qint32 firmware);
    qint32 getHwVersion();
    void setHwVersion(qint32 hw_version);
    SWGNAHeatingSystem* getHeatingSystem();
    void setHeatingSystem(SWGNAHeatingSystem* heating_system);
    SWGNAHouseModel* getHouseModel();
    void setHouseModel(SWGNAHouseModel* house_model);
    QString* getIp();
    void setIp(QString* ip);
    qint32 getLastFwUpdate();
    void setLastFwUpdate(qint32 last_fw_update);
    qint32 getLastRadioStore();
    void setLastRadioStore(qint32 last_radio_store);
    qint32 getLastStatusStore();
    void setLastStatusStore(qint32 last_status_store);
    qint32 getLastUpgrade();
    void setLastUpgrade(qint32 last_upgrade);
    QString* getModuleName();
    void setModuleName(QString* module_name);
    QList<QString*>* getModules();
    void setModules(QList<QString*>* modules);
    SWGNAPlace* getPlace();
    void setPlace(SWGNAPlace* place);
    SWGObject* getSetpoint();
    void setSetpoint(SWGObject* setpoint);
    qint32 getSetpointDefaultDuration();
    void setSetpointDefaultDuration(qint32 setpoint_default_duration);
    QMap<QString, QList<SWGNAObject*>*>* getSetpointOrder();
    void setSetpointOrder(QMap<QString, QList<SWGNAObject*>*>* setpoint_order);
    bool getPublicExtData();
    void setPublicExtData(bool public_ext_data);
    QString* getStationName();
    void setStationName(QString* station_name);
    QMap<QString, SWGNAThermProgram*>* getThermProgram();
    void setThermProgram(QMap<QString, SWGNAThermProgram*>* therm_program);
    QMap<QString, QList<SWGNAThermProgram*>*>* getThermProgramBackup();
    void setThermProgramBackup(QMap<QString, QList<SWGNAThermProgram*>*>* therm_program_backup);
    QMap<QString, QList<SWGNAObject*>*>* getThermProgramOrder();
    void setThermProgramOrder(QMap<QString, QList<SWGNAObject*>*>* therm_program_order);
    QString* getType();
    void setType(QString* type);
    QList<QString*>* getUserOwner();
    void setUserOwner(QList<QString*>* user_owner);
    bool getUdpConn();
    void setUdpConn(bool udp_conn);
    qint32 getWifiStatus();
    void setWifiStatus(qint32 wifi_status);
    bool getNewFeatureAvail();
    void setNewFeatureAvail(bool new_feature_avail);
    bool getFirstPidAvail();
    void setFirstPidAvail(bool first_pid_avail);
    QList<QString*>* getDataType();
    void setDataType(QList<QString*>* data_type);
    

private:
    QString* _id;
    qint32 behavior;
    QString* cipher_id;
    SWGNADate* date_setup;
    qint32 firmware;
    qint32 hw_version;
    SWGNAHeatingSystem* heating_system;
    SWGNAHouseModel* house_model;
    QString* ip;
    qint32 last_fw_update;
    qint32 last_radio_store;
    qint32 last_status_store;
    qint32 last_upgrade;
    QString* module_name;
    QList<QString*>* modules;
    SWGNAPlace* place;
    SWGObject* setpoint;
    qint32 setpoint_default_duration;
    QMap<QString, QList<SWGNAObject*>*>* setpoint_order;
    bool public_ext_data;
    QString* station_name;
    QMap<QString, SWGNAThermProgram*>* therm_program;
    QMap<QString, QList<SWGNAThermProgram*>*>* therm_program_backup;
    QMap<QString, QList<SWGNAObject*>*>* therm_program_order;
    QString* type;
    QList<QString*>* user_owner;
    bool udp_conn;
    qint32 wifi_status;
    bool new_feature_avail;
    bool first_pid_avail;
    QList<QString*>* data_type;
    
};

} /* namespace Swagger */

#endif /* SWGNADevice_H_ */
