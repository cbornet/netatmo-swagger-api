/*
 * SWGNAPartnerDevicesResponse.h
 * 
 * 
 */

#ifndef SWGNAPartnerDevicesResponse_H_
#define SWGNAPartnerDevicesResponse_H_

#include <QJsonObject>


#include <QString>
#include <QList>
#include "SWGNAResponse.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAPartnerDevicesResponse: public SWGObject {
public:
    SWGNAPartnerDevicesResponse();
    SWGNAPartnerDevicesResponse(QString* json);
    virtual ~SWGNAPartnerDevicesResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAPartnerDevicesResponse* fromJson(QString &jsonString);

    QList<QString*>* getBody();
    void setBody(QList<QString*>* body);
    

private:
    QList<QString*>* body;
    
};

} /* namespace Swagger */

#endif /* SWGNAPartnerDevicesResponse_H_ */
