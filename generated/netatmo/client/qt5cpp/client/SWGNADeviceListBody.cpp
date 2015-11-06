
#include "SWGNADeviceListBody.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNADeviceListBody::SWGNADeviceListBody(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNADeviceListBody::SWGNADeviceListBody() {
    init();
}

SWGNADeviceListBody::~SWGNADeviceListBody() {
    this->cleanup();
}

void
SWGNADeviceListBody::init() {
    devices = new QList<SWGNADevice*>();
    modules = new QList<SWGNAModule*>();
    
}

void
SWGNADeviceListBody::cleanup() {
    if(devices != NULL) {
        QList<SWGNADevice*>* arr = devices;
        foreach(SWGNADevice* o, *arr) {
            delete o;
        }
        delete devices;
    }
    if(modules != NULL) {
        QList<SWGNAModule*>* arr = modules;
        foreach(SWGNAModule* o, *arr) {
            delete o;
        }
        delete modules;
    }
    
}

SWGNADeviceListBody*
SWGNADeviceListBody::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNADeviceListBody::fromJsonObject(QJsonObject &pJson) {
    setValue(&devices, pJson["devices"], "QList", "SWGNADevice");
    setValue(&modules, pJson["modules"], "QList", "SWGNAModule");
    
}

QString
SWGNADeviceListBody::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNADeviceListBody::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGNADevice*>* devicesList = devices;
    QJsonArray devicesJsonArray;
    toJsonArray((QList<void*>*)devices, &devicesJsonArray, "devices", "SWGNADevice");

    obj->insert("devices", devicesJsonArray);
    
    
    
    
    QList<SWGNAModule*>* modulesList = modules;
    QJsonArray modulesJsonArray;
    toJsonArray((QList<void*>*)modules, &modulesJsonArray, "modules", "SWGNAModule");

    obj->insert("modules", modulesJsonArray);
    
    
    

    return obj;
}

QList<SWGNADevice*>*
SWGNADeviceListBody::getDevices() {
    return devices;
}
void
SWGNADeviceListBody::setDevices(QList<SWGNADevice*>* devices) {
    this->devices = devices;
}

QList<SWGNAModule*>*
SWGNADeviceListBody::getModules() {
    return modules;
}
void
SWGNADeviceListBody::setModules(QList<SWGNAModule*>* modules) {
    this->modules = modules;
}



} /* namespace Swagger */

