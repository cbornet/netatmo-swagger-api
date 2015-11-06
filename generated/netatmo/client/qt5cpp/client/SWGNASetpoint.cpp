
#include "SWGNASetpoint.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNASetpoint::SWGNASetpoint(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNASetpoint::SWGNASetpoint() {
    init();
}

SWGNASetpoint::~SWGNASetpoint() {
    this->cleanup();
}

void
SWGNASetpoint::init() {
    setpoint_temp = 0.0f;
    setpoint_endtime = 0;
    setpoint_mode = new QString("");
    
}

void
SWGNASetpoint::cleanup() {
    if(setpoint_temp != NULL) {
        delete setpoint_temp;
    }
    
    if(setpoint_mode != NULL) {
        delete setpoint_mode;
    }
    
}

SWGNASetpoint*
SWGNASetpoint::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNASetpoint::fromJsonObject(QJsonObject &pJson) {
    setValue(&setpoint_temp, pJson["setpoint_temp"], "float", "float");
    setValue(&setpoint_endtime, pJson["setpoint_endtime"], "qint32", "");
    setValue(&setpoint_mode, pJson["setpoint_mode"], "QString", "QString");
    
}

QString
SWGNASetpoint::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNASetpoint::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("setpoint_temp"), setpoint_temp, obj, QString("float"));
    
    
    
    obj->insert("setpoint_endtime", QJsonValue(setpoint_endtime));
    
    
    toJsonValue(QString("setpoint_mode"), setpoint_mode, obj, QString("QString"));
    
    
    
    

    return obj;
}

float*
SWGNASetpoint::getSetpointTemp() {
    return setpoint_temp;
}
void
SWGNASetpoint::setSetpointTemp(float* setpoint_temp) {
    this->setpoint_temp = setpoint_temp;
}

qint32
SWGNASetpoint::getSetpointEndtime() {
    return setpoint_endtime;
}
void
SWGNASetpoint::setSetpointEndtime(qint32 setpoint_endtime) {
    this->setpoint_endtime = setpoint_endtime;
}

QString*
SWGNASetpoint::getSetpointMode() {
    return setpoint_mode;
}
void
SWGNASetpoint::setSetpointMode(QString* setpoint_mode) {
    this->setpoint_mode = setpoint_mode;
}



} /* namespace Swagger */

