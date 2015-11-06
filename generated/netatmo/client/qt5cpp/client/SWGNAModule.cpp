
#include "SWGNAModule.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAModule::SWGNAModule(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAModule::SWGNAModule() {
    init();
}

SWGNAModule::~SWGNAModule() {
    this->cleanup();
}

void
SWGNAModule::init() {
    _id = new QString("");
    date_setup = new SWGNADate();
    firmware = 0;
    type = new QString("");
    module_name = new QString("");
    main_device = new QString("");
    last_message = 0;
    last_seen = 0;
    public_ext_data = false;
    rf_status = 0;
    battery_vp = 0;
    therm_orientation = 0;
    therm_relay_cmd = 0;
    dashboard_data = new SWGNADashboardData();
    data_type = new QList<QString*>();
    
}

void
SWGNAModule::cleanup() {
    if(_id != NULL) {
        delete _id;
    }
    if(date_setup != NULL) {
        delete date_setup;
    }
    
    if(type != NULL) {
        delete type;
    }
    if(module_name != NULL) {
        delete module_name;
    }
    if(main_device != NULL) {
        delete main_device;
    }
    
    
    
    
    
    
    
    if(dashboard_data != NULL) {
        delete dashboard_data;
    }
    if(data_type != NULL) {
        QList<QString*>* arr = data_type;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete data_type;
    }
    
}

SWGNAModule*
SWGNAModule::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAModule::fromJsonObject(QJsonObject &pJson) {
    setValue(&_id, pJson["_id"], "QString", "QString");
    setValue(&date_setup, pJson["date_setup"], "SWGNADate", "SWGNADate");
    setValue(&firmware, pJson["firmware"], "qint32", "");
    setValue(&type, pJson["type"], "QString", "QString");
    setValue(&module_name, pJson["module_name"], "QString", "QString");
    setValue(&main_device, pJson["main_device"], "QString", "QString");
    setValue(&last_message, pJson["last_message"], "qint32", "");
    setValue(&last_seen, pJson["last_seen"], "qint32", "");
    setValue(&public_ext_data, pJson["public_ext_data"], "bool", "");
    setValue(&rf_status, pJson["rf_status"], "qint32", "");
    setValue(&battery_vp, pJson["battery_vp"], "qint32", "");
    setValue(&therm_orientation, pJson["therm_orientation"], "qint32", "");
    setValue(&therm_relay_cmd, pJson["therm_relay_cmd"], "qint32", "");
    setValue(&dashboard_data, pJson["dashboard_data"], "SWGNADashboardData", "SWGNADashboardData");
    setValue(&data_type, pJson["data_type"], "QList", "QString");
    
}

QString
SWGNAModule::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAModule::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("_id"), _id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("date_setup"), date_setup, obj, QString("SWGNADate"));
    
    
    
    obj->insert("firmware", QJsonValue(firmware));
    
    
    toJsonValue(QString("type"), type, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("module_name"), module_name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("main_device"), main_device, obj, QString("QString"));
    
    
    
    obj->insert("last_message", QJsonValue(last_message));
    obj->insert("last_seen", QJsonValue(last_seen));
    obj->insert("public_ext_data", QJsonValue(public_ext_data));
    obj->insert("rf_status", QJsonValue(rf_status));
    obj->insert("battery_vp", QJsonValue(battery_vp));
    obj->insert("therm_orientation", QJsonValue(therm_orientation));
    obj->insert("therm_relay_cmd", QJsonValue(therm_relay_cmd));
    
    
    toJsonValue(QString("dashboard_data"), dashboard_data, obj, QString("SWGNADashboardData"));
    
    
    
    
    
    QList<QString*>* data_typeList = data_type;
    QJsonArray data_typeJsonArray;
    toJsonArray((QList<void*>*)data_type, &data_typeJsonArray, "data_type", "QString");

    obj->insert("data_type", data_typeJsonArray);
    
    
    

    return obj;
}

QString*
SWGNAModule::getId() {
    return _id;
}
void
SWGNAModule::setId(QString* _id) {
    this->_id = _id;
}

SWGNADate*
SWGNAModule::getDateSetup() {
    return date_setup;
}
void
SWGNAModule::setDateSetup(SWGNADate* date_setup) {
    this->date_setup = date_setup;
}

qint32
SWGNAModule::getFirmware() {
    return firmware;
}
void
SWGNAModule::setFirmware(qint32 firmware) {
    this->firmware = firmware;
}

QString*
SWGNAModule::getType() {
    return type;
}
void
SWGNAModule::setType(QString* type) {
    this->type = type;
}

QString*
SWGNAModule::getModuleName() {
    return module_name;
}
void
SWGNAModule::setModuleName(QString* module_name) {
    this->module_name = module_name;
}

QString*
SWGNAModule::getMainDevice() {
    return main_device;
}
void
SWGNAModule::setMainDevice(QString* main_device) {
    this->main_device = main_device;
}

qint32
SWGNAModule::getLastMessage() {
    return last_message;
}
void
SWGNAModule::setLastMessage(qint32 last_message) {
    this->last_message = last_message;
}

qint32
SWGNAModule::getLastSeen() {
    return last_seen;
}
void
SWGNAModule::setLastSeen(qint32 last_seen) {
    this->last_seen = last_seen;
}

bool
SWGNAModule::getPublicExtData() {
    return public_ext_data;
}
void
SWGNAModule::setPublicExtData(bool public_ext_data) {
    this->public_ext_data = public_ext_data;
}

qint32
SWGNAModule::getRfStatus() {
    return rf_status;
}
void
SWGNAModule::setRfStatus(qint32 rf_status) {
    this->rf_status = rf_status;
}

qint32
SWGNAModule::getBatteryVp() {
    return battery_vp;
}
void
SWGNAModule::setBatteryVp(qint32 battery_vp) {
    this->battery_vp = battery_vp;
}

qint32
SWGNAModule::getThermOrientation() {
    return therm_orientation;
}
void
SWGNAModule::setThermOrientation(qint32 therm_orientation) {
    this->therm_orientation = therm_orientation;
}

qint32
SWGNAModule::getThermRelayCmd() {
    return therm_relay_cmd;
}
void
SWGNAModule::setThermRelayCmd(qint32 therm_relay_cmd) {
    this->therm_relay_cmd = therm_relay_cmd;
}

SWGNADashboardData*
SWGNAModule::getDashboardData() {
    return dashboard_data;
}
void
SWGNAModule::setDashboardData(SWGNADashboardData* dashboard_data) {
    this->dashboard_data = dashboard_data;
}

QList<QString*>*
SWGNAModule::getDataType() {
    return data_type;
}
void
SWGNAModule::setDataType(QList<QString*>* data_type) {
    this->data_type = data_type;
}



} /* namespace Swagger */

