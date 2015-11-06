/*
 * SWGNADeviceListBody.h
 * 
 * 
 */

#ifndef SWGNADeviceListBody_H_
#define SWGNADeviceListBody_H_

#include <QJsonObject>


#include "SWGNAModule.h"
#include <QList>
#include "SWGNADevice.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNADeviceListBody: public SWGObject {
public:
    SWGNADeviceListBody();
    SWGNADeviceListBody(QString* json);
    virtual ~SWGNADeviceListBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNADeviceListBody* fromJson(QString &jsonString);

    QList<SWGNADevice*>* getDevices();
    void setDevices(QList<SWGNADevice*>* devices);
    QList<SWGNAModule*>* getModules();
    void setModules(QList<SWGNAModule*>* modules);
    

private:
    QList<SWGNADevice*>* devices;
    QList<SWGNAModule*>* modules;
    
};

} /* namespace Swagger */

#endif /* SWGNADeviceListBody_H_ */
