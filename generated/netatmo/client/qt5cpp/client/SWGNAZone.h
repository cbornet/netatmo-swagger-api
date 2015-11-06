/*
 * SWGNAZone.h
 * 
 * 
 */

#ifndef SWGNAZone_H_
#define SWGNAZone_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNAZone: public SWGObject {
public:
    SWGNAZone();
    SWGNAZone(QString* json);
    virtual ~SWGNAZone();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAZone* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getType();
    void setType(qint32 type);
    QString* getName();
    void setName(QString* name);
    float* getTemp();
    void setTemp(float* temp);
    

private:
    qint32 id;
    qint32 type;
    QString* name;
    float* temp;
    
};

} /* namespace Swagger */

#endif /* SWGNAZone_H_ */
