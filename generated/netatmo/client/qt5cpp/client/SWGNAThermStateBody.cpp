
#include "SWGNAThermStateBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAThermStateBody::SWGNAThermStateBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAThermStateBody::SWGNAThermStateBody() {
    init();
}

SWGNAThermStateBody::~SWGNAThermStateBody() {
    this->cleanup();
}

void
SWGNAThermStateBody::init() {
    setpoint = new SWGNASetpoint();
    setpoint_order = new SWGNASetpoint();
    therm_program = new SWGNAThermProgram();
    therm_program_backup = new QList<SWGNAThermProgram*>();
    therm_program_order = new SWGNAThermProgram();
    therm_orientation = 0;
    therm_relay_cmd = 0;
    battery_vp = 0;
    rf_status = 0;
    plug_connected_boiler = false;
    udp_conn = false;
    last_therm_seen = 0;
    last_plug_seen = 0;
    wifi_status = 0;
    measured = new SWGNAThermMeasure();
    
}

void
SWGNAThermStateBody::cleanup() {
    if(setpoint != NULL) {
        delete setpoint;
    }
    if(setpoint_order != NULL) {
        delete setpoint_order;
    }
    if(therm_program != NULL) {
        delete therm_program;
    }
    if(therm_program_backup != NULL) {
        QList<SWGNAThermProgram*>* arr = therm_program_backup;
        foreach(SWGNAThermProgram* o, *arr) {
            delete o;
        }
        delete therm_program_backup;
    }
    if(therm_program_order != NULL) {
        delete therm_program_order;
    }
    
    
    
    
    
    
    
    
    
    if(measured != NULL) {
        delete measured;
    }
    
}

SWGNAThermStateBody*
SWGNAThermStateBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAThermStateBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&setpoint, pJson["setpoint"], "SWGNASetpoint", "SWGNASetpoint");
    setValue(&setpoint_order, pJson["setpoint_order"], "SWGNASetpoint", "SWGNASetpoint");
    setValue(&therm_program, pJson["therm_program"], "SWGNAThermProgram", "SWGNAThermProgram");
    setValue(&therm_program_backup, pJson["therm_program_backup"], "QList", "SWGNAThermProgram");
    setValue(&therm_program_order, pJson["therm_program_order"], "SWGNAThermProgram", "SWGNAThermProgram");
    setValue(&therm_orientation, pJson["therm_orientation"], "qint32", "");
    setValue(&therm_relay_cmd, pJson["therm_relay_cmd"], "qint32", "");
    setValue(&battery_vp, pJson["battery_vp"], "qint32", "");
    setValue(&rf_status, pJson["rf_status"], "qint32", "");
    setValue(&plug_connected_boiler, pJson["plug_connected_boiler"], "bool", "");
    setValue(&udp_conn, pJson["udp_conn"], "bool", "");
    setValue(&last_therm_seen, pJson["last_therm_seen"], "qint32", "");
    setValue(&last_plug_seen, pJson["last_plug_seen"], "qint32", "");
    setValue(&wifi_status, pJson["wifi_status"], "qint32", "");
    setValue(&measured, pJson["measured"], "SWGNAThermMeasure", "SWGNAThermMeasure");
    
}

QString
SWGNAThermStateBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAThermStateBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("setpoint"), setpoint, obj, QString("SWGNASetpoint"));
    
    
    
    
    
    toJsonValue(QString("setpoint_order"), setpoint_order, obj, QString("SWGNASetpoint"));
    
    
    
    
    
    toJsonValue(QString("therm_program"), therm_program, obj, QString("SWGNAThermProgram"));
    
    
    
    
    
    QList<SWGNAThermProgram*>* therm_program_backupList = therm_program_backup;
    QJsonArray therm_program_backupJsonArray;
    toJsonArray((QList<void*>*)therm_program_backup, &therm_program_backupJsonArray, "therm_program_backup", "SWGNAThermProgram");

    obj->insert("therm_program_backup", therm_program_backupJsonArray);
    
    
    
    
    toJsonValue(QString("therm_program_order"), therm_program_order, obj, QString("SWGNAThermProgram"));
    
    
    
    obj->insert("therm_orientation", QJsonValue(therm_orientation));
    obj->insert("therm_relay_cmd", QJsonValue(therm_relay_cmd));
    obj->insert("battery_vp", QJsonValue(battery_vp));
    obj->insert("rf_status", QJsonValue(rf_status));
    obj->insert("plug_connected_boiler", QJsonValue(plug_connected_boiler));
    obj->insert("udp_conn", QJsonValue(udp_conn));
    obj->insert("last_therm_seen", QJsonValue(last_therm_seen));
    obj->insert("last_plug_seen", QJsonValue(last_plug_seen));
    obj->insert("wifi_status", QJsonValue(wifi_status));
    
    
    toJsonValue(QString("measured"), measured, obj, QString("SWGNAThermMeasure"));
    
    
    
    

    return obj;
}

SWGNASetpoint*
SWGNAThermStateBody::getSetpoint() {
    return setpoint;
}
void
SWGNAThermStateBody::setSetpoint(SWGNASetpoint* setpoint) {
    this->setpoint = setpoint;
}

SWGNASetpoint*
SWGNAThermStateBody::getSetpointOrder() {
    return setpoint_order;
}
void
SWGNAThermStateBody::setSetpointOrder(SWGNASetpoint* setpoint_order) {
    this->setpoint_order = setpoint_order;
}

SWGNAThermProgram*
SWGNAThermStateBody::getThermProgram() {
    return therm_program;
}
void
SWGNAThermStateBody::setThermProgram(SWGNAThermProgram* therm_program) {
    this->therm_program = therm_program;
}

QList<SWGNAThermProgram*>*
SWGNAThermStateBody::getThermProgramBackup() {
    return therm_program_backup;
}
void
SWGNAThermStateBody::setThermProgramBackup(QList<SWGNAThermProgram*>* therm_program_backup) {
    this->therm_program_backup = therm_program_backup;
}

SWGNAThermProgram*
SWGNAThermStateBody::getThermProgramOrder() {
    return therm_program_order;
}
void
SWGNAThermStateBody::setThermProgramOrder(SWGNAThermProgram* therm_program_order) {
    this->therm_program_order = therm_program_order;
}

qint32
SWGNAThermStateBody::getThermOrientation() {
    return therm_orientation;
}
void
SWGNAThermStateBody::setThermOrientation(qint32 therm_orientation) {
    this->therm_orientation = therm_orientation;
}

qint32
SWGNAThermStateBody::getThermRelayCmd() {
    return therm_relay_cmd;
}
void
SWGNAThermStateBody::setThermRelayCmd(qint32 therm_relay_cmd) {
    this->therm_relay_cmd = therm_relay_cmd;
}

qint32
SWGNAThermStateBody::getBatteryVp() {
    return battery_vp;
}
void
SWGNAThermStateBody::setBatteryVp(qint32 battery_vp) {
    this->battery_vp = battery_vp;
}

qint32
SWGNAThermStateBody::getRfStatus() {
    return rf_status;
}
void
SWGNAThermStateBody::setRfStatus(qint32 rf_status) {
    this->rf_status = rf_status;
}

bool
SWGNAThermStateBody::getPlugConnectedBoiler() {
    return plug_connected_boiler;
}
void
SWGNAThermStateBody::setPlugConnectedBoiler(bool plug_connected_boiler) {
    this->plug_connected_boiler = plug_connected_boiler;
}

bool
SWGNAThermStateBody::getUdpConn() {
    return udp_conn;
}
void
SWGNAThermStateBody::setUdpConn(bool udp_conn) {
    this->udp_conn = udp_conn;
}

qint32
SWGNAThermStateBody::getLastThermSeen() {
    return last_therm_seen;
}
void
SWGNAThermStateBody::setLastThermSeen(qint32 last_therm_seen) {
    this->last_therm_seen = last_therm_seen;
}

qint32
SWGNAThermStateBody::getLastPlugSeen() {
    return last_plug_seen;
}
void
SWGNAThermStateBody::setLastPlugSeen(qint32 last_plug_seen) {
    this->last_plug_seen = last_plug_seen;
}

qint32
SWGNAThermStateBody::getWifiStatus() {
    return wifi_status;
}
void
SWGNAThermStateBody::setWifiStatus(qint32 wifi_status) {
    this->wifi_status = wifi_status;
}

SWGNAThermMeasure*
SWGNAThermStateBody::getMeasured() {
    return measured;
}
void
SWGNAThermStateBody::setMeasured(SWGNAThermMeasure* measured) {
    this->measured = measured;
}



} /* namespace Swagger */

