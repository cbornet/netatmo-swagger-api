
#include "SWGNALinkStation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNALinkStation::SWGNALinkStation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNALinkStation::SWGNALinkStation() {
    init();
}

SWGNALinkStation::~SWGNALinkStation() {
    this->cleanup();
}

void
SWGNALinkStation::init() {
    mac = new QString("");
    ext = new QString("");
    Temperature = 0.0f;
    
}

void
SWGNALinkStation::cleanup() {
    if(mac != NULL) {
        delete mac;
    }
    if(ext != NULL) {
        delete ext;
    }
    if(Temperature != NULL) {
        delete Temperature;
    }
    
}

SWGNALinkStation*
SWGNALinkStation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNALinkStation::fromJsonObject(QJsonObject &pJson) {
    setValue(&mac, pJson["mac"], "QString", "QString");
    setValue(&ext, pJson["ext"], "QString", "QString");
    setValue(&Temperature, pJson["Temperature"], "float", "float");
    
}

QString
SWGNALinkStation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNALinkStation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("mac"), mac, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("ext"), ext, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("Temperature"), Temperature, obj, QString("float"));
    
    
    
    

    return obj;
}

QString*
SWGNALinkStation::getMac() {
    return mac;
}
void
SWGNALinkStation::setMac(QString* mac) {
    this->mac = mac;
}

QString*
SWGNALinkStation::getExt() {
    return ext;
}
void
SWGNALinkStation::setExt(QString* ext) {
    this->ext = ext;
}

float*
SWGNALinkStation::getTemperature() {
    return Temperature;
}
void
SWGNALinkStation::setTemperature(float* Temperature) {
    this->Temperature = Temperature;
}



} /* namespace Swagger */

