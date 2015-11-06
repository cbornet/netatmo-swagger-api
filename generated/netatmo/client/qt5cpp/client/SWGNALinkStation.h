/*
 * SWGNALinkStation.h
 * 
 * 
 */

#ifndef SWGNALinkStation_H_
#define SWGNALinkStation_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNALinkStation: public SWGObject {
public:
    SWGNALinkStation();
    SWGNALinkStation(QString* json);
    virtual ~SWGNALinkStation();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNALinkStation* fromJson(QString &jsonString);

    QString* getMac();
    void setMac(QString* mac);
    QString* getExt();
    void setExt(QString* ext);
    float* getTemperature();
    void setTemperature(float* Temperature);
    

private:
    QString* mac;
    QString* ext;
    float* Temperature;
    
};

} /* namespace Swagger */

#endif /* SWGNALinkStation_H_ */
