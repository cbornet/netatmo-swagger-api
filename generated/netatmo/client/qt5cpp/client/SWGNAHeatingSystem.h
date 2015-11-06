/*
 * SWGNAHeatingSystem.h
 * 
 * 
 */

#ifndef SWGNAHeatingSystem_H_
#define SWGNAHeatingSystem_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNAHeatingSystem: public SWGObject {
public:
    SWGNAHeatingSystem();
    SWGNAHeatingSystem(QString* json);
    virtual ~SWGNAHeatingSystem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAHeatingSystem* fromJson(QString &jsonString);

    QString* getHeatingEnergy();
    void setHeatingEnergy(QString* heating_energy);
    bool getHeatingSystemWindowSeen();
    void setHeatingSystemWindowSeen(bool heating_system_window_seen);
    

private:
    QString* heating_energy;
    bool heating_system_window_seen;
    
};

} /* namespace Swagger */

#endif /* SWGNAHeatingSystem_H_ */
