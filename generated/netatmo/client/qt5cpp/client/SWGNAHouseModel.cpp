
#include "SWGNAHouseModel.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAHouseModel::SWGNAHouseModel(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAHouseModel::SWGNAHouseModel() {
    init();
}

SWGNAHouseModel::~SWGNAHouseModel() {
    this->cleanup();
}

void
SWGNAHouseModel::init() {
    algo_type = new QString("");
    ca = new SWGNAHouseModelCa();
    ext_temps = new QMap<QString, qint32>();
    first_anticipate_avail = false;
    first_pid_avail = false;
    gefs = new SWGNAStation();
    in_use = new QString("");
    last_compute_try = new SWGNADate();
    link_station = new SWGNALinkStation();
    pid_algo = new SWGNAPidAlgo();
    station = new SWGNAStation();
    prefered_algo_type = new QString("");
    simple_algo = new SWGNASimpleAlgo();
    time = new SWGNADate();
    station_firsttime_anticipate = false;
    time_algo_changed = 0;
    time_pid_computed = 0;
    
}

void
SWGNAHouseModel::cleanup() {
    if(algo_type != NULL) {
        delete algo_type;
    }
    if(ca != NULL) {
        delete ca;
    }
    
    
    
    if(gefs != NULL) {
        delete gefs;
    }
    if(in_use != NULL) {
        delete in_use;
    }
    if(last_compute_try != NULL) {
        delete last_compute_try;
    }
    if(link_station != NULL) {
        delete link_station;
    }
    if(pid_algo != NULL) {
        delete pid_algo;
    }
    if(station != NULL) {
        delete station;
    }
    if(prefered_algo_type != NULL) {
        delete prefered_algo_type;
    }
    if(simple_algo != NULL) {
        delete simple_algo;
    }
    if(time != NULL) {
        delete time;
    }
    
    
    
    
}

SWGNAHouseModel*
SWGNAHouseModel::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAHouseModel::fromJsonObject(QJsonObject &pJson) {
    setValue(&algo_type, pJson["algo_type"], "QString", "QString");
    setValue(&ca, pJson["ca"], "SWGNAHouseModelCa", "SWGNAHouseModelCa");
    setValue(&ext_temps, pJson["ext_temps"], "QMap", "");
    setValue(&first_anticipate_avail, pJson["first_anticipate_avail"], "bool", "");
    setValue(&first_pid_avail, pJson["first_pid_avail"], "bool", "");
    setValue(&gefs, pJson["gefs"], "SWGNAStation", "SWGNAStation");
    setValue(&in_use, pJson["in_use"], "QString", "QString");
    setValue(&last_compute_try, pJson["last_compute_try"], "SWGNADate", "SWGNADate");
    setValue(&link_station, pJson["link_station"], "SWGNALinkStation", "SWGNALinkStation");
    setValue(&pid_algo, pJson["pid_algo"], "SWGNAPidAlgo", "SWGNAPidAlgo");
    setValue(&station, pJson["station"], "SWGNAStation", "SWGNAStation");
    setValue(&prefered_algo_type, pJson["prefered_algo_type"], "QString", "QString");
    setValue(&simple_algo, pJson["simple_algo"], "SWGNASimpleAlgo", "SWGNASimpleAlgo");
    setValue(&time, pJson["time"], "SWGNADate", "SWGNADate");
    setValue(&station_firsttime_anticipate, pJson["station_firsttime_anticipate"], "bool", "");
    setValue(&time_algo_changed, pJson["time_algo_changed"], "qint32", "");
    setValue(&time_pid_computed, pJson["time_pid_computed"], "qint32", "");
    
}

QString
SWGNAHouseModel::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAHouseModel::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("algo_type"), algo_type, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("ca"), ca, obj, QString("SWGNAHouseModelCa"));
    
    
    
    obj->insert("ext_temps", QJsonValue(ext_temps));
    obj->insert("first_anticipate_avail", QJsonValue(first_anticipate_avail));
    obj->insert("first_pid_avail", QJsonValue(first_pid_avail));
    
    
    toJsonValue(QString("gefs"), gefs, obj, QString("SWGNAStation"));
    
    
    
    
    
    toJsonValue(QString("in_use"), in_use, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("last_compute_try"), last_compute_try, obj, QString("SWGNADate"));
    
    
    
    
    
    toJsonValue(QString("link_station"), link_station, obj, QString("SWGNALinkStation"));
    
    
    
    
    
    toJsonValue(QString("pid_algo"), pid_algo, obj, QString("SWGNAPidAlgo"));
    
    
    
    
    
    toJsonValue(QString("station"), station, obj, QString("SWGNAStation"));
    
    
    
    
    
    toJsonValue(QString("prefered_algo_type"), prefered_algo_type, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("simple_algo"), simple_algo, obj, QString("SWGNASimpleAlgo"));
    
    
    
    
    
    toJsonValue(QString("time"), time, obj, QString("SWGNADate"));
    
    
    
    obj->insert("station_firsttime_anticipate", QJsonValue(station_firsttime_anticipate));
    obj->insert("time_algo_changed", QJsonValue(time_algo_changed));
    obj->insert("time_pid_computed", QJsonValue(time_pid_computed));
    

    return obj;
}

QString*
SWGNAHouseModel::getAlgoType() {
    return algo_type;
}
void
SWGNAHouseModel::setAlgoType(QString* algo_type) {
    this->algo_type = algo_type;
}

SWGNAHouseModelCa*
SWGNAHouseModel::getCa() {
    return ca;
}
void
SWGNAHouseModel::setCa(SWGNAHouseModelCa* ca) {
    this->ca = ca;
}

QMap<QString, qint32>*
SWGNAHouseModel::getExtTemps() {
    return ext_temps;
}
void
SWGNAHouseModel::setExtTemps(QMap<QString, qint32>* ext_temps) {
    this->ext_temps = ext_temps;
}

bool
SWGNAHouseModel::getFirstAnticipateAvail() {
    return first_anticipate_avail;
}
void
SWGNAHouseModel::setFirstAnticipateAvail(bool first_anticipate_avail) {
    this->first_anticipate_avail = first_anticipate_avail;
}

bool
SWGNAHouseModel::getFirstPidAvail() {
    return first_pid_avail;
}
void
SWGNAHouseModel::setFirstPidAvail(bool first_pid_avail) {
    this->first_pid_avail = first_pid_avail;
}

SWGNAStation*
SWGNAHouseModel::getGefs() {
    return gefs;
}
void
SWGNAHouseModel::setGefs(SWGNAStation* gefs) {
    this->gefs = gefs;
}

QString*
SWGNAHouseModel::getInUse() {
    return in_use;
}
void
SWGNAHouseModel::setInUse(QString* in_use) {
    this->in_use = in_use;
}

SWGNADate*
SWGNAHouseModel::getLastComputeTry() {
    return last_compute_try;
}
void
SWGNAHouseModel::setLastComputeTry(SWGNADate* last_compute_try) {
    this->last_compute_try = last_compute_try;
}

SWGNALinkStation*
SWGNAHouseModel::getLinkStation() {
    return link_station;
}
void
SWGNAHouseModel::setLinkStation(SWGNALinkStation* link_station) {
    this->link_station = link_station;
}

SWGNAPidAlgo*
SWGNAHouseModel::getPidAlgo() {
    return pid_algo;
}
void
SWGNAHouseModel::setPidAlgo(SWGNAPidAlgo* pid_algo) {
    this->pid_algo = pid_algo;
}

SWGNAStation*
SWGNAHouseModel::getStation() {
    return station;
}
void
SWGNAHouseModel::setStation(SWGNAStation* station) {
    this->station = station;
}

QString*
SWGNAHouseModel::getPreferedAlgoType() {
    return prefered_algo_type;
}
void
SWGNAHouseModel::setPreferedAlgoType(QString* prefered_algo_type) {
    this->prefered_algo_type = prefered_algo_type;
}

SWGNASimpleAlgo*
SWGNAHouseModel::getSimpleAlgo() {
    return simple_algo;
}
void
SWGNAHouseModel::setSimpleAlgo(SWGNASimpleAlgo* simple_algo) {
    this->simple_algo = simple_algo;
}

SWGNADate*
SWGNAHouseModel::getTime() {
    return time;
}
void
SWGNAHouseModel::setTime(SWGNADate* time) {
    this->time = time;
}

bool
SWGNAHouseModel::getStationFirsttimeAnticipate() {
    return station_firsttime_anticipate;
}
void
SWGNAHouseModel::setStationFirsttimeAnticipate(bool station_firsttime_anticipate) {
    this->station_firsttime_anticipate = station_firsttime_anticipate;
}

qint32
SWGNAHouseModel::getTimeAlgoChanged() {
    return time_algo_changed;
}
void
SWGNAHouseModel::setTimeAlgoChanged(qint32 time_algo_changed) {
    this->time_algo_changed = time_algo_changed;
}

qint32
SWGNAHouseModel::getTimePidComputed() {
    return time_pid_computed;
}
void
SWGNAHouseModel::setTimePidComputed(qint32 time_pid_computed) {
    this->time_pid_computed = time_pid_computed;
}



} /* namespace Swagger */

