/*
 * SWGNAUserBody.h
 * 
 * 
 */

#ifndef SWGNAUserBody_H_
#define SWGNAUserBody_H_

#include <QJsonObject>


#include <QString>
#include <QList>
#include "SWGNAUserAdministrative.h"
#include "SWGNADate.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAUserBody: public SWGObject {
public:
    SWGNAUserBody();
    SWGNAUserBody(QString* json);
    virtual ~SWGNAUserBody();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAUserBody* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* _id);
    SWGNAUserAdministrative* getAdministrative();
    void setAdministrative(SWGNAUserAdministrative* administrative);
    SWGNADate* getDateCreation();
    void setDateCreation(SWGNADate* date_creation);
    QList<QString*>* getDevices();
    void setDevices(QList<QString*>* devices);
    QList<QString*>* getFriendDevices();
    void setFriendDevices(QList<QString*>* friend_devices);
    QString* getMail();
    void setMail(QString* mail);
    qint32 getTimelineNotRead();
    void setTimelineNotRead(qint32 timeline_not_read);
    qint32 getTimelineSize();
    void setTimelineSize(qint32 timeline_size);
    

private:
    QString* _id;
    SWGNAUserAdministrative* administrative;
    SWGNADate* date_creation;
    QList<QString*>* devices;
    QList<QString*>* friend_devices;
    QString* mail;
    qint32 timeline_not_read;
    qint32 timeline_size;
    
};

} /* namespace Swagger */

#endif /* SWGNAUserBody_H_ */
