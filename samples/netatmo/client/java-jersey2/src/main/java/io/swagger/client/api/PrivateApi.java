package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiClient;
import io.swagger.client.Configuration;
import io.swagger.client.Pair;
import io.swagger.client.TypeRef;

import io.swagger.client.model.*;

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

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-02T15:58:42.808+02:00")
public class PrivateApi {
  private ApiClient apiClient;

  public PrivateApi() {
    this(Configuration.getDefaultApiClient());
  }

  public PrivateApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  
  /**
   * 
   * The method createnewschedule creates a new schedule stored in the backup list.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones and timetable)
   * @return NANewScheduleResponse
   */
  public NANewScheduleResponse createnewschedule (String deviceId, String moduleId, NAThermProgram thermProgram) throws ApiException {
    Object postBody = thermProgram;
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
      throw new ApiException(400, "Missing the required parameter 'deviceId' when calling createnewschedule");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
      throw new ApiException(400, "Missing the required parameter 'moduleId' when calling createnewschedule");
    }
    
    // verify the required parameter 'thermProgram' is set
    if (thermProgram == null) {
      throw new ApiException(400, "Missing the required parameter 'thermProgram' when calling createnewschedule");
    }
    
    // create path and map variables
    String path = "/createnewschedule".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    
    queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "code_oauth", "password_oauth" };

    
    TypeRef returnType = new TypeRef<NANewScheduleResponse>() {};
    return apiClient.invokeAPI(path, "POST", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
  /**
   * 
   * The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
   * @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
   * @param deviceId Specify a device_id if you want to retrieve only this device informations.
   * @param getFavorites When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
   * @return NADeviceListResponse
   */
  public NADeviceListResponse devicelist (String appType, String deviceId, Boolean getFavorites) throws ApiException {
    Object postBody = null;
    
    // create path and map variables
    String path = "/devicelist".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    
    queryParams.addAll(apiClient.parameterToPairs("", "app_type", appType));
    
    queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "get_favorites", getFavorites));
    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "code_oauth", "password_oauth" };

    
    TypeRef returnType = new TypeRef<NADeviceListResponse>() {};
    return apiClient.invokeAPI(path, "GET", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
  /**
   * 
   * The method getmeasure returns the measurements of a device or a module.
   * @param deviceId Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
   * @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
   * @param type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if module_id is a rain sensor)\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure, Noise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise, min_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n  Temperature: Celsius\n  Humidity: %\n  Co2: ppm\n  Pressure: mbar\n  Noise: db\n  Rain: mm\nFor Thermostat:\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  where\nTemperature: Celsius\n  Sp_Temperature (temperature setpoint): Celsius\n  BoilerOn: Duration, since the previous data point, during which the boiler has been on (in seconds)\n  BoilerOff : Duration, since the previous data point, during which the boiler has been off (in seconds).\n  sum_boiler_on: Total duration during which the boiler has been on, at a specific scale (in seconds).\n  sum_boiler_off: Total duration during which the boiler has been off, at a specific scale (in seconds).
   * @param moduleId If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
   * @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
   * @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
   * @param limit Limits the number of measurements returned (default &amp; max is 1024)
   * @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
   * @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
   * @return NAMeasureResponse
   */
  public NAMeasureResponse getmeasure (String deviceId, String scale, String type, String moduleId, Integer dateBegin, Integer dateEnd, Integer limit, Boolean optimize, Boolean realTime) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
      throw new ApiException(400, "Missing the required parameter 'deviceId' when calling getmeasure");
    }
    
    // verify the required parameter 'scale' is set
    if (scale == null) {
      throw new ApiException(400, "Missing the required parameter 'scale' when calling getmeasure");
    }
    
    // verify the required parameter 'type' is set
    if (type == null) {
      throw new ApiException(400, "Missing the required parameter 'type' when calling getmeasure");
    }
    
    // create path and map variables
    String path = "/getmeasure".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    
    queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "scale", scale));
    
    queryParams.addAll(apiClient.parameterToPairs("", "type", type));
    
    queryParams.addAll(apiClient.parameterToPairs("", "date_begin", dateBegin));
    
    queryParams.addAll(apiClient.parameterToPairs("", "date_end", dateEnd));
    
    queryParams.addAll(apiClient.parameterToPairs("", "limit", limit));
    
    queryParams.addAll(apiClient.parameterToPairs("", "optimize", optimize));
    
    queryParams.addAll(apiClient.parameterToPairs("", "real_time", realTime));
    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "code_oauth", "password_oauth" };

    
    TypeRef returnType = new TypeRef<NAMeasureResponse>() {};
    return apiClient.invokeAPI(path, "GET", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
  /**
   * 
   * The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @return NAThermStateResponse
   */
  public NAThermStateResponse getthermstate (String deviceId, String moduleId) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
      throw new ApiException(400, "Missing the required parameter 'deviceId' when calling getthermstate");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
      throw new ApiException(400, "Missing the required parameter 'moduleId' when calling getthermstate");
    }
    
    // create path and map variables
    String path = "/getthermstate".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    
    queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "code_oauth", "password_oauth" };

    
    TypeRef returnType = new TypeRef<NAThermStateResponse>() {};
    return apiClient.invokeAPI(path, "GET", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
  /**
   * 
   * The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
   * @return NAUserResponse
   */
  public NAUserResponse getuser () throws ApiException {
    Object postBody = null;
    
    // create path and map variables
    String path = "/getuser".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "password_oauth" };

    
    TypeRef returnType = new TypeRef<NAUserResponse>() {};
    return apiClient.invokeAPI(path, "GET", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
  /**
   * 
   * The method setthermpoint changes the Thermostat manual temperature setpoint.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param setpointMode Chosen setpoint_mode
   * @param setpointEndtime When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.
   * @param setpointTemp When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.
   * @return NAOkResponse
   */
  public NAOkResponse setthermpoint (String deviceId, String moduleId, String setpointMode, Integer setpointEndtime, Float setpointTemp) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
      throw new ApiException(400, "Missing the required parameter 'deviceId' when calling setthermpoint");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
      throw new ApiException(400, "Missing the required parameter 'moduleId' when calling setthermpoint");
    }
    
    // verify the required parameter 'setpointMode' is set
    if (setpointMode == null) {
      throw new ApiException(400, "Missing the required parameter 'setpointMode' when calling setthermpoint");
    }
    
    // create path and map variables
    String path = "/setthermpoint".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    
    queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "setpoint_mode", setpointMode));
    
    queryParams.addAll(apiClient.parameterToPairs("", "setpoint_endtime", setpointEndtime));
    
    queryParams.addAll(apiClient.parameterToPairs("", "setpoint_temp", setpointTemp));
    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "code_oauth", "password_oauth" };

    
    TypeRef returnType = new TypeRef<NAOkResponse>() {};
    return apiClient.invokeAPI(path, "POST", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
  /**
   * 
   * The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param scheduleId The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.
   * @return NAOkResponse
   */
  public NAOkResponse switchschedule (String deviceId, String moduleId, String scheduleId) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
      throw new ApiException(400, "Missing the required parameter 'deviceId' when calling switchschedule");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
      throw new ApiException(400, "Missing the required parameter 'moduleId' when calling switchschedule");
    }
    
    // verify the required parameter 'scheduleId' is set
    if (scheduleId == null) {
      throw new ApiException(400, "Missing the required parameter 'scheduleId' when calling switchschedule");
    }
    
    // create path and map variables
    String path = "/switchschedule".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    
    queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "schedule_id", scheduleId));
    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "code_oauth", "password_oauth" };

    
    TypeRef returnType = new TypeRef<NAOkResponse>() {};
    return apiClient.invokeAPI(path, "POST", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
  /**
   * 
   * The method syncschedule changes the Thermostat weekly schedule.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones, timetable and name)
   * @return NAOkResponse
   */
  public NAOkResponse syncschedule (String deviceId, String moduleId, NAThermProgram thermProgram) throws ApiException {
    Object postBody = thermProgram;
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == null) {
      throw new ApiException(400, "Missing the required parameter 'deviceId' when calling syncschedule");
    }
    
    // verify the required parameter 'moduleId' is set
    if (moduleId == null) {
      throw new ApiException(400, "Missing the required parameter 'moduleId' when calling syncschedule");
    }
    
    // verify the required parameter 'thermProgram' is set
    if (thermProgram == null) {
      throw new ApiException(400, "Missing the required parameter 'thermProgram' when calling syncschedule");
    }
    
    // create path and map variables
    String path = "/syncschedule".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    
    queryParams.addAll(apiClient.parameterToPairs("", "device_id", deviceId));
    
    queryParams.addAll(apiClient.parameterToPairs("", "module_id", moduleId));
    

    

    

    final String[] accepts = {
      
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] { "code_oauth", "password_oauth" };

    
    TypeRef returnType = new TypeRef<NAOkResponse>() {};
    return apiClient.invokeAPI(path, "POST", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
}
