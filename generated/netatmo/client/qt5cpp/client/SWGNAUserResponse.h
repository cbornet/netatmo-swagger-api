/*
 * SWGNAUserResponse.h
 * 
 * 
 */

#ifndef SWGNAUserResponse_H_
#define SWGNAUserResponse_H_

#include <QJsonObject>


#include "SWGNAUserBody.h"
#include "SWGNAResponse.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAUserResponse: public SWGObject {
public:
    SWGNAUserResponse();
    SWGNAUserResponse(QString* json);
    virtual ~SWGNAUserResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAUserResponse* fromJson(QString &jsonString);

    SWGNAUserBody* getBody();
    void setBody(SWGNAUserBody* body);
    

private:
    SWGNAUserBody* body;
    
};

} /* namespace Swagger */

#endif /* SWGNAUserResponse_H_ */
