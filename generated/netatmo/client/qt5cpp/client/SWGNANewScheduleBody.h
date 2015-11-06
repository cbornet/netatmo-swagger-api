/*
 * SWGNANewScheduleBody.h
 * 
 * 
 */

#ifndef SWGNANewScheduleBody_H_
#define SWGNANewScheduleBody_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNANewScheduleBody: public SWGObject {
public:
    SWGNANewScheduleBody();
    SWGNANewScheduleBody(QString* json);
    virtual ~SWGNANewScheduleBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNANewScheduleBody* fromJson(QString &jsonString);

    QString* getScheduleId();
    void setScheduleId(QString* schedule_id);
    

private:
    QString* schedule_id;
    
};

} /* namespace Swagger */

#endif /* SWGNANewScheduleBody_H_ */
