/*
 * SWGNAObject.h
 * 
 * 
 */

#ifndef SWGNAObject_H_
#define SWGNAObject_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNAObject: public SWGObject {
public:
    SWGNAObject();
    SWGNAObject(QString* json);
    virtual ~SWGNAObject();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAObject* fromJson(QString &jsonString);

    QString* get$Id();
    void set$Id(QString* $id);
    

private:
    QString* $id;
    
};

} /* namespace Swagger */

#endif /* SWGNAObject_H_ */
