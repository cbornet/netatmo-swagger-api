/*
 * SWGNADate.h
 * 
 * 
 */

#ifndef SWGNADate_H_
#define SWGNADate_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGNADate: public SWGObject {
public:
    SWGNADate();
    SWGNADate(QString* json);
    virtual ~SWGNADate();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNADate* fromJson(QString &jsonString);

    qint32 getSec();
    void setSec(qint32 sec);
    qint32 getUsec();
    void setUsec(qint32 usec);
    

private:
    qint32 sec;
    qint32 usec;
    
};

} /* namespace Swagger */

#endif /* SWGNADate_H_ */
