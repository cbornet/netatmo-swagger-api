/*
 * SWGNAMeasureBodyElem.h
 * 
 * 
 */

#ifndef SWGNAMeasureBodyElem_H_
#define SWGNAMeasureBodyElem_H_

#include <QJsonObject>


#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGNAMeasureBodyElem: public SWGObject {
public:
    SWGNAMeasureBodyElem();
    SWGNAMeasureBodyElem(QString* json);
    virtual ~SWGNAMeasureBodyElem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAMeasureBodyElem* fromJson(QString &jsonString);

    qint32 getBegTime();
    void setBegTime(qint32 beg_time);
    qint32 getStepTime();
    void setStepTime(qint32 step_time);
    QList<QList<float*>*>* getValue();
    void setValue(QList<QList<float*>*>* value);
    

private:
    qint32 beg_time;
    qint32 step_time;
    QList<QList<float*>*>* value;
    
};

} /* namespace Swagger */

#endif /* SWGNAMeasureBodyElem_H_ */
