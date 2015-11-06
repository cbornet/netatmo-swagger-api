
#include "SWGNAThermMeasure.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAThermMeasure::SWGNAThermMeasure(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAThermMeasure::SWGNAThermMeasure() {
    init();
}

SWGNAThermMeasure::~SWGNAThermMeasure() {
    this->cleanup();
}

void
SWGNAThermMeasure::init() {
    time = 0;
    temperature = 0.0f;
    setpoint_temp = 0.0f;
    
}

void
SWGNAThermMeasure::cleanup() {
    
    if(temperature != NULL) {
        delete temperature;
    }
    if(setpoint_temp != NULL) {
        delete setpoint_temp;
    }
    
}

SWGNAThermMeasure*
SWGNAThermMeasure::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAThermMeasure::fromJsonObject(QJsonObject &pJson) {
    setValue(&time, pJson["time"], "qint32", "");
    setValue(&temperature, pJson["temperature"], "float", "float");
    setValue(&setpoint_temp, pJson["setpoint_temp"], "float", "float");
    
}

QString
SWGNAThermMeasure::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAThermMeasure::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("time", QJsonValue(time));
    
    
    toJsonValue(QString("temperature"), temperature, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("setpoint_temp"), setpoint_temp, obj, QString("float"));
    
    
    
    

    return obj;
}

qint32
SWGNAThermMeasure::getTime() {
    return time;
}
void
SWGNAThermMeasure::setTime(qint32 time) {
    this->time = time;
}

float*
SWGNAThermMeasure::getTemperature() {
    return temperature;
}
void
SWGNAThermMeasure::setTemperature(float* temperature) {
    this->temperature = temperature;
}

float*
SWGNAThermMeasure::getSetpointTemp() {
    return setpoint_temp;
}
void
SWGNAThermMeasure::setSetpointTemp(float* setpoint_temp) {
    this->setpoint_temp = setpoint_temp;
}



} /* namespace Swagger */

