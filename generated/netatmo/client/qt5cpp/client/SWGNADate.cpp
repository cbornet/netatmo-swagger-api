
#include "SWGNADate.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNADate::SWGNADate(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNADate::SWGNADate() {
    init();
}

SWGNADate::~SWGNADate() {
    this->cleanup();
}

void
SWGNADate::init() {
    sec = 0;
    usec = 0;
    
}

void
SWGNADate::cleanup() {
    
    
    
}

SWGNADate*
SWGNADate::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNADate::fromJsonObject(QJsonObject &pJson) {
    setValue(&sec, pJson["sec"], "qint32", "");
    setValue(&usec, pJson["usec"], "qint32", "");
    
}

QString
SWGNADate::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNADate::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("sec", QJsonValue(sec));
    obj->insert("usec", QJsonValue(usec));
    

    return obj;
}

qint32
SWGNADate::getSec() {
    return sec;
}
void
SWGNADate::setSec(qint32 sec) {
    this->sec = sec;
}

qint32
SWGNADate::getUsec() {
    return usec;
}
void
SWGNADate::setUsec(qint32 usec) {
    this->usec = usec;
}



} /* namespace Swagger */

