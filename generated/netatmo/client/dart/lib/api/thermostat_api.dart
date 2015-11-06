part of api;


class ThermostatApi {
  String basePath = "https://api.netatmo.net/";
  ApiClient apiClient = ApiClient.defaultApiClient;

  ThermostatApi([ApiClient apiClient]) {
    if (apiClient != null) {
      this.apiClient = apiClient;
    }
  }

  
  /// 
  ///
  /// The method createnewschedule creates a new schedule stored in the backup list.
  Future<NANewScheduleResponse> createnewschedule(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram) {
    Object postBody = thermProgram;
    

    // create path and map variables
    String path = "/api/createnewschedule".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    if("null" != deviceId)
      queryParams["device_id"] = deviceId is List ? deviceId.join(',') : deviceId;
    if("null" != moduleId)
      queryParams["module_id"] = moduleId is List ? moduleId.join(',') : moduleId;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'POST', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NANewScheduleResponse);
      }
      else {
        return null;
      }
    });
  }
  
  /// 
  ///
  /// The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
  Future<NADeviceListResponse> devicelist(String accessToken, String appType, String deviceId, bool getFavorites) {
    Object postBody = null;
    

    // create path and map variables
    String path = "/api/devicelist".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    if("null" != appType)
      queryParams["app_type"] = appType is List ? appType.join(',') : appType;
    if("null" != deviceId)
      queryParams["device_id"] = deviceId is List ? deviceId.join(',') : deviceId;
    if("null" != getFavorites)
      queryParams["get_favorites"] = getFavorites is List ? getFavorites.join(',') : getFavorites;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'GET', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NADeviceListResponse);
      }
      else {
        return null;
      }
    });
  }
  
  /// 
  ///
  /// The method getmeasure returns the measurements of a device or a module.
  Future<NAMeasureResponse> getmeasure(String accessToken, String deviceId, String scale, List<String> type, String moduleId, int dateBegin, int dateEnd, int limit, bool optimize, bool realTime) {
    Object postBody = null;
    

    // create path and map variables
    String path = "/api/getmeasure".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    if("null" != deviceId)
      queryParams["device_id"] = deviceId is List ? deviceId.join(',') : deviceId;
    if("null" != moduleId)
      queryParams["module_id"] = moduleId is List ? moduleId.join(',') : moduleId;
    if("null" != scale)
      queryParams["scale"] = scale is List ? scale.join(',') : scale;
    if("null" != type)
      queryParams["type"] = type is List ? type.join(',') : type;
    if("null" != dateBegin)
      queryParams["date_begin"] = dateBegin is List ? dateBegin.join(',') : dateBegin;
    if("null" != dateEnd)
      queryParams["date_end"] = dateEnd is List ? dateEnd.join(',') : dateEnd;
    if("null" != limit)
      queryParams["limit"] = limit is List ? limit.join(',') : limit;
    if("null" != optimize)
      queryParams["optimize"] = optimize is List ? optimize.join(',') : optimize;
    if("null" != realTime)
      queryParams["real_time"] = realTime is List ? realTime.join(',') : realTime;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'GET', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NAMeasureResponse);
      }
      else {
        return null;
      }
    });
  }
  
  /// 
  ///
  /// The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
  Future<NAThermStateResponse> getthermstate(String accessToken, String deviceId, String moduleId) {
    Object postBody = null;
    

    // create path and map variables
    String path = "/api/getthermstate".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    if("null" != deviceId)
      queryParams["device_id"] = deviceId is List ? deviceId.join(',') : deviceId;
    if("null" != moduleId)
      queryParams["module_id"] = moduleId is List ? moduleId.join(',') : moduleId;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'GET', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NAThermStateResponse);
      }
      else {
        return null;
      }
    });
  }
  
  /// 
  ///
  /// The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
  Future<NAUserResponse> getuser(String accessToken) {
    Object postBody = null;
    

    // create path and map variables
    String path = "/api/getuser".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'GET', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NAUserResponse);
      }
      else {
        return null;
      }
    });
  }
  
  /// 
  ///
  /// The method setthermpoint changes the Thermostat manual temperature setpoint.
  Future<NAOkResponse> setthermpoint(String accessToken, String deviceId, String moduleId, String setpointMode, int setpointEndtime, num setpointTemp) {
    Object postBody = null;
    

    // create path and map variables
    String path = "/api/setthermpoint".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    if("null" != deviceId)
      queryParams["device_id"] = deviceId is List ? deviceId.join(',') : deviceId;
    if("null" != moduleId)
      queryParams["module_id"] = moduleId is List ? moduleId.join(',') : moduleId;
    if("null" != setpointMode)
      queryParams["setpoint_mode"] = setpointMode is List ? setpointMode.join(',') : setpointMode;
    if("null" != setpointEndtime)
      queryParams["setpoint_endtime"] = setpointEndtime is List ? setpointEndtime.join(',') : setpointEndtime;
    if("null" != setpointTemp)
      queryParams["setpoint_temp"] = setpointTemp is List ? setpointTemp.join(',') : setpointTemp;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'POST', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NAOkResponse);
      }
      else {
        return null;
      }
    });
  }
  
  /// 
  ///
  /// The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
  Future<NAOkResponse> switchschedule(String accessToken, String deviceId, String moduleId, String scheduleId) {
    Object postBody = null;
    

    // create path and map variables
    String path = "/api/switchschedule".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    if("null" != deviceId)
      queryParams["device_id"] = deviceId is List ? deviceId.join(',') : deviceId;
    if("null" != moduleId)
      queryParams["module_id"] = moduleId is List ? moduleId.join(',') : moduleId;
    if("null" != scheduleId)
      queryParams["schedule_id"] = scheduleId is List ? scheduleId.join(',') : scheduleId;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'POST', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NAOkResponse);
      }
      else {
        return null;
      }
    });
  }
  
  /// 
  ///
  /// The method syncschedule changes the Thermostat weekly schedule.
  Future<NAOkResponse> syncschedule(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram) {
    Object postBody = thermProgram;
    

    // create path and map variables
    String path = "/api/syncschedule".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if("null" != accessToken)
      queryParams["access_token"] = accessToken is List ? accessToken.join(',') : accessToken;
    if("null" != deviceId)
      queryParams["device_id"] = deviceId is List ? deviceId.join(',') : deviceId;
    if("null" != moduleId)
      queryParams["module_id"] = moduleId is List ? moduleId.join(',') : moduleId;
    
    

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if(hasFields)
        postBody = mp;
    }
    else {
      
    }

    return apiClient.invokeAPI(basePath, path, 'POST', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, NAOkResponse);
      }
      else {
        return null;
      }
    });
  }
  
}
