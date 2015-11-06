/*
 * SWGNAUserAdministrative.h
 * 
 * 
 */

#ifndef SWGNAUserAdministrative_H_
#define SWGNAUserAdministrative_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNAUserAdministrative: public SWGObject {
public:
    SWGNAUserAdministrative();
    SWGNAUserAdministrative(QString* json);
    virtual ~SWGNAUserAdministrative();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAUserAdministrative* fromJson(QString &jsonString);

    QString* getCountry();
    void setCountry(QString* country);
    QString* getLang();
    void setLang(QString* lang);
    QString* getRegLocale();
    void setRegLocale(QString* reg_locale);
    QString* getUnit();
    void setUnit(QString* unit);
    QString* getWindunit();
    void setWindunit(QString* windunit);
    QString* getPressureunit();
    void setPressureunit(QString* pressureunit);
    QString* getFeelLikeAlgo();
    void setFeelLikeAlgo(QString* feel_like_algo);
    

private:
    QString* country;
    QString* lang;
    QString* reg_locale;
    QString* unit;
    QString* windunit;
    QString* pressureunit;
    QString* feel_like_algo;
    
};

} /* namespace Swagger */

#endif /* SWGNAUserAdministrative_H_ */
