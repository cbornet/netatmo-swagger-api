/*
 * SWGNATimeTableItem.h
 * 
 * 
 */

#ifndef SWGNATimeTableItem_H_
#define SWGNATimeTableItem_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGNATimeTableItem: public SWGObject {
public:
    SWGNATimeTableItem();
    SWGNATimeTableItem(QString* json);
    virtual ~SWGNATimeTableItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNATimeTableItem* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getMOffset();
    void setMOffset(qint32 m_offset);
    

private:
    qint32 id;
    qint32 m_offset;
    
};

} /* namespace Swagger */

#endif /* SWGNATimeTableItem_H_ */
