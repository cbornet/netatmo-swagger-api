
#include "SWGNAPlace.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAPlace::SWGNAPlace(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAPlace::SWGNAPlace() {
    init();
}

SWGNAPlace::~SWGNAPlace() {
    this->cleanup();
}

void
SWGNAPlace::init() {
    city = new QString("");
    altitude = 0.0f;
    country = new QString("");
    from_ip = false;
    improveLocProposed = false;
    location = new QList<double*>();
    timezone = new QString("");
    trust_location = false;
    
}

void
SWGNAPlace::cleanup() {
    if(city != NULL) {
        delete city;
    }
    if(altitude != NULL) {
        delete altitude;
    }
    if(country != NULL) {
        delete country;
    }
    
    
    if(location != NULL) {
        QList<double*>* arr = location;
        foreach(double* o, *arr) {
            delete o;
        }
        delete location;
    }
    if(timezone != NULL) {
        delete timezone;
    }
    
    
}

SWGNAPlace*
SWGNAPlace::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAPlace::fromJsonObject(QJsonObject &pJson) {
    setValue(&city, pJson["city"], "QString", "QString");
    setValue(&altitude, pJson["altitude"], "float", "float");
    setValue(&country, pJson["country"], "QString", "QString");
    setValue(&from_ip, pJson["from_ip"], "bool", "");
    setValue(&improveLocProposed, pJson["improveLocProposed"], "bool", "");
    setValue(&location, pJson["location"], "QList", "double");
    setValue(&timezone, pJson["timezone"], "QString", "QString");
    setValue(&trust_location, pJson["trust_location"], "bool", "");
    
}

QString
SWGNAPlace::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAPlace::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("city"), city, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("altitude"), altitude, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("country"), country, obj, QString("QString"));
    
    
    
    obj->insert("from_ip", QJsonValue(from_ip));
    obj->insert("improveLocProposed", QJsonValue(improveLocProposed));
    
    
    QList<double*>* locationList = location;
    QJsonArray locationJsonArray;
    toJsonArray((QList<void*>*)location, &locationJsonArray, "location", "double");

    obj->insert("location", locationJsonArray);
    
    
    
    
    toJsonValue(QString("timezone"), timezone, obj, QString("QString"));
    
    
    
    obj->insert("trust_location", QJsonValue(trust_location));
    

    return obj;
}

QString*
SWGNAPlace::getCity() {
    return city;
}
void
SWGNAPlace::setCity(QString* city) {
    this->city = city;
}

float*
SWGNAPlace::getAltitude() {
    return altitude;
}
void
SWGNAPlace::setAltitude(float* altitude) {
    this->altitude = altitude;
}

QString*
SWGNAPlace::getCountry() {
    return country;
}
void
SWGNAPlace::setCountry(QString* country) {
    this->country = country;
}

bool
SWGNAPlace::getFromIp() {
    return from_ip;
}
void
SWGNAPlace::setFromIp(bool from_ip) {
    this->from_ip = from_ip;
}

bool
SWGNAPlace::getImproveLocProposed() {
    return improveLocProposed;
}
void
SWGNAPlace::setImproveLocProposed(bool improveLocProposed) {
    this->improveLocProposed = improveLocProposed;
}

QList<double*>*
SWGNAPlace::getLocation() {
    return location;
}
void
SWGNAPlace::setLocation(QList<double*>* location) {
    this->location = location;
}

QString*
SWGNAPlace::getTimezone() {
    return timezone;
}
void
SWGNAPlace::setTimezone(QString* timezone) {
    this->timezone = timezone;
}

bool
SWGNAPlace::getTrustLocation() {
    return trust_location;
}
void
SWGNAPlace::setTrustLocation(bool trust_location) {
    this->trust_location = trust_location;
}



} /* namespace Swagger */

