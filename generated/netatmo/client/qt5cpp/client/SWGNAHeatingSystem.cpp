
#include "SWGNAHeatingSystem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAHeatingSystem::SWGNAHeatingSystem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAHeatingSystem::SWGNAHeatingSystem() {
    init();
}

SWGNAHeatingSystem::~SWGNAHeatingSystem() {
    this->cleanup();
}

void
SWGNAHeatingSystem::init() {
    heating_energy = new QString("");
    heating_system_window_seen = false;
    
}

void
SWGNAHeatingSystem::cleanup() {
    if(heating_energy != NULL) {
        delete heating_energy;
    }
    
    
}

SWGNAHeatingSystem*
SWGNAHeatingSystem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAHeatingSystem::fromJsonObject(QJsonObject &pJson) {
    setValue(&heating_energy, pJson["heating_energy"], "QString", "QString");
    setValue(&heating_system_window_seen, pJson["heating_system_window_seen"], "bool", "");
    
}

QString
SWGNAHeatingSystem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAHeatingSystem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("heating_energy"), heating_energy, obj, QString("QString"));
    
    
    
    obj->insert("heating_system_window_seen", QJsonValue(heating_system_window_seen));
    

    return obj;
}

QString*
SWGNAHeatingSystem::getHeatingEnergy() {
    return heating_energy;
}
void
SWGNAHeatingSystem::setHeatingEnergy(QString* heating_energy) {
    this->heating_energy = heating_energy;
}

bool
SWGNAHeatingSystem::getHeatingSystemWindowSeen() {
    return heating_system_window_seen;
}
void
SWGNAHeatingSystem::setHeatingSystemWindowSeen(bool heating_system_window_seen) {
    this->heating_system_window_seen = heating_system_window_seen;
}



} /* namespace Swagger */

