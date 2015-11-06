
#include "SWGNAPidAlgo.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAPidAlgo::SWGNAPidAlgo(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAPidAlgo::SWGNAPidAlgo() {
    init();
}

SWGNAPidAlgo::~SWGNAPidAlgo() {
    this->cleanup();
}

void
SWGNAPidAlgo::init() {
    gain = 0;
    period = 0;
    td = 0;
    ti = 0;
    
}

void
SWGNAPidAlgo::cleanup() {
    
    
    
    
    
}

SWGNAPidAlgo*
SWGNAPidAlgo::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAPidAlgo::fromJsonObject(QJsonObject &pJson) {
    setValue(&gain, pJson["gain"], "qint32", "");
    setValue(&period, pJson["period"], "qint32", "");
    setValue(&td, pJson["td"], "qint32", "");
    setValue(&ti, pJson["ti"], "qint32", "");
    
}

QString
SWGNAPidAlgo::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAPidAlgo::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("gain", QJsonValue(gain));
    obj->insert("period", QJsonValue(period));
    obj->insert("td", QJsonValue(td));
    obj->insert("ti", QJsonValue(ti));
    

    return obj;
}

qint32
SWGNAPidAlgo::getGain() {
    return gain;
}
void
SWGNAPidAlgo::setGain(qint32 gain) {
    this->gain = gain;
}

qint32
SWGNAPidAlgo::getPeriod() {
    return period;
}
void
SWGNAPidAlgo::setPeriod(qint32 period) {
    this->period = period;
}

qint32
SWGNAPidAlgo::getTd() {
    return td;
}
void
SWGNAPidAlgo::setTd(qint32 td) {
    this->td = td;
}

qint32
SWGNAPidAlgo::getTi() {
    return ti;
}
void
SWGNAPidAlgo::setTi(qint32 ti) {
    this->ti = ti;
}



} /* namespace Swagger */

