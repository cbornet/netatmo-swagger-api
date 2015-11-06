#include "SamiPublicApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiPublicApi::SamiPublicApi() {

}

SamiPublicApi::~SamiPublicApi() {

}

void
getmeasureProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNAMeasureResponse* out = new SamiNAMeasureResponse();
    jsonToValue(out, pJson, L"SamiNAMeasureResponse*", L"SamiNAMeasureResponse");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiNAMeasureResponse* 
SamiPublicApi::getmeasureWithCompletion(String* accessToken, String* deviceId, String* scale, IList* type, String* moduleId, Integer* dateBegin, Integer* dateEnd, Integer* limit, Boolean* optimize, Boolean* realTime, void (* success)(SamiNAMeasureResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getmeasureProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);
  
  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("module_id"), moduleId);
  
  
    queryParams->Add(new String("scale"), scale);
  
  
  int sz = type->GetCount();
  for(int i = 0; i < sz; i++) {
    String itemAt = stringify(type->GetAt(i), "String*");
    queryParams->Add(new String("type"), new String(itemAt));
  }
  
  
    queryParams->Add(new String("date_begin"), dateBegin);
  
  
    queryParams->Add(new String("date_end"), dateEnd);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("optimize"), optimize);
  
  
    queryParams->Add(new String("real_time"), realTime);
  
  

  String* mBody = null;

  

  String url(L"/api/getmeasure");

  

  client->execute(SamiPublicApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
