/*
 * SWGNADeviceListResponse.h
 * 
 * 
 */

#ifndef SWGNADeviceListResponse_H_
#define SWGNADeviceListResponse_H_

#include <QJsonObject>


#include "SWGNADeviceListBody.h"
#include "SWGNAResponse.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNADeviceListResponse: public SWGObject {
public:
    SWGNADeviceListResponse();
    SWGNADeviceListResponse(QString* json);
    virtual ~SWGNADeviceListResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNADeviceListResponse* fromJson(QString &jsonString);

    SWGNADeviceListBody* getBody();
    void setBody(SWGNADeviceListBody* body);
    

private:
    SWGNADeviceListBody* body;
    
};

} /* namespace Swagger */

#endif /* SWGNADeviceListResponse_H_ */
