package io.swagger.client.api;

import io.swagger.client.ApiCallback;
import io.swagger.client.ApiClient;
import io.swagger.client.ApiException;
import io.swagger.client.Configuration;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import com.google.gson.reflect.TypeToken;

import com.squareup.okhttp.Call;

import java.lang.reflect.Type;

import java.util.*;

import io.swagger.client.model.NANewScheduleResponse;
import io.swagger.client.model.NAThermProgram;
import io.swagger.client.model.NADeviceListResponse;
import io.swagger.client.model.NAMeasureResponse;
import io.swagger.client.model.NAThermStateResponse;
import io.swagger.client.model.NAUserResponse;
import io.swagger.client.model.NAOkResponse;

import java.io.File;
import java.util.Map;
import java.util.HashMap;

public class ThermostatApi {
  private ApiClient apiClient;

  public ThermostatApi() {
    this(Configuration.getDefaultApiClient());
  }

  public ThermostatApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /* Build call for createnewschedule */
  private Call createnewscheduleCall(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram) throws ApiException {
    Object postBody = thermProgram;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling createnewschedule(Async)");
    }
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
       throw new ApiException("Missing the required parameter 'deviceId' when calling createnewschedule(Async)");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
       throw new ApiException("Missing the required parameter 'moduleId' when calling createnewschedule(Async)");
    }
    
    // verify the required parameter 'thermProgram' is set
    if (thermProgram == null) {
       throw new ApiException("Missing the required parameter 'thermProgram' when calling createnewschedule(Async)");
    }
    

    // create path and map variables
    String path = "/api/createnewschedule".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));
    if (deviceId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    if (moduleId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "POST", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method createnewschedule creates a new schedule stored in the backup list.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones and timetable)
   * @return NANewScheduleResponse
   */
  public NANewScheduleResponse createnewschedule(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram) throws ApiException {
    Call call = createnewscheduleCall(accessToken, deviceId, moduleId, thermProgram);
    Type returnType = new TypeToken<NANewScheduleResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method createnewschedule creates a new schedule stored in the backup list.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones and timetable)
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call createnewscheduleAsync(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram, ApiCallback<NANewScheduleResponse> callback) throws ApiException {
    Call call = createnewscheduleCall(accessToken, deviceId, moduleId, thermProgram);
    Type returnType = new TypeToken<NANewScheduleResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
  /* Build call for devicelist */
  private Call devicelistCall(String accessToken, String appType, String deviceId, Boolean getFavorites) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling devicelist(Async)");
    }
    

    // create path and map variables
    String path = "/api/devicelist".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));
    if (appType != null)
      queryParams.addAll(apiClient.parameterToPairs("", "app_type", appType));
    if (deviceId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    if (getFavorites != null)
      queryParams.addAll(apiClient.parameterToPairs("", "get_favorites", getFavorites));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "GET", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
   * @param accessToken Your access token
   * @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
   * @param deviceId Specify a device_id if you want to retrieve only this device informations.
   * @param getFavorites When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
   * @return NADeviceListResponse
   */
  public NADeviceListResponse devicelist(String accessToken, String appType, String deviceId, Boolean getFavorites) throws ApiException {
    Call call = devicelistCall(accessToken, appType, deviceId, getFavorites);
    Type returnType = new TypeToken<NADeviceListResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
   * @param accessToken Your access token
   * @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
   * @param deviceId Specify a device_id if you want to retrieve only this device informations.
   * @param getFavorites When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call devicelistAsync(String accessToken, String appType, String deviceId, Boolean getFavorites, ApiCallback<NADeviceListResponse> callback) throws ApiException {
    Call call = devicelistCall(accessToken, appType, deviceId, getFavorites);
    Type returnType = new TypeToken<NADeviceListResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
  /* Build call for getmeasure */
  private Call getmeasureCall(String accessToken, String deviceId, String scale, List<String> type, String moduleId, Integer dateBegin, Integer dateEnd, Integer limit, Boolean optimize, Boolean realTime) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling getmeasure(Async)");
    }
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
       throw new ApiException("Missing the required parameter 'deviceId' when calling getmeasure(Async)");
    }
    
    // verify the required parameter 'scale' is set
    if (scale == null) {
       throw new ApiException("Missing the required parameter 'scale' when calling getmeasure(Async)");
    }
    
    // verify the required parameter 'type' is set
    if (type == null) {
       throw new ApiException("Missing the required parameter 'type' when calling getmeasure(Async)");
    }
    

    // create path and map variables
    String path = "/api/getmeasure".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));
    if (deviceId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    if (moduleId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    if (scale != null)
      queryParams.addAll(apiClient.parameterToPairs("", "scale", scale));
    if (type != null)
      queryParams.addAll(apiClient.parameterToPairs("csv", "type", type));
    if (dateBegin != null)
      queryParams.addAll(apiClient.parameterToPairs("", "date_begin", dateBegin));
    if (dateEnd != null)
      queryParams.addAll(apiClient.parameterToPairs("", "date_end", dateEnd));
    if (limit != null)
      queryParams.addAll(apiClient.parameterToPairs("", "limit", limit));
    if (optimize != null)
      queryParams.addAll(apiClient.parameterToPairs("", "optimize", optimize));
    if (realTime != null)
      queryParams.addAll(apiClient.parameterToPairs("", "real_time", realTime));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "GET", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method getmeasure returns the measurements of a device or a module.
   * @param accessToken Your access token
   * @param deviceId Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
   * @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
   * @param type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).
   * @param moduleId If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
   * @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
   * @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
   * @param limit Limits the number of measurements returned (default &amp; max is 1024)
   * @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
   * @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
   * @return NAMeasureResponse
   */
  public NAMeasureResponse getmeasure(String accessToken, String deviceId, String scale, List<String> type, String moduleId, Integer dateBegin, Integer dateEnd, Integer limit, Boolean optimize, Boolean realTime) throws ApiException {
    Call call = getmeasureCall(accessToken, deviceId, scale, type, moduleId, dateBegin, dateEnd, limit, optimize, realTime);
    Type returnType = new TypeToken<NAMeasureResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method getmeasure returns the measurements of a device or a module.
   * @param accessToken Your access token
   * @param deviceId Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
   * @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
   * @param type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).
   * @param moduleId If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
   * @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
   * @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
   * @param limit Limits the number of measurements returned (default &amp; max is 1024)
   * @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
   * @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call getmeasureAsync(String accessToken, String deviceId, String scale, List<String> type, String moduleId, Integer dateBegin, Integer dateEnd, Integer limit, Boolean optimize, Boolean realTime, ApiCallback<NAMeasureResponse> callback) throws ApiException {
    Call call = getmeasureCall(accessToken, deviceId, scale, type, moduleId, dateBegin, dateEnd, limit, optimize, realTime);
    Type returnType = new TypeToken<NAMeasureResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
  /* Build call for getthermstate */
  private Call getthermstateCall(String accessToken, String deviceId, String moduleId) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling getthermstate(Async)");
    }
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
       throw new ApiException("Missing the required parameter 'deviceId' when calling getthermstate(Async)");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
       throw new ApiException("Missing the required parameter 'moduleId' when calling getthermstate(Async)");
    }
    

    // create path and map variables
    String path = "/api/getthermstate".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));
    if (deviceId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    if (moduleId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "GET", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @return NAThermStateResponse
   */
  public NAThermStateResponse getthermstate(String accessToken, String deviceId, String moduleId) throws ApiException {
    Call call = getthermstateCall(accessToken, deviceId, moduleId);
    Type returnType = new TypeToken<NAThermStateResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call getthermstateAsync(String accessToken, String deviceId, String moduleId, ApiCallback<NAThermStateResponse> callback) throws ApiException {
    Call call = getthermstateCall(accessToken, deviceId, moduleId);
    Type returnType = new TypeToken<NAThermStateResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
  /* Build call for getuser */
  private Call getuserCall(String accessToken) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling getuser(Async)");
    }
    

    // create path and map variables
    String path = "/api/getuser".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "GET", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
   * @param accessToken Your access token
   * @return NAUserResponse
   */
  public NAUserResponse getuser(String accessToken) throws ApiException {
    Call call = getuserCall(accessToken);
    Type returnType = new TypeToken<NAUserResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
   * @param accessToken Your access token
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call getuserAsync(String accessToken, ApiCallback<NAUserResponse> callback) throws ApiException {
    Call call = getuserCall(accessToken);
    Type returnType = new TypeToken<NAUserResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
  /* Build call for setthermpoint */
  private Call setthermpointCall(String accessToken, String deviceId, String moduleId, String setpointMode, Integer setpointEndtime, Float setpointTemp) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling setthermpoint(Async)");
    }
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
       throw new ApiException("Missing the required parameter 'deviceId' when calling setthermpoint(Async)");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
       throw new ApiException("Missing the required parameter 'moduleId' when calling setthermpoint(Async)");
    }
    
    // verify the required parameter 'setpointMode' is set
    if (setpointMode == null) {
       throw new ApiException("Missing the required parameter 'setpointMode' when calling setthermpoint(Async)");
    }
    

    // create path and map variables
    String path = "/api/setthermpoint".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));
    if (deviceId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    if (moduleId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    if (setpointMode != null)
      queryParams.addAll(apiClient.parameterToPairs("", "setpoint_mode", setpointMode));
    if (setpointEndtime != null)
      queryParams.addAll(apiClient.parameterToPairs("", "setpoint_endtime", setpointEndtime));
    if (setpointTemp != null)
      queryParams.addAll(apiClient.parameterToPairs("", "setpoint_temp", setpointTemp));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "POST", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method setthermpoint changes the Thermostat manual temperature setpoint.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param setpointMode Chosen setpoint_mode
   * @param setpointEndtime When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.
   * @param setpointTemp When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.
   * @return NAOkResponse
   */
  public NAOkResponse setthermpoint(String accessToken, String deviceId, String moduleId, String setpointMode, Integer setpointEndtime, Float setpointTemp) throws ApiException {
    Call call = setthermpointCall(accessToken, deviceId, moduleId, setpointMode, setpointEndtime, setpointTemp);
    Type returnType = new TypeToken<NAOkResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method setthermpoint changes the Thermostat manual temperature setpoint.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param setpointMode Chosen setpoint_mode
   * @param setpointEndtime When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.
   * @param setpointTemp When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call setthermpointAsync(String accessToken, String deviceId, String moduleId, String setpointMode, Integer setpointEndtime, Float setpointTemp, ApiCallback<NAOkResponse> callback) throws ApiException {
    Call call = setthermpointCall(accessToken, deviceId, moduleId, setpointMode, setpointEndtime, setpointTemp);
    Type returnType = new TypeToken<NAOkResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
  /* Build call for switchschedule */
  private Call switchscheduleCall(String accessToken, String deviceId, String moduleId, String scheduleId) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling switchschedule(Async)");
    }
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
       throw new ApiException("Missing the required parameter 'deviceId' when calling switchschedule(Async)");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
       throw new ApiException("Missing the required parameter 'moduleId' when calling switchschedule(Async)");
    }
    
    // verify the required parameter 'scheduleId' is set
    if (scheduleId == null) {
       throw new ApiException("Missing the required parameter 'scheduleId' when calling switchschedule(Async)");
    }
    

    // create path and map variables
    String path = "/api/switchschedule".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));
    if (deviceId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    if (moduleId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    if (scheduleId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "schedule_id", scheduleId));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "POST", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param scheduleId The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.
   * @return NAOkResponse
   */
  public NAOkResponse switchschedule(String accessToken, String deviceId, String moduleId, String scheduleId) throws ApiException {
    Call call = switchscheduleCall(accessToken, deviceId, moduleId, scheduleId);
    Type returnType = new TypeToken<NAOkResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param scheduleId The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call switchscheduleAsync(String accessToken, String deviceId, String moduleId, String scheduleId, ApiCallback<NAOkResponse> callback) throws ApiException {
    Call call = switchscheduleCall(accessToken, deviceId, moduleId, scheduleId);
    Type returnType = new TypeToken<NAOkResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
  /* Build call for syncschedule */
  private Call syncscheduleCall(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram) throws ApiException {
    Object postBody = thermProgram;
    
    // verify the required parameter 'accessToken' is set
    if (accessToken == null) {
       throw new ApiException("Missing the required parameter 'accessToken' when calling syncschedule(Async)");
    }
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
       throw new ApiException("Missing the required parameter 'deviceId' when calling syncschedule(Async)");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
       throw new ApiException("Missing the required parameter 'moduleId' when calling syncschedule(Async)");
    }
    
    // verify the required parameter 'thermProgram' is set
    if (thermProgram == null) {
       throw new ApiException("Missing the required parameter 'thermProgram' when calling syncschedule(Async)");
    }
    

    // create path and map variables
    String path = "/api/syncschedule".replaceAll("\\{format\\}","json");

    List<Pair> queryParams = new ArrayList<Pair>();
    if (accessToken != null)
      queryParams.addAll(apiClient.parameterToPairs("", "access_token", accessToken));
    if (deviceId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    if (moduleId != null)
      queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));

    Map<String, String> headerParams = new HashMap<String, String>();

    Map<String, Object> formParams = new HashMap<String, Object>();

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);
    if (accept != null) headerParams.put("Accept", accept);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);
    headerParams.put("Content-Type", contentType);

    String[] authNames = new String[] {  };
    return apiClient.buildCall(path, "POST", queryParams, postBody, headerParams, formParams, authNames);
  }

  /**
   * 
   * The method syncschedule changes the Thermostat weekly schedule.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones, timetable and name)
   * @return NAOkResponse
   */
  public NAOkResponse syncschedule(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram) throws ApiException {
    Call call = syncscheduleCall(accessToken, deviceId, moduleId, thermProgram);
    Type returnType = new TypeToken<NAOkResponse>(){}.getType();
    return apiClient.execute(call, returnType);
  }

  /**
   *  (asynchronously)
   * The method syncschedule changes the Thermostat weekly schedule.
   * @param accessToken Your access token
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones, timetable and name)
   * @param callback The callback to be executed when the API call finishes
   * @return The request call
   */
  public Call syncscheduleAsync(String accessToken, String deviceId, String moduleId, NAThermProgram thermProgram, ApiCallback<NAOkResponse> callback) throws ApiException {
    Call call = syncscheduleCall(accessToken, deviceId, moduleId, thermProgram);
    Type returnType = new TypeToken<NAOkResponse>(){}.getType();
    apiClient.executeAsync(call, returnType, callback);
    return call;
  }
  
}
