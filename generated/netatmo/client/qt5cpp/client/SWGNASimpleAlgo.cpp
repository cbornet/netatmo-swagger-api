
#include "SWGNASimpleAlgo.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNASimpleAlgo::SWGNASimpleAlgo(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNASimpleAlgo::SWGNASimpleAlgo() {
    init();
}

SWGNASimpleAlgo::~SWGNASimpleAlgo() {
    this->cleanup();
}

void
SWGNASimpleAlgo::init() {
    high_deadband = 0;
    
}

void
SWGNASimpleAlgo::cleanup() {
    
    
}

SWGNASimpleAlgo*
SWGNASimpleAlgo::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNASimpleAlgo::fromJsonObject(QJsonObject &pJson) {
    setValue(&high_deadband, pJson["high_deadband"], "qint32", "");
    
}

QString
SWGNASimpleAlgo::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNASimpleAlgo::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("high_deadband", QJsonValue(high_deadband));
    

    return obj;
}

qint32
SWGNASimpleAlgo::getHighDeadband() {
    return high_deadband;
}
void
SWGNASimpleAlgo::setHighDeadband(qint32 high_deadband) {
    this->high_deadband = high_deadband;
}



} /* namespace Swagger */

