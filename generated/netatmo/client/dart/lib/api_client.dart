part of api;

class ApiClient {
  static ApiClient defaultApiClient = new ApiClient();

  Map<String, String> _defaultHeaderMap = {};
  Map<String, Authentication> _authentications = {};
  static final dson = new Dartson.JSON();
  final DateFormat _dateFormatter = new DateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ");

  ApiClient() {
    // Setup authentications (key: authentication name, value: authentication).
  }

  void addDefaultHeader(String key, String value) {
     _defaultHeaderMap[key] = value;
  }

  /// Format the given Date object into string.
  String formatDate(DateTime date) {
    return _dateFormatter.format(date);
  }

  /// Format the given parameter object into string.
  String parameterToString(Object param) {
    if (param == null) {
      return '';
    } else if (param is DateTime) {
      return formatDate(param);
    } else if (param is List) {
      return (param).join(',');
    } else {
      return param.toString();
    }
  }

  static dynamic deserialize(String json, dynamic clazz) {
    var result = json;

    try {
      var decodedJson = JSON.decode(json);

      if(decodedJson is List) {
        result = [];
        for(var obj in decodedJson) {
          result.add(_createEntity(obj, clazz));
        }
      } else {
        result = _createEntity(json, clazz);
      }
    } on FormatException {
      // Just return the passed in value
    }

    return result;
  }

  static dynamic _createEntity(dynamic json, dynamic clazz) {
    bool isMap = json is Map;

    switch(clazz) {
      
      
      case AccessToken:
        return isMap ? dson.map(json, new AccessToken()) : dson.decode(json, new AccessToken());
      
      
      
      case NAResponse:
        return isMap ? dson.map(json, new NAResponse()) : dson.decode(json, new NAResponse());
      
      
      
      case NAOkResponse:
        return isMap ? dson.map(json, new NAOkResponse()) : dson.decode(json, new NAOkResponse());
      
      
      
      case NAUserResponse:
        return isMap ? dson.map(json, new NAUserResponse()) : dson.decode(json, new NAUserResponse());
      
      
      
      case NADeviceListResponse:
        return isMap ? dson.map(json, new NADeviceListResponse()) : dson.decode(json, new NADeviceListResponse());
      
      
      
      case NAMeasureResponse:
        return isMap ? dson.map(json, new NAMeasureResponse()) : dson.decode(json, new NAMeasureResponse());
      
      
      
      case NAThermStateResponse:
        return isMap ? dson.map(json, new NAThermStateResponse()) : dson.decode(json, new NAThermStateResponse());
      
      
      
      case NANewScheduleResponse:
        return isMap ? dson.map(json, new NANewScheduleResponse()) : dson.decode(json, new NANewScheduleResponse());
      
      
      
      case NAPartnerDevicesResponse:
        return isMap ? dson.map(json, new NAPartnerDevicesResponse()) : dson.decode(json, new NAPartnerDevicesResponse());
      
      
      
      case NAUserBody:
        return isMap ? dson.map(json, new NAUserBody()) : dson.decode(json, new NAUserBody());
      
      
      
      case NADeviceListBody:
        return isMap ? dson.map(json, new NADeviceListBody()) : dson.decode(json, new NADeviceListBody());
      
      
      
      case NAMeasureBodyElem:
        return isMap ? dson.map(json, new NAMeasureBodyElem()) : dson.decode(json, new NAMeasureBodyElem());
      
      
      
      case NAThermStateBody:
        return isMap ? dson.map(json, new NAThermStateBody()) : dson.decode(json, new NAThermStateBody());
      
      
      
      case NANewScheduleBody:
        return isMap ? dson.map(json, new NANewScheduleBody()) : dson.decode(json, new NANewScheduleBody());
      
      
      
      case NAUserAdministrative:
        return isMap ? dson.map(json, new NAUserAdministrative()) : dson.decode(json, new NAUserAdministrative());
      
      
      
      case NADate:
        return isMap ? dson.map(json, new NADate()) : dson.decode(json, new NADate());
      
      
      
      case NADevice:
        return isMap ? dson.map(json, new NADevice()) : dson.decode(json, new NADevice());
      
      
      
      case NAModule:
        return isMap ? dson.map(json, new NAModule()) : dson.decode(json, new NAModule());
      
      
      
      case NAHouseModel:
        return isMap ? dson.map(json, new NAHouseModel()) : dson.decode(json, new NAHouseModel());
      
      
      
      case NAHouseModelCa:
        return isMap ? dson.map(json, new NAHouseModelCa()) : dson.decode(json, new NAHouseModelCa());
      
      
      
      case NAStation:
        return isMap ? dson.map(json, new NAStation()) : dson.decode(json, new NAStation());
      
      
      
      case NALinkStation:
        return isMap ? dson.map(json, new NALinkStation()) : dson.decode(json, new NALinkStation());
      
      
      
      case NAPidAlgo:
        return isMap ? dson.map(json, new NAPidAlgo()) : dson.decode(json, new NAPidAlgo());
      
      
      
      case NAPlace:
        return isMap ? dson.map(json, new NAPlace()) : dson.decode(json, new NAPlace());
      
      
      
      case NASetpoint:
        return isMap ? dson.map(json, new NASetpoint()) : dson.decode(json, new NASetpoint());
      
      
      
      case NAThermProgram:
        return isMap ? dson.map(json, new NAThermProgram()) : dson.decode(json, new NAThermProgram());
      
      
      
      case NAZone:
        return isMap ? dson.map(json, new NAZone()) : dson.decode(json, new NAZone());
      
      
      
      case NATimeTableItem:
        return isMap ? dson.map(json, new NATimeTableItem()) : dson.decode(json, new NATimeTableItem());
      
      
      
      case NAHeatingSystem:
        return isMap ? dson.map(json, new NAHeatingSystem()) : dson.decode(json, new NAHeatingSystem());
      
      
      
      case NASimpleAlgo:
        return isMap ? dson.map(json, new NASimpleAlgo()) : dson.decode(json, new NASimpleAlgo());
      
      
      
      case NADashboardData:
        return isMap ? dson.map(json, new NADashboardData()) : dson.decode(json, new NADashboardData());
      
      
      
      case NAThermMeasure:
        return isMap ? dson.map(json, new NAThermMeasure()) : dson.decode(json, new NAThermMeasure());
      
      
      
      case NAObject:
        return isMap ? dson.map(json, new NAObject()) : dson.decode(json, new NAObject());
      
      
      default:
        throw new ApiException(500, 'Could not find a suitable class for deserialization');
    }
  }

  static String serialize(Object obj) {
    String serialized = '';
    if (obj == null) {
      serialized = '';
    } else if (obj is String) {
      serialized = obj;
    } else {
      serialized = dson.encode(obj);
    }
    return serialized;
  }

  Future<Response> invokeAPI( String host, 
                              String path,
                              String method,
                              Map<String, String> queryParams,
                              Object body,
                              Map<String, String> headerParams,
                              Map<String, String> formParams,
                              String contentType,
                              List<String> authNames)  {

    updateParamsForAuth(authNames, queryParams, headerParams);

    var client = new BrowserClient();

    StringBuffer sb = new StringBuffer();
    
    for(String key in queryParams.keys) {
      String value = queryParams[key];
      if (value != null){
        if(sb.toString().length == 0) {
          sb.write("?");
        } else {
          sb.write("&");
        }
        sb.write(key);
        sb.write("=");
        sb.write(value);
      }
    }
    String querystring = sb.toString();

    String url = host + path + querystring;

    headerParams.addAll(_defaultHeaderMap);
    headerParams['Content-Type'] = contentType;

    var completer = new Completer();

    if(body is MultipartRequest) {
      var request = new MultipartRequest(method, Uri.parse(url));      
      request.fields.addAll(body.fields);
      request.files.addAll(body.files);
      request.headers.addAll(body.headers);
      request.headers.addAll(headerParams);
      client.send(request).then((response) => completer.complete(Response.fromStream(response)));
    } else {
      var msgBody = contentType == "application/x-www-form-urlencoded" ? formParams : serialize(body);
      switch(method) {
        case "GET":
          return client.get(url, headers: headerParams);
        case "POST":
          return client.post(url, headers: headerParams, body: msgBody);
        case "PUT":
          return client.put(url, headers: headerParams, body: msgBody);
        case "DELETE":
          return client.delete(url, headers: headerParams);
      }
    }

    return completer.future;
  }

  /// Update query and header parameters based on authentication settings.
  /// @param authNames The authentications to apply  
  void updateParamsForAuth(List<String> authNames, Map<String, String> queryParams, Map<String, String> headerParams) {
    authNames.forEach((authName) {
      Authentication auth = _authentications[authName];
      if (auth == null) throw new ArgumentError("Authentication undefined: " + authName);
      auth.applyToParams(queryParams, headerParams);
    });
  }

}
