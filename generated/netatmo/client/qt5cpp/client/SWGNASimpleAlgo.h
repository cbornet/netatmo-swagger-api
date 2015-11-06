/*
 * SWGNASimpleAlgo.h
 * 
 * 
 */

#ifndef SWGNASimpleAlgo_H_
#define SWGNASimpleAlgo_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGNASimpleAlgo: public SWGObject {
public:
    SWGNASimpleAlgo();
    SWGNASimpleAlgo(QString* json);
    virtual ~SWGNASimpleAlgo();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNASimpleAlgo* fromJson(QString &jsonString);

    qint32 getHighDeadband();
    void setHighDeadband(qint32 high_deadband);
    

private:
    qint32 high_deadband;
    
};

} /* namespace Swagger */

#endif /* SWGNASimpleAlgo_H_ */
