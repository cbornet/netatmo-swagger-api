package io.swagger.client.api;

import io.swagger.client.CollectionFormats.*;

import io.swagger.client.model.*;

import retrofit.Callback;
import retrofit.http.*;
import retrofit.mime.*;
import java.util.*;

import io.swagger.client.model.NANewScheduleResponse;
import io.swagger.client.model.NAThermProgram;
import io.swagger.client.model.NADeviceListResponse;
import io.swagger.client.model.NAMeasureResponse;
import io.swagger.client.model.NAThermStateResponse;
import io.swagger.client.model.NAUserResponse;
import io.swagger.client.model.NAOkResponse;

public interface ThermostatApi {
  
  /**
   * 
   * Sync method
   * The method createnewschedule creates a new schedule stored in the backup list.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones and timetable)
   * @return NANewScheduleResponse
   */
  
  @POST("/createnewschedule")  
  NANewScheduleResponse createnewschedule(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Body NAThermProgram thermProgram
  );

  /**
   * 
   * Async method
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones and timetable)
   * @param cb callback method   
   * @return void
   */
  
  @POST("/createnewschedule")  
  void createnewschedule(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Body NAThermProgram thermProgram, Callback<NANewScheduleResponse> cb
  ); 
  
  /**
   * 
   * Sync method
   * The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
   * @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
   * @param deviceId Specify a device_id if you want to retrieve only this device informations.
   * @param getFavorites When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
   * @return NADeviceListResponse
   */
  
  @GET("/devicelist")  
  NADeviceListResponse devicelist(
    @Query("app_type") String appType, @Query("device_id") String deviceId, @Query("get_favorites") Boolean getFavorites
  );

  /**
   * 
   * Async method
   * @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
   * @param deviceId Specify a device_id if you want to retrieve only this device informations.
   * @param getFavorites When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
   * @param cb callback method   
   * @return void
   */
  
  @GET("/devicelist")  
  void devicelist(
    @Query("app_type") String appType, @Query("device_id") String deviceId, @Query("get_favorites") Boolean getFavorites, Callback<NADeviceListResponse> cb
  ); 
  
  /**
   * 
   * Sync method
   * The method getmeasure returns the measurements of a device or a module.
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
  
  @GET("/getmeasure")  
  NAMeasureResponse getmeasure(
    @Query("device_id") String deviceId, @Query("scale") String scale, @Query("type") CSVParams type, @Query("module_id") String moduleId, @Query("date_begin") Integer dateBegin, @Query("date_end") Integer dateEnd, @Query("limit") Integer limit, @Query("optimize") Boolean optimize, @Query("real_time") Boolean realTime
  );

  /**
   * 
   * Async method
   * @param deviceId Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
   * @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
   * @param type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).
   * @param moduleId If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
   * @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
   * @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
   * @param limit Limits the number of measurements returned (default &amp; max is 1024)
   * @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
   * @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
   * @param cb callback method   
   * @return void
   */
  
  @GET("/getmeasure")  
  void getmeasure(
    @Query("device_id") String deviceId, @Query("scale") String scale, @Query("type") CSVParams type, @Query("module_id") String moduleId, @Query("date_begin") Integer dateBegin, @Query("date_end") Integer dateEnd, @Query("limit") Integer limit, @Query("optimize") Boolean optimize, @Query("real_time") Boolean realTime, Callback<NAMeasureResponse> cb
  ); 
  
  /**
   * 
   * Sync method
   * The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @return NAThermStateResponse
   */
  
  @GET("/getthermstate")  
  NAThermStateResponse getthermstate(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId
  );

  /**
   * 
   * Async method
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param cb callback method   
   * @return void
   */
  
  @GET("/getthermstate")  
  void getthermstate(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, Callback<NAThermStateResponse> cb
  ); 
  
  /**
   * 
   * Sync method
   * The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
   * @return NAUserResponse
   */
  
  @GET("/getuser")  
  NAUserResponse getuser();
    

  /**
   * 
   * Async method
   * @param cb callback method   
   * @return void
   */
  
  @GET("/getuser")  
  void getuser(
    Callback<NAUserResponse> cb
  ); 
  
  /**
   * 
   * Sync method
   * The method setthermpoint changes the Thermostat manual temperature setpoint.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param setpointMode Chosen setpoint_mode
   * @param setpointEndtime When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.
   * @param setpointTemp When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.
   * @return NAOkResponse
   */
  
  @POST("/setthermpoint")  
  NAOkResponse setthermpoint(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Query("setpoint_mode") String setpointMode, @Query("setpoint_endtime") Integer setpointEndtime, @Query("setpoint_temp") Float setpointTemp
  );

  /**
   * 
   * Async method
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param setpointMode Chosen setpoint_mode
   * @param setpointEndtime When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.
   * @param setpointTemp When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.
   * @param cb callback method   
   * @return void
   */
  
  @POST("/setthermpoint")  
  void setthermpoint(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Query("setpoint_mode") String setpointMode, @Query("setpoint_endtime") Integer setpointEndtime, @Query("setpoint_temp") Float setpointTemp, Callback<NAOkResponse> cb
  ); 
  
  /**
   * 
   * Sync method
   * The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param scheduleId The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.
   * @return NAOkResponse
   */
  
  @POST("/switchschedule")  
  NAOkResponse switchschedule(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Query("schedule_id") String scheduleId
  );

  /**
   * 
   * Async method
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param scheduleId The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.
   * @param cb callback method   
   * @return void
   */
  
  @POST("/switchschedule")  
  void switchschedule(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Query("schedule_id") String scheduleId, Callback<NAOkResponse> cb
  ); 
  
  /**
   * 
   * Sync method
   * The method syncschedule changes the Thermostat weekly schedule.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones, timetable and name)
   * @return NAOkResponse
   */
  
  @POST("/syncschedule")  
  NAOkResponse syncschedule(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Body NAThermProgram thermProgram
  );

  /**
   * 
   * Async method
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones, timetable and name)
   * @param cb callback method   
   * @return void
   */
  
  @POST("/syncschedule")  
  void syncschedule(
    @Query("device_id") String deviceId, @Query("module_id") String moduleId, @Body NAThermProgram thermProgram, Callback<NAOkResponse> cb
  ); 
  
}
