/*
 * SWGAccessToken.h
 * 
 * 
 */

#ifndef SWGAccessToken_H_
#define SWGAccessToken_H_

#include <QJsonObject>


#include <QString>
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGAccessToken: public SWGObject {
public:
    SWGAccessToken();
    SWGAccessToken(QString* json);
    virtual ~SWGAccessToken();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAccessToken* fromJson(QString &jsonString);

    QString* getAccessToken();
    void setAccessToken(QString* access_token);
    QString* getRefreshToken();
    void setRefreshToken(QString* refresh_token);
    qint32 getExpireIn();
    void setExpireIn(qint32 expire_in);
    qint32 getExpiresIn();
    void setExpiresIn(qint32 expires_in);
    QList<QString*>* getScope();
    void setScope(QList<QString*>* scope);
    

private:
    QString* access_token;
    QString* refresh_token;
    qint32 expire_in;
    qint32 expires_in;
    QList<QString*>* scope;
    
};

} /* namespace Swagger */

#endif /* SWGAccessToken_H_ */
