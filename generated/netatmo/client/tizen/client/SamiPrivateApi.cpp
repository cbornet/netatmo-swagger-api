#include "SamiPrivateApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiPrivateApi::SamiPrivateApi() {

}

SamiPrivateApi::~SamiPrivateApi() {

}

void
createnewscheduleProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNANewScheduleResponse* out = new SamiNANewScheduleResponse();
    jsonToValue(out, pJson, L"SamiNANewScheduleResponse*", L"SamiNANewScheduleResponse");

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

SamiNANewScheduleResponse* 
SamiPrivateApi::createnewscheduleWithCompletion(String* deviceId, String* moduleId, SamiNAThermProgram* thermProgram, void (* success)(SamiNANewScheduleResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createnewscheduleProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("module_id"), moduleId);
  
  

  String* mBody = null;

  
  
  
  if(thermProgram != null) {
    mBody = new String(thermProgram->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/createnewschedule");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
devicelistProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNADeviceListResponse* out = new SamiNADeviceListResponse();
    jsonToValue(out, pJson, L"SamiNADeviceListResponse*", L"SamiNADeviceListResponse");

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

SamiNADeviceListResponse* 
SamiPrivateApi::devicelistWithCompletion(String* appType, String* deviceId, Boolean* getFavorites, void (* success)(SamiNADeviceListResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&devicelistProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("app_type"), appType);
  
  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("get_favorites"), getFavorites);
  
  

  String* mBody = null;

  

  String url(L"/devicelist");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
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
SamiPrivateApi::getmeasureWithCompletion(String* deviceId, String* scale, String* type, String* moduleId, Integer* dateBegin, Integer* dateEnd, Integer* limit, Boolean* optimize, Boolean* realTime, void (* success)(SamiNAMeasureResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getmeasureProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("module_id"), moduleId);
  
  
    queryParams->Add(new String("scale"), scale);
  
  
    queryParams->Add(new String("type"), type);
  
  
    queryParams->Add(new String("date_begin"), dateBegin);
  
  
    queryParams->Add(new String("date_end"), dateEnd);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("optimize"), optimize);
  
  
    queryParams->Add(new String("real_time"), realTime);
  
  

  String* mBody = null;

  

  String url(L"/getmeasure");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getthermstateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNAThermStateResponse* out = new SamiNAThermStateResponse();
    jsonToValue(out, pJson, L"SamiNAThermStateResponse*", L"SamiNAThermStateResponse");

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

SamiNAThermStateResponse* 
SamiPrivateApi::getthermstateWithCompletion(String* deviceId, String* moduleId, void (* success)(SamiNAThermStateResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getthermstateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("module_id"), moduleId);
  
  

  String* mBody = null;

  

  String url(L"/getthermstate");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getuserProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNAUserResponse* out = new SamiNAUserResponse();
    jsonToValue(out, pJson, L"SamiNAUserResponse*", L"SamiNAUserResponse");

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

SamiNAUserResponse* 
SamiPrivateApi::getuserWithCompletion( void (* success)(SamiNAUserResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getuserProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/getuser");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
setthermpointProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNAOkResponse* out = new SamiNAOkResponse();
    jsonToValue(out, pJson, L"SamiNAOkResponse*", L"SamiNAOkResponse");

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

SamiNAOkResponse* 
SamiPrivateApi::setthermpointWithCompletion(String* deviceId, String* moduleId, String* setpointMode, Integer* setpointEndtime, Float* setpointTemp, void (* success)(SamiNAOkResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&setthermpointProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("module_id"), moduleId);
  
  
    queryParams->Add(new String("setpoint_mode"), setpointMode);
  
  
    queryParams->Add(new String("setpoint_endtime"), setpointEndtime);
  
  
    queryParams->Add(new String("setpoint_temp"), setpointTemp);
  
  

  String* mBody = null;

  

  String url(L"/setthermpoint");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
switchscheduleProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNAOkResponse* out = new SamiNAOkResponse();
    jsonToValue(out, pJson, L"SamiNAOkResponse*", L"SamiNAOkResponse");

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

SamiNAOkResponse* 
SamiPrivateApi::switchscheduleWithCompletion(String* deviceId, String* moduleId, String* scheduleId, void (* success)(SamiNAOkResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&switchscheduleProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("module_id"), moduleId);
  
  
    queryParams->Add(new String("schedule_id"), scheduleId);
  
  

  String* mBody = null;

  

  String url(L"/switchschedule");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
syncscheduleProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiNAOkResponse* out = new SamiNAOkResponse();
    jsonToValue(out, pJson, L"SamiNAOkResponse*", L"SamiNAOkResponse");

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

SamiNAOkResponse* 
SamiPrivateApi::syncscheduleWithCompletion(String* deviceId, String* moduleId, SamiNAThermProgram* thermProgram, void (* success)(SamiNAOkResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&syncscheduleProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("device_id"), deviceId);
  
  
    queryParams->Add(new String("module_id"), moduleId);
  
  

  String* mBody = null;

  
  
  
  if(thermProgram != null) {
    mBody = new String(thermProgram->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/syncschedule");

  

  client->execute(SamiPrivateApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
