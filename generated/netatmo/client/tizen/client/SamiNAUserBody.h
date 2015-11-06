/*
 * SamiNAUserBody.h
 * 
 * 
 */

#ifndef SamiNAUserBody_H_
#define SamiNAUserBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
#include "SamiNADate.h"
using Tizen::Base::String;
#include "SamiNAUserAdministrative.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAUserBody: public SamiObject {
public:
    SamiNAUserBody();
    SamiNAUserBody(String* json);
    virtual ~SamiNAUserBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAUserBody* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* p_id);
    
    SamiNAUserAdministrative* getPAdministrative();
    void setPAdministrative(SamiNAUserAdministrative* pAdministrative);
    
    SamiNADate* getPDateCreation();
    void setPDateCreation(SamiNADate* pDate_creation);
    
    IList* getPDevices();
    void setPDevices(IList* pDevices);
    
    IList* getPFriendDevices();
    void setPFriendDevices(IList* pFriend_devices);
    
    String* getPMail();
    void setPMail(String* pMail);
    
    Integer* getPTimelineNotRead();
    void setPTimelineNotRead(Integer* pTimeline_not_read);
    
    Integer* getPTimelineSize();
    void setPTimelineSize(Integer* pTimeline_size);
    

private:
    String* p_id;
    SamiNAUserAdministrative* pAdministrative;
    SamiNADate* pDate_creation;
    IList* pDevices;
    IList* pFriend_devices;
    String* pMail;
    Integer* pTimeline_not_read;
    Integer* pTimeline_size;
    
};

} /* namespace Swagger */

#endif /* SamiNAUserBody_H_ */
