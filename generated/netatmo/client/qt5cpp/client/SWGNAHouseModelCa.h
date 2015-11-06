/*
 * SWGNAHouseModelCa.h
 * 
 * 
 */

#ifndef SWGNAHouseModelCa_H_
#define SWGNAHouseModelCa_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNAHouseModelCa: public SWGObject {
public:
    SWGNAHouseModelCa();
    SWGNAHouseModelCa(QString* json);
    virtual ~SWGNAHouseModelCa();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAHouseModelCa* fromJson(QString &jsonString);

    double* getTe();
    void setTe(double* te);
    qint32 getTi();
    void setTi(qint32 ti);
    QString* getSo();
    void setSo(QString* so);
    

private:
    double* te;
    qint32 ti;
    QString* so;
    
};

} /* namespace Swagger */

#endif /* SWGNAHouseModelCa_H_ */
