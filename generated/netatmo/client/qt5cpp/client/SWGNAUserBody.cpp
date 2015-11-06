
#include "SWGNAUserBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAUserBody::SWGNAUserBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAUserBody::SWGNAUserBody() {
    init();
}

SWGNAUserBody::~SWGNAUserBody() {
    this->cleanup();
}

void
SWGNAUserBody::init() {
    _id = new QString("");
    administrative = new SWGNAUserAdministrative();
    date_creation = new SWGNADate();
    devices = new QList<QString*>();
    friend_devices = new QList<QString*>();
    mail = new QString("");
    timeline_not_read = 0;
    timeline_size = 0;
    
}

void
SWGNAUserBody::cleanup() {
    if(_id != NULL) {
        delete _id;
    }
    if(administrative != NULL) {
        delete administrative;
    }
    if(date_creation != NULL) {
        delete date_creation;
    }
    if(devices != NULL) {
        QList<QString*>* arr = devices;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete devices;
    }
    if(friend_devices != NULL) {
        QList<QString*>* arr = friend_devices;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete friend_devices;
    }
    if(mail != NULL) {
        delete mail;
    }
    
    
    
}

SWGNAUserBody*
SWGNAUserBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAUserBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&_id, pJson["_id"], "QString", "QString");
    setValue(&administrative, pJson["administrative"], "SWGNAUserAdministrative", "SWGNAUserAdministrative");
    setValue(&date_creation, pJson["date_creation"], "SWGNADate", "SWGNADate");
    setValue(&devices, pJson["devices"], "QList", "QString");
    setValue(&friend_devices, pJson["friend_devices"], "QList", "QString");
    setValue(&mail, pJson["mail"], "QString", "QString");
    setValue(&timeline_not_read, pJson["timeline_not_read"], "qint32", "");
    setValue(&timeline_size, pJson["timeline_size"], "qint32", "");
    
}

QString
SWGNAUserBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAUserBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("_id"), _id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("administrative"), administrative, obj, QString("SWGNAUserAdministrative"));
    
    
    
    
    
    toJsonValue(QString("date_creation"), date_creation, obj, QString("SWGNADate"));
    
    
    
    
    
    QList<QString*>* devicesList = devices;
    QJsonArray devicesJsonArray;
    toJsonArray((QList<void*>*)devices, &devicesJsonArray, "devices", "QString");

    obj->insert("devices", devicesJsonArray);
    
    
    
    
    QList<QString*>* friend_devicesList = friend_devices;
    QJsonArray friend_devicesJsonArray;
    toJsonArray((QList<void*>*)friend_devices, &friend_devicesJsonArray, "friend_devices", "QString");

    obj->insert("friend_devices", friend_devicesJsonArray);
    
    
    
    
    toJsonValue(QString("mail"), mail, obj, QString("QString"));
    
    
    
    obj->insert("timeline_not_read", QJsonValue(timeline_not_read));
    obj->insert("timeline_size", QJsonValue(timeline_size));
    

    return obj;
}

QString*
SWGNAUserBody::getId() {
    return _id;
}
void
SWGNAUserBody::setId(QString* _id) {
    this->_id = _id;
}

SWGNAUserAdministrative*
SWGNAUserBody::getAdministrative() {
    return administrative;
}
void
SWGNAUserBody::setAdministrative(SWGNAUserAdministrative* administrative) {
    this->administrative = administrative;
}

SWGNADate*
SWGNAUserBody::getDateCreation() {
    return date_creation;
}
void
SWGNAUserBody::setDateCreation(SWGNADate* date_creation) {
    this->date_creation = date_creation;
}

QList<QString*>*
SWGNAUserBody::getDevices() {
    return devices;
}
void
SWGNAUserBody::setDevices(QList<QString*>* devices) {
    this->devices = devices;
}

QList<QString*>*
SWGNAUserBody::getFriendDevices() {
    return friend_devices;
}
void
SWGNAUserBody::setFriendDevices(QList<QString*>* friend_devices) {
    this->friend_devices = friend_devices;
}

QString*
SWGNAUserBody::getMail() {
    return mail;
}
void
SWGNAUserBody::setMail(QString* mail) {
    this->mail = mail;
}

qint32
SWGNAUserBody::getTimelineNotRead() {
    return timeline_not_read;
}
void
SWGNAUserBody::setTimelineNotRead(qint32 timeline_not_read) {
    this->timeline_not_read = timeline_not_read;
}

qint32
SWGNAUserBody::getTimelineSize() {
    return timeline_size;
}
void
SWGNAUserBody::setTimelineSize(qint32 timeline_size) {
    this->timeline_size = timeline_size;
}



} /* namespace Swagger */

