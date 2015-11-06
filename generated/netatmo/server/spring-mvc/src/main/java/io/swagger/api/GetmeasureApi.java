package io.swagger.api;

import io.swagger.model.*;

import io.swagger.model.NAMeasureResponse;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiParam;
import io.swagger.annotations.ApiResponse;
import io.swagger.annotations.ApiResponses;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;

import static org.springframework.http.MediaType.*;

@Controller
@RequestMapping(value = "/getmeasure", produces = {APPLICATION_JSON_VALUE})
@Api(value = "/getmeasure", description = "the getmeasure API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-07T17:11:46.681+02:00")
public class GetmeasureApi {
  

  @ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAMeasureResponse> getmeasure(@ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.", required = true) @RequestParam(value = "deviceId", required = true) String deviceId


,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month", required = true, allowableValues = "{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @RequestParam(value = "scale", required = true) String scale


,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).", required = true) @RequestParam(value = "type", required = true) String type


,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @RequestParam(value = "moduleId", required = false) String moduleId


,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @RequestParam(value = "dateBegin", required = false) Integer dateBegin


,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @RequestParam(value = "dateEnd", required = false) Integer dateEnd


,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @RequestParam(value = "limit", required = false) Integer limit


,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @RequestParam(value = "optimize", required = false) Boolean optimize


,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @RequestParam(value = "realTime", required = false) Boolean realTime


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAMeasureResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAMeasureResponse> getmeasure_1(@ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.", required = true) @RequestParam(value = "deviceId", required = true) String deviceId


,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month", required = true, allowableValues = "{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @RequestParam(value = "scale", required = true) String scale


,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).", required = true) @RequestParam(value = "type", required = true) String type


,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @RequestParam(value = "moduleId", required = false) String moduleId


,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @RequestParam(value = "dateBegin", required = false) Integer dateBegin


,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @RequestParam(value = "dateEnd", required = false) Integer dateEnd


,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @RequestParam(value = "limit", required = false) Integer limit


,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @RequestParam(value = "optimize", required = false) Boolean optimize


,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @RequestParam(value = "realTime", required = false) Boolean realTime


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAMeasureResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAMeasureResponse> getmeasure_2(@ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.", required = true) @RequestParam(value = "deviceId", required = true) String deviceId


,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month", required = true, allowableValues = "{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @RequestParam(value = "scale", required = true) String scale


,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).", required = true) @RequestParam(value = "type", required = true) String type


,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @RequestParam(value = "moduleId", required = false) String moduleId


,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @RequestParam(value = "dateBegin", required = false) Integer dateBegin


,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @RequestParam(value = "dateEnd", required = false) Integer dateEnd


,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @RequestParam(value = "limit", required = false) Integer limit


,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @RequestParam(value = "optimize", required = false) Boolean optimize


,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @RequestParam(value = "realTime", required = false) Boolean realTime


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAMeasureResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAMeasureResponse> getmeasure_3(@ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.", required = true) @RequestParam(value = "deviceId", required = true) String deviceId


,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month", required = true, allowableValues = "{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @RequestParam(value = "scale", required = true) String scale


,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).", required = true) @RequestParam(value = "type", required = true) String type


,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @RequestParam(value = "moduleId", required = false) String moduleId


,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @RequestParam(value = "dateBegin", required = false) Integer dateBegin


,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @RequestParam(value = "dateEnd", required = false) Integer dateEnd


,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @RequestParam(value = "limit", required = false) Integer limit


,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @RequestParam(value = "optimize", required = false) Boolean optimize


,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @RequestParam(value = "realTime", required = false) Boolean realTime


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAMeasureResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAMeasureResponse> getmeasure_4(@ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.", required = true) @RequestParam(value = "deviceId", required = true) String deviceId


,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month", required = true, allowableValues = "{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @RequestParam(value = "scale", required = true) String scale


,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).", required = true) @RequestParam(value = "type", required = true) String type


,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @RequestParam(value = "moduleId", required = false) String moduleId


,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @RequestParam(value = "dateBegin", required = false) Integer dateBegin


,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @RequestParam(value = "dateEnd", required = false) Integer dateEnd


,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @RequestParam(value = "limit", required = false) Integer limit


,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @RequestParam(value = "optimize", required = false) Boolean optimize


,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @RequestParam(value = "realTime", required = false) Boolean realTime


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAMeasureResponse>(HttpStatus.OK);
  }

  
}
