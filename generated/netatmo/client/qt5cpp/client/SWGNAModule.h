/*
 * SWGNAModule.h
 * 
 * 
 */

#ifndef SWGNAModule_H_
#define SWGNAModule_H_

#include <QJsonObject>


#include <QString>
#include <QList>
#include "SWGNADashboardData.h"
#include "SWGNADate.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAModule: public SWGObject {
public:
    SWGNAModule();
    SWGNAModule(QString* json);
    virtual ~SWGNAModule();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAModule* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* _id);
    SWGNADate* getDateSetup();
    void setDateSetup(SWGNADate* date_setup);
    qint32 getFirmware();
    void setFirmware(qint32 firmware);
    QString* getType();
    void setType(QString* type);
    QString* getModuleName();
    void setModuleName(QString* module_name);
    QString* getMainDevice();
    void setMainDevice(QString* main_device);
    qint32 getLastMessage();
    void setLastMessage(qint32 last_message);
    qint32 getLastSeen();
    void setLastSeen(qint32 last_seen);
    bool getPublicExtData();
    void setPublicExtData(bool public_ext_data);
    qint32 getRfStatus();
    void setRfStatus(qint32 rf_status);
    qint32 getBatteryVp();
    void setBatteryVp(qint32 battery_vp);
    qint32 getThermOrientation();
    void setThermOrientation(qint32 therm_orientation);
    qint32 getThermRelayCmd();
    void setThermRelayCmd(qint32 therm_relay_cmd);
    SWGNADashboardData* getDashboardData();
    void setDashboardData(SWGNADashboardData* dashboard_data);
    QList<QString*>* getDataType();
    void setDataType(QList<QString*>* data_type);
    

private:
    QString* _id;
    SWGNADate* date_setup;
    qint32 firmware;
    QString* type;
    QString* module_name;
    QString* main_device;
    qint32 last_message;
    qint32 last_seen;
    bool public_ext_data;
    qint32 rf_status;
    qint32 battery_vp;
    qint32 therm_orientation;
    qint32 therm_relay_cmd;
    SWGNADashboardData* dashboard_data;
    QList<QString*>* data_type;
    
};

} /* namespace Swagger */

#endif /* SWGNAModule_H_ */
