
#include "SWGNADevice.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNADevice::SWGNADevice(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNADevice::SWGNADevice() {
    init();
}

SWGNADevice::~SWGNADevice() {
    this->cleanup();
}

void
SWGNADevice::init() {
    _id = new QString("");
    behavior = 0;
    cipher_id = new QString("");
    date_setup = new SWGNADate();
    firmware = 0;
    hw_version = 0;
    heating_system = new SWGNAHeatingSystem();
    house_model = new SWGNAHouseModel();
    ip = new QString("");
    last_fw_update = 0;
    last_radio_store = 0;
    last_status_store = 0;
    last_upgrade = 0;
    module_name = new QString("");
    modules = new QList<QString*>();
    place = new SWGNAPlace();
    setpoint = NULL;
    setpoint_default_duration = 0;
    setpoint_order = new QMap<QString, QList>();
    public_ext_data = false;
    station_name = new QString("");
    therm_program = new QMap<QString, SWGNAThermProgram>();
    therm_program_backup = new QMap<QString, QList>();
    therm_program_order = new QMap<QString, QList>();
    type = new QString("");
    user_owner = new QList<QString*>();
    udp_conn = false;
    wifi_status = 0;
    new_feature_avail = false;
    first_pid_avail = false;
    data_type = new QList<QString*>();
    
}

void
SWGNADevice::cleanup() {
    if(_id != NULL) {
        delete _id;
    }
    
    if(cipher_id != NULL) {
        delete cipher_id;
    }
    if(date_setup != NULL) {
        delete date_setup;
    }
    
    
    if(heating_system != NULL) {
        delete heating_system;
    }
    if(house_model != NULL) {
        delete house_model;
    }
    if(ip != NULL) {
        delete ip;
    }
    
    
    
    
    if(module_name != NULL) {
        delete module_name;
    }
    if(modules != NULL) {
        QList<QString*>* arr = modules;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete modules;
    }
    if(place != NULL) {
        delete place;
    }
    if(setpoint != NULL) {
        delete setpoint;
    }
    
    if(setpoint_order != NULL) {
        QList<QList*>* arr = setpoint_order;
        foreach(QList* o, *arr) {
            delete o;
        }
        delete setpoint_order;
    }
    
    if(station_name != NULL) {
        delete station_name;
    }
    if(therm_program != NULL) {
        QList<SWGNAThermProgram*>* arr = therm_program;
        foreach(SWGNAThermProgram* o, *arr) {
            delete o;
        }
        delete therm_program;
    }
    if(therm_program_backup != NULL) {
        QList<QList*>* arr = therm_program_backup;
        foreach(QList* o, *arr) {
            delete o;
        }
        delete therm_program_backup;
    }
    if(therm_program_order != NULL) {
        QList<QList*>* arr = therm_program_order;
        foreach(QList* o, *arr) {
            delete o;
        }
        delete therm_program_order;
    }
    if(type != NULL) {
        delete type;
    }
    if(user_owner != NULL) {
        QList<QString*>* arr = user_owner;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete user_owner;
    }
    
    
    
    
    if(data_type != NULL) {
        QList<QString*>* arr = data_type;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete data_type;
    }
    
}

SWGNADevice*
SWGNADevice::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNADevice::fromJsonObject(QJsonObject &pJson) {
    setValue(&_id, pJson["_id"], "QString", "QString");
    setValue(&behavior, pJson["behavior"], "qint32", "");
    setValue(&cipher_id, pJson["cipher_id"], "QString", "QString");
    setValue(&date_setup, pJson["date_setup"], "SWGNADate", "SWGNADate");
    setValue(&firmware, pJson["firmware"], "qint32", "");
    setValue(&hw_version, pJson["hw_version"], "qint32", "");
    setValue(&heating_system, pJson["heating_system"], "SWGNAHeatingSystem", "SWGNAHeatingSystem");
    setValue(&house_model, pJson["house_model"], "SWGNAHouseModel", "SWGNAHouseModel");
    setValue(&ip, pJson["ip"], "QString", "QString");
    setValue(&last_fw_update, pJson["last_fw_update"], "qint32", "");
    setValue(&last_radio_store, pJson["last_radio_store"], "qint32", "");
    setValue(&last_status_store, pJson["last_status_store"], "qint32", "");
    setValue(&last_upgrade, pJson["last_upgrade"], "qint32", "");
    setValue(&module_name, pJson["module_name"], "QString", "QString");
    setValue(&modules, pJson["modules"], "QList", "QString");
    setValue(&place, pJson["place"], "SWGNAPlace", "SWGNAPlace");
    setValue(&setpoint, pJson["setpoint"], "SWGObject", "SWGObject");
    setValue(&setpoint_default_duration, pJson["setpoint_default_duration"], "qint32", "");
    setValue(&setpoint_order, pJson["setpoint_order"], "QMap", "QList");
    setValue(&public_ext_data, pJson["public_ext_data"], "bool", "");
    setValue(&station_name, pJson["station_name"], "QString", "QString");
    setValue(&therm_program, pJson["therm_program"], "QMap", "SWGNAThermProgram");
    setValue(&therm_program_backup, pJson["therm_program_backup"], "QMap", "QList");
    setValue(&therm_program_order, pJson["therm_program_order"], "QMap", "QList");
    setValue(&type, pJson["type"], "QString", "QString");
    setValue(&user_owner, pJson["user_owner"], "QList", "QString");
    setValue(&udp_conn, pJson["udp_conn"], "bool", "");
    setValue(&wifi_status, pJson["wifi_status"], "qint32", "");
    setValue(&new_feature_avail, pJson["new_feature_avail"], "bool", "");
    setValue(&first_pid_avail, pJson["first_pid_avail"], "bool", "");
    setValue(&data_type, pJson["data_type"], "QList", "QString");
    
}

QString
SWGNADevice::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNADevice::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("_id"), _id, obj, QString("QString"));
    
    
    
    obj->insert("behavior", QJsonValue(behavior));
    
    
    toJsonValue(QString("cipher_id"), cipher_id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("date_setup"), date_setup, obj, QString("SWGNADate"));
    
    
    
    obj->insert("firmware", QJsonValue(firmware));
    obj->insert("hw_version", QJsonValue(hw_version));
    
    
    toJsonValue(QString("heating_system"), heating_system, obj, QString("SWGNAHeatingSystem"));
    
    
    
    
    
    toJsonValue(QString("house_model"), house_model, obj, QString("SWGNAHouseModel"));
    
    
    
    
    
    toJsonValue(QString("ip"), ip, obj, QString("QString"));
    
    
    
    obj->insert("last_fw_update", QJsonValue(last_fw_update));
    obj->insert("last_radio_store", QJsonValue(last_radio_store));
    obj->insert("last_status_store", QJsonValue(last_status_store));
    obj->insert("last_upgrade", QJsonValue(last_upgrade));
    
    
    toJsonValue(QString("module_name"), module_name, obj, QString("QString"));
    
    
    
    
    
    QList<QString*>* modulesList = modules;
    QJsonArray modulesJsonArray;
    toJsonArray((QList<void*>*)modules, &modulesJsonArray, "modules", "QString");

    obj->insert("modules", modulesJsonArray);
    
    
    
    
    toJsonValue(QString("place"), place, obj, QString("SWGNAPlace"));
    
    
    
    
    
    toJsonValue(QString("setpoint"), setpoint, obj, QString("SWGObject"));
    
    
    
    obj->insert("setpoint_default_duration", QJsonValue(setpoint_default_duration));
    
    
    QList<QList*>* setpoint_orderList = setpoint_order;
    QJsonArray setpoint_orderJsonArray;
    toJsonArray((QList<void*>*)setpoint_order, &setpoint_orderJsonArray, "setpoint_order", "QList");

    obj->insert("setpoint_order", setpoint_orderJsonArray);
    
    
    obj->insert("public_ext_data", QJsonValue(public_ext_data));
    
    
    toJsonValue(QString("station_name"), station_name, obj, QString("QString"));
    
    
    
    
    
    QList<SWGNAThermProgram*>* therm_programList = therm_program;
    QJsonArray therm_programJsonArray;
    toJsonArray((QList<void*>*)therm_program, &therm_programJsonArray, "therm_program", "SWGNAThermProgram");

    obj->insert("therm_program", therm_programJsonArray);
    
    
    
    
    QList<QList*>* therm_program_backupList = therm_program_backup;
    QJsonArray therm_program_backupJsonArray;
    toJsonArray((QList<void*>*)therm_program_backup, &therm_program_backupJsonArray, "therm_program_backup", "QList");

    obj->insert("therm_program_backup", therm_program_backupJsonArray);
    
    
    
    
    QList<QList*>* therm_program_orderList = therm_program_order;
    QJsonArray therm_program_orderJsonArray;
    toJsonArray((QList<void*>*)therm_program_order, &therm_program_orderJsonArray, "therm_program_order", "QList");

    obj->insert("therm_program_order", therm_program_orderJsonArray);
    
    
    
    
    toJsonValue(QString("type"), type, obj, QString("QString"));
    
    
    
    
    
    QList<QString*>* user_ownerList = user_owner;
    QJsonArray user_ownerJsonArray;
    toJsonArray((QList<void*>*)user_owner, &user_ownerJsonArray, "user_owner", "QString");

    obj->insert("user_owner", user_ownerJsonArray);
    
    
    obj->insert("udp_conn", QJsonValue(udp_conn));
    obj->insert("wifi_status", QJsonValue(wifi_status));
    obj->insert("new_feature_avail", QJsonValue(new_feature_avail));
    obj->insert("first_pid_avail", QJsonValue(first_pid_avail));
    
    
    QList<QString*>* data_typeList = data_type;
    QJsonArray data_typeJsonArray;
    toJsonArray((QList<void*>*)data_type, &data_typeJsonArray, "data_type", "QString");

    obj->insert("data_type", data_typeJsonArray);
    
    
    

    return obj;
}

QString*
SWGNADevice::getId() {
    return _id;
}
void
SWGNADevice::setId(QString* _id) {
    this->_id = _id;
}

qint32
SWGNADevice::getBehavior() {
    return behavior;
}
void
SWGNADevice::setBehavior(qint32 behavior) {
    this->behavior = behavior;
}

QString*
SWGNADevice::getCipherId() {
    return cipher_id;
}
void
SWGNADevice::setCipherId(QString* cipher_id) {
    this->cipher_id = cipher_id;
}

SWGNADate*
SWGNADevice::getDateSetup() {
    return date_setup;
}
void
SWGNADevice::setDateSetup(SWGNADate* date_setup) {
    this->date_setup = date_setup;
}

qint32
SWGNADevice::getFirmware() {
    return firmware;
}
void
SWGNADevice::setFirmware(qint32 firmware) {
    this->firmware = firmware;
}

qint32
SWGNADevice::getHwVersion() {
    return hw_version;
}
void
SWGNADevice::setHwVersion(qint32 hw_version) {
    this->hw_version = hw_version;
}

SWGNAHeatingSystem*
SWGNADevice::getHeatingSystem() {
    return heating_system;
}
void
SWGNADevice::setHeatingSystem(SWGNAHeatingSystem* heating_system) {
    this->heating_system = heating_system;
}

SWGNAHouseModel*
SWGNADevice::getHouseModel() {
    return house_model;
}
void
SWGNADevice::setHouseModel(SWGNAHouseModel* house_model) {
    this->house_model = house_model;
}

QString*
SWGNADevice::getIp() {
    return ip;
}
void
SWGNADevice::setIp(QString* ip) {
    this->ip = ip;
}

qint32
SWGNADevice::getLastFwUpdate() {
    return last_fw_update;
}
void
SWGNADevice::setLastFwUpdate(qint32 last_fw_update) {
    this->last_fw_update = last_fw_update;
}

qint32
SWGNADevice::getLastRadioStore() {
    return last_radio_store;
}
void
SWGNADevice::setLastRadioStore(qint32 last_radio_store) {
    this->last_radio_store = last_radio_store;
}

qint32
SWGNADevice::getLastStatusStore() {
    return last_status_store;
}
void
SWGNADevice::setLastStatusStore(qint32 last_status_store) {
    this->last_status_store = last_status_store;
}

qint32
SWGNADevice::getLastUpgrade() {
    return last_upgrade;
}
void
SWGNADevice::setLastUpgrade(qint32 last_upgrade) {
    this->last_upgrade = last_upgrade;
}

QString*
SWGNADevice::getModuleName() {
    return module_name;
}
void
SWGNADevice::setModuleName(QString* module_name) {
    this->module_name = module_name;
}

QList<QString*>*
SWGNADevice::getModules() {
    return modules;
}
void
SWGNADevice::setModules(QList<QString*>* modules) {
    this->modules = modules;
}

SWGNAPlace*
SWGNADevice::getPlace() {
    return place;
}
void
SWGNADevice::setPlace(SWGNAPlace* place) {
    this->place = place;
}

SWGObject*
SWGNADevice::getSetpoint() {
    return setpoint;
}
void
SWGNADevice::setSetpoint(SWGObject* setpoint) {
    this->setpoint = setpoint;
}

qint32
SWGNADevice::getSetpointDefaultDuration() {
    return setpoint_default_duration;
}
void
SWGNADevice::setSetpointDefaultDuration(qint32 setpoint_default_duration) {
    this->setpoint_default_duration = setpoint_default_duration;
}

QMap<QString, QList<SWGNAObject*>*>*
SWGNADevice::getSetpointOrder() {
    return setpoint_order;
}
void
SWGNADevice::setSetpointOrder(QMap<QString, QList<SWGNAObject*>*>* setpoint_order) {
    this->setpoint_order = setpoint_order;
}

bool
SWGNADevice::getPublicExtData() {
    return public_ext_data;
}
void
SWGNADevice::setPublicExtData(bool public_ext_data) {
    this->public_ext_data = public_ext_data;
}

QString*
SWGNADevice::getStationName() {
    return station_name;
}
void
SWGNADevice::setStationName(QString* station_name) {
    this->station_name = station_name;
}

QMap<QString, SWGNAThermProgram*>*
SWGNADevice::getThermProgram() {
    return therm_program;
}
void
SWGNADevice::setThermProgram(QMap<QString, SWGNAThermProgram*>* therm_program) {
    this->therm_program = therm_program;
}

QMap<QString, QList<SWGNAThermProgram*>*>*
SWGNADevice::getThermProgramBackup() {
    return therm_program_backup;
}
void
SWGNADevice::setThermProgramBackup(QMap<QString, QList<SWGNAThermProgram*>*>* therm_program_backup) {
    this->therm_program_backup = therm_program_backup;
}

QMap<QString, QList<SWGNAObject*>*>*
SWGNADevice::getThermProgramOrder() {
    return therm_program_order;
}
void
SWGNADevice::setThermProgramOrder(QMap<QString, QList<SWGNAObject*>*>* therm_program_order) {
    this->therm_program_order = therm_program_order;
}

QString*
SWGNADevice::getType() {
    return type;
}
void
SWGNADevice::setType(QString* type) {
    this->type = type;
}

QList<QString*>*
SWGNADevice::getUserOwner() {
    return user_owner;
}
void
SWGNADevice::setUserOwner(QList<QString*>* user_owner) {
    this->user_owner = user_owner;
}

bool
SWGNADevice::getUdpConn() {
    return udp_conn;
}
void
SWGNADevice::setUdpConn(bool udp_conn) {
    this->udp_conn = udp_conn;
}

qint32
SWGNADevice::getWifiStatus() {
    return wifi_status;
}
void
SWGNADevice::setWifiStatus(qint32 wifi_status) {
    this->wifi_status = wifi_status;
}

bool
SWGNADevice::getNewFeatureAvail() {
    return new_feature_avail;
}
void
SWGNADevice::setNewFeatureAvail(bool new_feature_avail) {
    this->new_feature_avail = new_feature_avail;
}

bool
SWGNADevice::getFirstPidAvail() {
    return first_pid_avail;
}
void
SWGNADevice::setFirstPidAvail(bool first_pid_avail) {
    this->first_pid_avail = first_pid_avail;
}

QList<QString*>*
SWGNADevice::getDataType() {
    return data_type;
}
void
SWGNADevice::setDataType(QList<QString*>* data_type) {
    this->data_type = data_type;
}



} /* namespace Swagger */

