
#include "SWGNANewScheduleBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNANewScheduleBody::SWGNANewScheduleBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNANewScheduleBody::SWGNANewScheduleBody() {
    init();
}

SWGNANewScheduleBody::~SWGNANewScheduleBody() {
    this->cleanup();
}

void
SWGNANewScheduleBody::init() {
    schedule_id = new QString("");
    
}

void
SWGNANewScheduleBody::cleanup() {
    if(schedule_id != NULL) {
        delete schedule_id;
    }
    
}

SWGNANewScheduleBody*
SWGNANewScheduleBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNANewScheduleBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&schedule_id, pJson["schedule_id"], "QString", "QString");
    
}

QString
SWGNANewScheduleBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNANewScheduleBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("schedule_id"), schedule_id, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGNANewScheduleBody::getScheduleId() {
    return schedule_id;
}
void
SWGNANewScheduleBody::setScheduleId(QString* schedule_id) {
    this->schedule_id = schedule_id;
}



} /* namespace Swagger */

