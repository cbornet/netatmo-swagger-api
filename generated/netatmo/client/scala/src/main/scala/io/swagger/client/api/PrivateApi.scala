package io.swagger.client.api

import io.swagger.client.model.NANewScheduleResponse
import io.swagger.client.model.NAThermProgram
import io.swagger.client.model.NADeviceListResponse
import io.swagger.client.model.NAMeasureResponse
import io.swagger.client.model.NAThermStateResponse
import io.swagger.client.model.NAUserResponse
import io.swagger.client.model.NAOkResponse
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class PrivateApi(val defBasePath: String = "https://api.netatmo.net/api",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * 
   * The method createnewschedule creates a new schedule stored in the backup list.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones and timetable)
   * @return NANewScheduleResponse
   */
  def createnewschedule (deviceId: String, moduleId: String, thermProgram: NAThermProgram) : Option[NANewScheduleResponse] = {
    // create path and map variables
    val path = "/createnewschedule".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(deviceId) != "null") queryParams += "device_id" -> deviceId.toString
    if(String.valueOf(moduleId) != "null") queryParams += "module_id" -> moduleId.toString
    
    
    

    var postBody: AnyRef = thermProgram

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NANewScheduleResponse]).asInstanceOf[NANewScheduleResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
   * @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
   * @param deviceId Specify a device_id if you want to retrieve only this device informations.
   * @param getFavorites When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
   * @return NADeviceListResponse
   */
  def devicelist (appType: String, deviceId: String, getFavorites: Boolean) : Option[NADeviceListResponse] = {
    // create path and map variables
    val path = "/devicelist".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(appType) != "null") queryParams += "app_type" -> appType.toString
    if(String.valueOf(deviceId) != "null") queryParams += "device_id" -> deviceId.toString
    if(String.valueOf(getFavorites) != "null") queryParams += "get_favorites" -> getFavorites.toString
    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NADeviceListResponse]).asInstanceOf[NADeviceListResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * The method getmeasure returns the measurements of a device or a module.
   * @param deviceId Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
   * @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
   * @param _type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if module_id is a rain sensor)\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure, Noise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise, min_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n  Temperature: Celsius\n  Humidity: %\n  Co2: ppm\n  Pressure: mbar\n  Noise: db\n  Rain: mm\nFor Thermostat:\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  where\nTemperature: Celsius\n  Sp_Temperature (temperature setpoint): Celsius\n  BoilerOn: Duration, since the previous data point, during which the boiler has been on (in seconds)\n  BoilerOff : Duration, since the previous data point, during which the boiler has been off (in seconds).\n  sum_boiler_on: Total duration during which the boiler has been on, at a specific scale (in seconds).\n  sum_boiler_off: Total duration during which the boiler has been off, at a specific scale (in seconds).
   * @param moduleId If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
   * @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
   * @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
   * @param limit Limits the number of measurements returned (default &amp; max is 1024)
   * @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
   * @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
   * @return NAMeasureResponse
   */
  def getmeasure (deviceId: String, scale: String, _type: String, moduleId: String, dateBegin: Integer, dateEnd: Integer, limit: Integer, optimize: Boolean, realTime: Boolean) : Option[NAMeasureResponse] = {
    // create path and map variables
    val path = "/getmeasure".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(deviceId) != "null") queryParams += "device_id" -> deviceId.toString
    if(String.valueOf(moduleId) != "null") queryParams += "module_id" -> moduleId.toString
    if(String.valueOf(scale) != "null") queryParams += "scale" -> scale.toString
    if(String.valueOf(_type) != "null") queryParams += "type" -> _type.toString
    if(String.valueOf(dateBegin) != "null") queryParams += "date_begin" -> dateBegin.toString
    if(String.valueOf(dateEnd) != "null") queryParams += "date_end" -> dateEnd.toString
    if(String.valueOf(limit) != "null") queryParams += "limit" -> limit.toString
    if(String.valueOf(optimize) != "null") queryParams += "optimize" -> optimize.toString
    if(String.valueOf(realTime) != "null") queryParams += "real_time" -> realTime.toString
    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NAMeasureResponse]).asInstanceOf[NAMeasureResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @return NAThermStateResponse
   */
  def getthermstate (deviceId: String, moduleId: String) : Option[NAThermStateResponse] = {
    // create path and map variables
    val path = "/getthermstate".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(deviceId) != "null") queryParams += "device_id" -> deviceId.toString
    if(String.valueOf(moduleId) != "null") queryParams += "module_id" -> moduleId.toString
    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NAThermStateResponse]).asInstanceOf[NAThermStateResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
   * @return NAUserResponse
   */
  def getuser () : Option[NAUserResponse] = {
    // create path and map variables
    val path = "/getuser".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NAUserResponse]).asInstanceOf[NAUserResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
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
  def setthermpoint (deviceId: String, moduleId: String, setpointMode: String, setpointEndtime: Integer, setpointTemp: Float) : Option[NAOkResponse] = {
    // create path and map variables
    val path = "/setthermpoint".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(deviceId) != "null") queryParams += "device_id" -> deviceId.toString
    if(String.valueOf(moduleId) != "null") queryParams += "module_id" -> moduleId.toString
    if(String.valueOf(setpointMode) != "null") queryParams += "setpoint_mode" -> setpointMode.toString
    if(String.valueOf(setpointEndtime) != "null") queryParams += "setpoint_endtime" -> setpointEndtime.toString
    if(String.valueOf(setpointTemp) != "null") queryParams += "setpoint_temp" -> setpointTemp.toString
    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NAOkResponse]).asInstanceOf[NAOkResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param scheduleId The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.
   * @return NAOkResponse
   */
  def switchschedule (deviceId: String, moduleId: String, scheduleId: String) : Option[NAOkResponse] = {
    // create path and map variables
    val path = "/switchschedule".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(deviceId) != "null") queryParams += "device_id" -> deviceId.toString
    if(String.valueOf(moduleId) != "null") queryParams += "module_id" -> moduleId.toString
    if(String.valueOf(scheduleId) != "null") queryParams += "schedule_id" -> scheduleId.toString
    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NAOkResponse]).asInstanceOf[NAOkResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * The method syncschedule changes the Thermostat weekly schedule.
   * @param deviceId The relay id
   * @param moduleId The thermostat id
   * @param thermProgram The thermostat program (zones, timetable and name)
   * @return NAOkResponse
   */
  def syncschedule (deviceId: String, moduleId: String, thermProgram: NAThermProgram) : Option[NAOkResponse] = {
    // create path and map variables
    val path = "/syncschedule".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(deviceId) != "null") queryParams += "device_id" -> deviceId.toString
    if(String.valueOf(moduleId) != "null") queryParams += "module_id" -> moduleId.toString
    
    
    

    var postBody: AnyRef = thermProgram

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NAOkResponse]).asInstanceOf[NAOkResponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
