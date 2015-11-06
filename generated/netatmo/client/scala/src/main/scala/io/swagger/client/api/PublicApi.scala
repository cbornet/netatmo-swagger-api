package io.swagger.client.api

import io.swagger.client.model.NAMeasureResponse
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class PublicApi(val defBasePath: String = "https://api.netatmo.net/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * 
   * The method getmeasure returns the measurements of a device or a module.
   * @param accessToken Your access token
   * @param deviceId Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
   * @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
   * @param _type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).
   * @param moduleId If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
   * @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
   * @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
   * @param limit Limits the number of measurements returned (default &amp; max is 1024)
   * @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
   * @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
   * @return NAMeasureResponse
   */
  def getmeasure (accessToken: String, deviceId: String, scale: String, _type: List[String], moduleId: String, dateBegin: Integer, dateEnd: Integer, limit: Integer, optimize: Boolean, realTime: Boolean) : Option[NAMeasureResponse] = {
    // create path and map variables
    val path = "/api/getmeasure".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(accessToken) != "null") queryParams += "access_token" -> accessToken.toString
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
  
}
