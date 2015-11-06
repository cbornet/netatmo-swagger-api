
#include "SWGNADashboardData.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNADashboardData::SWGNADashboardData(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNADashboardData::SWGNADashboardData() {
    init();
}

SWGNADashboardData::~SWGNADashboardData() {
    this->cleanup();
}

void
SWGNADashboardData::init() {
    time_utc = 0;
    device_id = 0.0f;
    BoilerOn = 0;
    BoilerOff = 0;
    Temperature = 0.0f;
    date_max_temp = 0;
    date_min_temp = 0;
    min_temp = 0.0f;
    max_temp = 0.0f;
    AbsolutePressure = 0.0f;
    CO2 = 0.0f;
    Humidity = 0.0f;
    Noise = 0.0f;
    Pressure = 0.0f;
    Rain = 0;
    sum_rain_1 = 0;
    sum_rain_24 = 0;
    
}

void
SWGNADashboardData::cleanup() {
    
    if(device_id != NULL) {
        delete device_id;
    }
    
    
    if(Temperature != NULL) {
        delete Temperature;
    }
    
    
    if(min_temp != NULL) {
        delete min_temp;
    }
    if(max_temp != NULL) {
        delete max_temp;
    }
    if(AbsolutePressure != NULL) {
        delete AbsolutePressure;
    }
    if(CO2 != NULL) {
        delete CO2;
    }
    if(Humidity != NULL) {
        delete Humidity;
    }
    if(Noise != NULL) {
        delete Noise;
    }
    if(Pressure != NULL) {
        delete Pressure;
    }
    
    
    
    
}

SWGNADashboardData*
SWGNADashboardData::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNADashboardData::fromJsonObject(QJsonObject &pJson) {
    setValue(&time_utc, pJson["time_utc"], "qint32", "");
    setValue(&device_id, pJson["device_id"], "float", "float");
    setValue(&BoilerOn, pJson["BoilerOn"], "qint32", "");
    setValue(&BoilerOff, pJson["BoilerOff"], "qint32", "");
    setValue(&Temperature, pJson["Temperature"], "float", "float");
    setValue(&date_max_temp, pJson["date_max_temp"], "qint32", "");
    setValue(&date_min_temp, pJson["date_min_temp"], "qint32", "");
    setValue(&min_temp, pJson["min_temp"], "float", "float");
    setValue(&max_temp, pJson["max_temp"], "float", "float");
    setValue(&AbsolutePressure, pJson["AbsolutePressure"], "float", "float");
    setValue(&CO2, pJson["CO2"], "float", "float");
    setValue(&Humidity, pJson["Humidity"], "float", "float");
    setValue(&Noise, pJson["Noise"], "float", "float");
    setValue(&Pressure, pJson["Pressure"], "float", "float");
    setValue(&Rain, pJson["Rain"], "qint32", "");
    setValue(&sum_rain_1, pJson["sum_rain_1"], "qint32", "");
    setValue(&sum_rain_24, pJson["sum_rain_24"], "qint32", "");
    
}

QString
SWGNADashboardData::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNADashboardData::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("time_utc", QJsonValue(time_utc));
    
    
    toJsonValue(QString("device_id"), device_id, obj, QString("float"));
    
    
    
    obj->insert("BoilerOn", QJsonValue(BoilerOn));
    obj->insert("BoilerOff", QJsonValue(BoilerOff));
    
    
    toJsonValue(QString("Temperature"), Temperature, obj, QString("float"));
    
    
    
    obj->insert("date_max_temp", QJsonValue(date_max_temp));
    obj->insert("date_min_temp", QJsonValue(date_min_temp));
    
    
    toJsonValue(QString("min_temp"), min_temp, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("max_temp"), max_temp, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("AbsolutePressure"), AbsolutePressure, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("CO2"), CO2, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("Humidity"), Humidity, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("Noise"), Noise, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("Pressure"), Pressure, obj, QString("float"));
    
    
    
    obj->insert("Rain", QJsonValue(Rain));
    obj->insert("sum_rain_1", QJsonValue(sum_rain_1));
    obj->insert("sum_rain_24", QJsonValue(sum_rain_24));
    

    return obj;
}

qint32
SWGNADashboardData::getTimeUtc() {
    return time_utc;
}
void
SWGNADashboardData::setTimeUtc(qint32 time_utc) {
    this->time_utc = time_utc;
}

float*
SWGNADashboardData::getDeviceId() {
    return device_id;
}
void
SWGNADashboardData::setDeviceId(float* device_id) {
    this->device_id = device_id;
}

qint32
SWGNADashboardData::getBoilerOn() {
    return BoilerOn;
}
void
SWGNADashboardData::setBoilerOn(qint32 BoilerOn) {
    this->BoilerOn = BoilerOn;
}

qint32
SWGNADashboardData::getBoilerOff() {
    return BoilerOff;
}
void
SWGNADashboardData::setBoilerOff(qint32 BoilerOff) {
    this->BoilerOff = BoilerOff;
}

float*
SWGNADashboardData::getTemperature() {
    return Temperature;
}
void
SWGNADashboardData::setTemperature(float* Temperature) {
    this->Temperature = Temperature;
}

qint32
SWGNADashboardData::getDateMaxTemp() {
    return date_max_temp;
}
void
SWGNADashboardData::setDateMaxTemp(qint32 date_max_temp) {
    this->date_max_temp = date_max_temp;
}

qint32
SWGNADashboardData::getDateMinTemp() {
    return date_min_temp;
}
void
SWGNADashboardData::setDateMinTemp(qint32 date_min_temp) {
    this->date_min_temp = date_min_temp;
}

float*
SWGNADashboardData::getMinTemp() {
    return min_temp;
}
void
SWGNADashboardData::setMinTemp(float* min_temp) {
    this->min_temp = min_temp;
}

float*
SWGNADashboardData::getMaxTemp() {
    return max_temp;
}
void
SWGNADashboardData::setMaxTemp(float* max_temp) {
    this->max_temp = max_temp;
}

float*
SWGNADashboardData::getAbsolutePressure() {
    return AbsolutePressure;
}
void
SWGNADashboardData::setAbsolutePressure(float* AbsolutePressure) {
    this->AbsolutePressure = AbsolutePressure;
}

float*
SWGNADashboardData::getCO2() {
    return CO2;
}
void
SWGNADashboardData::setCO2(float* CO2) {
    this->CO2 = CO2;
}

float*
SWGNADashboardData::getHumidity() {
    return Humidity;
}
void
SWGNADashboardData::setHumidity(float* Humidity) {
    this->Humidity = Humidity;
}

float*
SWGNADashboardData::getNoise() {
    return Noise;
}
void
SWGNADashboardData::setNoise(float* Noise) {
    this->Noise = Noise;
}

float*
SWGNADashboardData::getPressure() {
    return Pressure;
}
void
SWGNADashboardData::setPressure(float* Pressure) {
    this->Pressure = Pressure;
}

qint32
SWGNADashboardData::getRain() {
    return Rain;
}
void
SWGNADashboardData::setRain(qint32 Rain) {
    this->Rain = Rain;
}

qint32
SWGNADashboardData::getSumRain1() {
    return sum_rain_1;
}
void
SWGNADashboardData::setSumRain1(qint32 sum_rain_1) {
    this->sum_rain_1 = sum_rain_1;
}

qint32
SWGNADashboardData::getSumRain24() {
    return sum_rain_24;
}
void
SWGNADashboardData::setSumRain24(qint32 sum_rain_24) {
    this->sum_rain_24 = sum_rain_24;
}



} /* namespace Swagger */

