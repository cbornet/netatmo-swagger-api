package io.swagger.client.api

import io.swagger.client.model.NANewScheduleResponse
import io.swagger.client.model.NAThermProgram
import io.swagger.client.model.NADeviceListResponse
import io.swagger.client.model.NAMeasureResponse
import io.swagger.client.model.NAThermStateResponse
import io.swagger.client.model.NAUserResponse
import io.swagger.client.model.NAOkResponse
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object PrivateApi {

  /**
   * The method createnewschedule creates a new schedule stored in the backup list.
   * 
   * Expected answers:
   *   code 200 : NANewScheduleResponse (Successful response)
   * 
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones and timetable)
   */
  def createnewschedule(deviceId: String, moduleId: String, thermProgram: NAThermProgram): ApiRequest[NANewScheduleResponse] =
    ApiRequest[NANewScheduleResponse](ApiMethods.POST, "https://api.netatmo.net/api", "/createnewschedule", "application/json")
      .withBody(thermProgram)
      .withQueryParam("device_id", deviceId)
      .withQueryParam("module_id", moduleId)
      .withSuccessResponse[NANewScheduleResponse](200)
      
  /**
   * The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
   * 
   * Expected answers:
   *   code 200 : NADeviceListResponse (Successful response)
   * 
   * @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
   * @param deviceId Specify a device_id if you want to retrieve only this device informations.
   * @param getFavorites When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
   */
  def devicelist(appType: Option[String] = None, deviceId: Option[String] = None, getFavorites: Option[Boolean] = None): ApiRequest[NADeviceListResponse] =
    ApiRequest[NADeviceListResponse](ApiMethods.GET, "https://api.netatmo.net/api", "/devicelist", "application/json")
      .withQueryParam("app_type", appType)
      .withQueryParam("device_id", deviceId)
      .withQueryParam("get_favorites", getFavorites)
      .withSuccessResponse[NADeviceListResponse](200)
      
  /**
   * The method getmeasure returns the measurements of a device or a module.
   * 
   * Expected answers:
   *   code 200 : NAMeasureResponse (Successful response)
   * 
   * @param deviceId Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
   * @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
   * @param `type` Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if module_id is a rain sensor)\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure, Noise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise, min_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n  Temperature: Celsius\n  Humidity: %\n  Co2: ppm\n  Pressure: mbar\n  Noise: db\n  Rain: mm\nFor Thermostat:\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  where\nTemperature: Celsius\n  Sp_Temperature (temperature setpoint): Celsius\n  BoilerOn: Duration, since the previous data point, during which the boiler has been on (in seconds)\n  BoilerOff : Duration, since the previous data point, during which the boiler has been off (in seconds).\n  sum_boiler_on: Total duration during which the boiler has been on, at a specific scale (in seconds).\n  sum_boiler_off: Total duration during which the boiler has been off, at a specific scale (in seconds).
   * @param moduleId If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
   * @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
   * @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
   * @param limit Limits the number of measurements returned (default &amp; max is 1024)
   * @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
   * @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
   */
  def getmeasure(deviceId: String, scale: String, `type`: String, moduleId: Option[String] = None, dateBegin: Option[Int] = None, dateEnd: Option[Int] = None, limit: Option[Int] = None, optimize: Option[Boolean] = None, realTime: Option[Boolean] = None): ApiRequest[NAMeasureResponse] =
    ApiRequest[NAMeasureResponse](ApiMethods.GET, "https://api.netatmo.net/api", "/getmeasure", "application/json")
      .withQueryParam("device_id", deviceId)
      .withQueryParam("module_id", moduleId)
      .withQueryParam("scale", scale)
      .withQueryParam("type", `type`)
      .withQueryParam("date_begin", dateBegin)
      .withQueryParam("date_end", dateEnd)
      .withQueryParam("limit", limit)
      .withQueryParam("optimize", optimize)
      .withQueryParam("real_time", realTime)
      .withSuccessResponse[NAMeasureResponse](200)
      
  /**
   * The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
   * 
   * Expected answers:
   *   code 200 : NAThermStateResponse (Successful response)
   * 
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   */
  def getthermstate(deviceId: String, moduleId: String): ApiRequest[NAThermStateResponse] =
    ApiRequest[NAThermStateResponse](ApiMethods.GET, "https://api.netatmo.net/api", "/getthermstate", "application/json")
      .withQueryParam("device_id", deviceId)
      .withQueryParam("module_id", moduleId)
      .withSuccessResponse[NAThermStateResponse](200)
      
  /**
   * The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
   * 
   * Expected answers:
   *   code 200 : NAUserResponse (Successful response)
   */
  def getuser(): ApiRequest[NAUserResponse] =
    ApiRequest[NAUserResponse](ApiMethods.GET, "https://api.netatmo.net/api", "/getuser", "application/json")
      .withSuccessResponse[NAUserResponse](200)
      
  /**
   * The method setthermpoint changes the Thermostat manual temperature setpoint.
   * 
   * Expected answers:
   *   code 200 : NAOkResponse (Successful response)
   * 
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param setpointMode Chosen setpoint_mode
   * @param setpointEndtime When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.
   * @param setpointTemp When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.
   */
  def setthermpoint(deviceId: String, moduleId: String, setpointMode: String, setpointEndtime: Option[Int] = None, setpointTemp: Option[Float] = None): ApiRequest[NAOkResponse] =
    ApiRequest[NAOkResponse](ApiMethods.POST, "https://api.netatmo.net/api", "/setthermpoint", "application/json")
      .withQueryParam("device_id", deviceId)
      .withQueryParam("module_id", moduleId)
      .withQueryParam("setpoint_mode", setpointMode)
      .withQueryParam("setpoint_endtime", setpointEndtime)
      .withQueryParam("setpoint_temp", setpointTemp)
      .withSuccessResponse[NAOkResponse](200)
      
  /**
   * The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
   * 
   * Expected answers:
   *   code 200 : NAOkResponse (Successful response)
   * 
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param scheduleId The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.
   */
  def switchschedule(deviceId: String, moduleId: String, scheduleId: String): ApiRequest[NAOkResponse] =
    ApiRequest[NAOkResponse](ApiMethods.POST, "https://api.netatmo.net/api", "/switchschedule", "application/json")
      .withQueryParam("device_id", deviceId)
      .withQueryParam("module_id", moduleId)
      .withQueryParam("schedule_id", scheduleId)
      .withSuccessResponse[NAOkResponse](200)
      
  /**
   * The method syncschedule changes the Thermostat weekly schedule.
   * 
   * Expected answers:
   *   code 200 : NAOkResponse (Successful response)
   * 
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones, timetable and name)
   */
  def syncschedule(deviceId: String, moduleId: String, thermProgram: NAThermProgram): ApiRequest[NAOkResponse] =
    ApiRequest[NAOkResponse](ApiMethods.POST, "https://api.netatmo.net/api", "/syncschedule", "application/json")
      .withBody(thermProgram)
      .withQueryParam("device_id", deviceId)
      .withQueryParam("module_id", moduleId)
      .withSuccessResponse[NAOkResponse](200)
      


}

