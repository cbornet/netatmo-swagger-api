
#include "SWGNAStation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAStation::SWGNAStation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAStation::SWGNAStation() {
    init();
}

SWGNAStation::~SWGNAStation() {
    this->cleanup();
}

void
SWGNAStation::init() {
    lag_down = 0;
    lag_up = 0;
    off_overshoot = 0.0f;
    on_overshoot = 0.0f;
    pk = 0;
    tau = 0;
    
}

void
SWGNAStation::cleanup() {
    
    
    if(off_overshoot != NULL) {
        delete off_overshoot;
    }
    if(on_overshoot != NULL) {
        delete on_overshoot;
    }
    
    
    
}

SWGNAStation*
SWGNAStation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAStation::fromJsonObject(QJsonObject &pJson) {
    setValue(&lag_down, pJson["lag_down"], "qint32", "");
    setValue(&lag_up, pJson["lag_up"], "qint32", "");
    setValue(&off_overshoot, pJson["off_overshoot"], "float", "float");
    setValue(&on_overshoot, pJson["on_overshoot"], "float", "float");
    setValue(&pk, pJson["pk"], "qint32", "");
    setValue(&tau, pJson["tau"], "qint32", "");
    
}

QString
SWGNAStation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAStation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("lag_down", QJsonValue(lag_down));
    obj->insert("lag_up", QJsonValue(lag_up));
    
    
    toJsonValue(QString("off_overshoot"), off_overshoot, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("on_overshoot"), on_overshoot, obj, QString("float"));
    
    
    
    obj->insert("pk", QJsonValue(pk));
    obj->insert("tau", QJsonValue(tau));
    

    return obj;
}

qint32
SWGNAStation::getLagDown() {
    return lag_down;
}
void
SWGNAStation::setLagDown(qint32 lag_down) {
    this->lag_down = lag_down;
}

qint32
SWGNAStation::getLagUp() {
    return lag_up;
}
void
SWGNAStation::setLagUp(qint32 lag_up) {
    this->lag_up = lag_up;
}

float*
SWGNAStation::getOffOvershoot() {
    return off_overshoot;
}
void
SWGNAStation::setOffOvershoot(float* off_overshoot) {
    this->off_overshoot = off_overshoot;
}

float*
SWGNAStation::getOnOvershoot() {
    return on_overshoot;
}
void
SWGNAStation::setOnOvershoot(float* on_overshoot) {
    this->on_overshoot = on_overshoot;
}

qint32
SWGNAStation::getPk() {
    return pk;
}
void
SWGNAStation::setPk(qint32 pk) {
    this->pk = pk;
}

qint32
SWGNAStation::getTau() {
    return tau;
}
void
SWGNAStation::setTau(qint32 tau) {
    this->tau = tau;
}



} /* namespace Swagger */

