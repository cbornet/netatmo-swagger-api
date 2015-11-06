/*
 * SWGNAPidAlgo.h
 * 
 * 
 */

#ifndef SWGNAPidAlgo_H_
#define SWGNAPidAlgo_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGNAPidAlgo: public SWGObject {
public:
    SWGNAPidAlgo();
    SWGNAPidAlgo(QString* json);
    virtual ~SWGNAPidAlgo();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAPidAlgo* fromJson(QString &jsonString);

    qint32 getGain();
    void setGain(qint32 gain);
    qint32 getPeriod();
    void setPeriod(qint32 period);
    qint32 getTd();
    void setTd(qint32 td);
    qint32 getTi();
    void setTi(qint32 ti);
    

private:
    qint32 gain;
    qint32 period;
    qint32 td;
    qint32 ti;
    
};

} /* namespace Swagger */

#endif /* SWGNAPidAlgo_H_ */
