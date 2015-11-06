
#include "SWGNAUserAdministrative.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAUserAdministrative::SWGNAUserAdministrative(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAUserAdministrative::SWGNAUserAdministrative() {
    init();
}

SWGNAUserAdministrative::~SWGNAUserAdministrative() {
    this->cleanup();
}

void
SWGNAUserAdministrative::init() {
    country = new QString("");
    lang = new QString("");
    reg_locale = new QString("");
    unit = new QString("");
    windunit = new QString("");
    pressureunit = new QString("");
    feel_like_algo = new QString("");
    
}

void
SWGNAUserAdministrative::cleanup() {
    if(country != NULL) {
        delete country;
    }
    if(lang != NULL) {
        delete lang;
    }
    if(reg_locale != NULL) {
        delete reg_locale;
    }
    if(unit != NULL) {
        delete unit;
    }
    if(windunit != NULL) {
        delete windunit;
    }
    if(pressureunit != NULL) {
        delete pressureunit;
    }
    if(feel_like_algo != NULL) {
        delete feel_like_algo;
    }
    
}

SWGNAUserAdministrative*
SWGNAUserAdministrative::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAUserAdministrative::fromJsonObject(QJsonObject &pJson) {
    setValue(&country, pJson["country"], "QString", "QString");
    setValue(&lang, pJson["lang"], "QString", "QString");
    setValue(&reg_locale, pJson["reg_locale"], "QString", "QString");
    setValue(&unit, pJson["unit"], "QString", "QString");
    setValue(&windunit, pJson["windunit"], "QString", "QString");
    setValue(&pressureunit, pJson["pressureunit"], "QString", "QString");
    setValue(&feel_like_algo, pJson["feel_like_algo"], "QString", "QString");
    
}

QString
SWGNAUserAdministrative::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAUserAdministrative::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("country"), country, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("lang"), lang, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("reg_locale"), reg_locale, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("windunit"), windunit, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("pressureunit"), pressureunit, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("feel_like_algo"), feel_like_algo, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGNAUserAdministrative::getCountry() {
    return country;
}
void
SWGNAUserAdministrative::setCountry(QString* country) {
    this->country = country;
}

QString*
SWGNAUserAdministrative::getLang() {
    return lang;
}
void
SWGNAUserAdministrative::setLang(QString* lang) {
    this->lang = lang;
}

QString*
SWGNAUserAdministrative::getRegLocale() {
    return reg_locale;
}
void
SWGNAUserAdministrative::setRegLocale(QString* reg_locale) {
    this->reg_locale = reg_locale;
}

QString*
SWGNAUserAdministrative::getUnit() {
    return unit;
}
void
SWGNAUserAdministrative::setUnit(QString* unit) {
    this->unit = unit;
}

QString*
SWGNAUserAdministrative::getWindunit() {
    return windunit;
}
void
SWGNAUserAdministrative::setWindunit(QString* windunit) {
    this->windunit = windunit;
}

QString*
SWGNAUserAdministrative::getPressureunit() {
    return pressureunit;
}
void
SWGNAUserAdministrative::setPressureunit(QString* pressureunit) {
    this->pressureunit = pressureunit;
}

QString*
SWGNAUserAdministrative::getFeelLikeAlgo() {
    return feel_like_algo;
}
void
SWGNAUserAdministrative::setFeelLikeAlgo(QString* feel_like_algo) {
    this->feel_like_algo = feel_like_algo;
}



} /* namespace Swagger */

