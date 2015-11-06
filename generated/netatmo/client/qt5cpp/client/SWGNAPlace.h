/*
 * SWGNAPlace.h
 * 
 * 
 */

#ifndef SWGNAPlace_H_
#define SWGNAPlace_H_

#include <QJsonObject>


#include <QString>
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGNAPlace: public SWGObject {
public:
    SWGNAPlace();
    SWGNAPlace(QString* json);
    virtual ~SWGNAPlace();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAPlace* fromJson(QString &jsonString);

    QString* getCity();
    void setCity(QString* city);
    float* getAltitude();
    void setAltitude(float* altitude);
    QString* getCountry();
    void setCountry(QString* country);
    bool getFromIp();
    void setFromIp(bool from_ip);
    bool getImproveLocProposed();
    void setImproveLocProposed(bool improveLocProposed);
    QList<double*>* getLocation();
    void setLocation(QList<double*>* location);
    QString* getTimezone();
    void setTimezone(QString* timezone);
    bool getTrustLocation();
    void setTrustLocation(bool trust_location);
    

private:
    QString* city;
    float* altitude;
    QString* country;
    bool from_ip;
    bool improveLocProposed;
    QList<double*>* location;
    QString* timezone;
    bool trust_location;
    
};

} /* namespace Swagger */

#endif /* SWGNAPlace_H_ */
