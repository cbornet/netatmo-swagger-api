/*
 * SWGNAThermStateResponse.h
 * 
 * 
 */

#ifndef SWGNAThermStateResponse_H_
#define SWGNAThermStateResponse_H_

#include <QJsonObject>


#include "SWGNAThermStateBody.h"
#include "SWGNAResponse.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAThermStateResponse: public SWGObject {
public:
    SWGNAThermStateResponse();
    SWGNAThermStateResponse(QString* json);
    virtual ~SWGNAThermStateResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAThermStateResponse* fromJson(QString &jsonString);

    SWGNAThermStateBody* getBody();
    void setBody(SWGNAThermStateBody* body);
    

private:
    SWGNAThermStateBody* body;
    
};

} /* namespace Swagger */

#endif /* SWGNAThermStateResponse_H_ */
