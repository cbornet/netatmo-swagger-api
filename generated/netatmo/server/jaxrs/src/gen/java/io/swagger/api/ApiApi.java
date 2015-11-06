package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.ApiApiService;
import io.swagger.api.factories.ApiApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NANewScheduleResponse;
import io.swagger.model.NAThermProgram;
import io.swagger.model.NADeviceListResponse;
import io.swagger.model.NAMeasureResponse;
import io.swagger.model.NAThermStateResponse;
import io.swagger.model.NAUserResponse;
import io.swagger.model.NAPartnerDevicesResponse;
import io.swagger.model.NAOkResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/api")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/api", description = "the api API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
public class ApiApi  {

   private final ApiApiService delegate = ApiApiServiceFactory.getApiApi();

    @POST
    @Path("/createnewschedule")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method createnewschedule creates a new schedule stored in the backup list.", response = NANewScheduleResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NANewScheduleResponse.class) })

    public Response createnewschedule(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "The thermostat program (zones and timetable)" ,required=true ) NAThermProgram thermProgram)
    throws NotFoundException {
        return delegate.createnewschedule(accessToken,deviceId,moduleId,thermProgram);
    }
    @GET
    @Path("/devicelist")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist(accessToken,appType,deviceId,getFavorites);
    }
    @GET
    @Path("/devicelist")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist_1(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist_1(accessToken,appType,deviceId,getFavorites);
    }
    @GET
    @Path("/devicelist")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist_2(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist_2(accessToken,appType,deviceId,getFavorites);
    }
    @GET
    @Path("/devicelist")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist_3(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist_3(accessToken,appType,deviceId,getFavorites);
    }
    @GET
    @Path("/getmeasure")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAMeasureResponse.class) })

    public Response getmeasure(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month",required=true, allowableValues="{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @QueryParam("scale") String scale,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).",required=true) @QueryParam("type") List<String> type,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @QueryParam("module_id") String moduleId,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @QueryParam("date_begin") Integer dateBegin,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @QueryParam("date_end") Integer dateEnd,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @QueryParam("limit") Integer limit,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @QueryParam("optimize") Boolean optimize,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @QueryParam("real_time") Boolean realTime)
    throws NotFoundException {
        return delegate.getmeasure(accessToken,deviceId,scale,type,moduleId,dateBegin,dateEnd,limit,optimize,realTime);
    }
    @GET
    @Path("/getmeasure")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAMeasureResponse.class) })

    public Response getmeasure_4(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month",required=true, allowableValues="{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @QueryParam("scale") String scale,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).",required=true) @QueryParam("type") List<String> type,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @QueryParam("module_id") String moduleId,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @QueryParam("date_begin") Integer dateBegin,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @QueryParam("date_end") Integer dateEnd,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @QueryParam("limit") Integer limit,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @QueryParam("optimize") Boolean optimize,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @QueryParam("real_time") Boolean realTime)
    throws NotFoundException {
        return delegate.getmeasure_4(accessToken,deviceId,scale,type,moduleId,dateBegin,dateEnd,limit,optimize,realTime);
    }
    @GET
    @Path("/getmeasure")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAMeasureResponse.class) })

    public Response getmeasure_5(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month",required=true, allowableValues="{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @QueryParam("scale") String scale,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).",required=true) @QueryParam("type") List<String> type,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @QueryParam("module_id") String moduleId,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @QueryParam("date_begin") Integer dateBegin,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @QueryParam("date_end") Integer dateEnd,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @QueryParam("limit") Integer limit,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @QueryParam("optimize") Boolean optimize,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @QueryParam("real_time") Boolean realTime)
    throws NotFoundException {
        return delegate.getmeasure_5(accessToken,deviceId,scale,type,moduleId,dateBegin,dateEnd,limit,optimize,realTime);
    }
    @GET
    @Path("/getmeasure")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAMeasureResponse.class) })

    public Response getmeasure_6(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month",required=true, allowableValues="{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @QueryParam("scale") String scale,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).",required=true) @QueryParam("type") List<String> type,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @QueryParam("module_id") String moduleId,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @QueryParam("date_begin") Integer dateBegin,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @QueryParam("date_end") Integer dateEnd,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @QueryParam("limit") Integer limit,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @QueryParam("optimize") Boolean optimize,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @QueryParam("real_time") Boolean realTime)
    throws NotFoundException {
        return delegate.getmeasure_6(accessToken,deviceId,scale,type,moduleId,dateBegin,dateEnd,limit,optimize,realTime);
    }
    @GET
    @Path("/getmeasure")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getmeasure returns the measurements of a device or a module.", response = NAMeasureResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAMeasureResponse.class) })

    public Response getmeasure_7(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month",required=true, allowableValues="{values=[max, 30min, 1hour, 3hours, 1day, 1week, 1month]}") @QueryParam("scale") String scale,
    @ApiParam(value = "Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).",required=true) @QueryParam("type") List<String> type,
    @ApiParam(value = "If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.") @QueryParam("module_id") String moduleId,
    @ApiParam(value = "Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.") @QueryParam("date_begin") Integer dateBegin,
    @ApiParam(value = "Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".") @QueryParam("date_end") Integer dateEnd,
    @ApiParam(value = "Limits the number of measurements returned (default & max is 1024)") @QueryParam("limit") Integer limit,
    @ApiParam(value = "Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.") @QueryParam("optimize") Boolean optimize,
    @ApiParam(value = "In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.") @QueryParam("real_time") Boolean realTime)
    throws NotFoundException {
        return delegate.getmeasure_7(accessToken,deviceId,scale,type,moduleId,dateBegin,dateEnd,limit,optimize,realTime);
    }
    @GET
    @Path("/getthermstate")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.", response = NAThermStateResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAThermStateResponse.class) })

    public Response getthermstate(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId)
    throws NotFoundException {
        return delegate.getthermstate(accessToken,deviceId,moduleId);
    }
    @GET
    @Path("/getthermstate")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.", response = NAThermStateResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAThermStateResponse.class) })

    public Response getthermstate_8(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId)
    throws NotFoundException {
        return delegate.getthermstate_8(accessToken,deviceId,moduleId);
    }
    @GET
    @Path("/getuser")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAUserResponse.class) })

    public Response getuser(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken)
    throws NotFoundException {
        return delegate.getuser(accessToken);
    }
    @GET
    @Path("/getuser")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAUserResponse.class) })

    public Response getuser_9(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken)
    throws NotFoundException {
        return delegate.getuser_9(accessToken);
    }
    @GET
    @Path("/getuser")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAUserResponse.class) })

    public Response getuser_10(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken)
    throws NotFoundException {
        return delegate.getuser_10(accessToken);
    }
    @GET
    @Path("/partnerdevices")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method partnerdevices returns the list of device_id to which your partner application has access to.", response = NAPartnerDevicesResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAPartnerDevicesResponse.class) })

    public Response partnerdevices(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken)
    throws NotFoundException {
        return delegate.partnerdevices(accessToken);
    }
    @POST
    @Path("/setthermpoint")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method setthermpoint changes the Thermostat manual temperature setpoint.", response = NAOkResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAOkResponse.class) })

    public Response setthermpoint(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "Chosen setpoint_mode",required=true, allowableValues="{values=[program, away, hg, manual, off, max]}") @QueryParam("setpoint_mode") String setpointMode,
    @ApiParam(value = "When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.") @QueryParam("setpoint_endtime") Integer setpointEndtime,
    @ApiParam(value = "When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.") @QueryParam("setpoint_temp") Float setpointTemp)
    throws NotFoundException {
        return delegate.setthermpoint(accessToken,deviceId,moduleId,setpointMode,setpointEndtime,setpointTemp);
    }
    @POST
    @Path("/switchschedule")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method switchschedule switches the Thermostat's schedule to another existing schedule.", response = NAOkResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAOkResponse.class) })

    public Response switchschedule(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "The schedule id. It can be found in the getthermstate response, under the keys \"therm_program_backup\" and \"therm_program\".",required=true) @QueryParam("schedule_id") String scheduleId)
    throws NotFoundException {
        return delegate.switchschedule(accessToken,deviceId,moduleId,scheduleId);
    }
    @POST
    @Path("/syncschedule")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method syncschedule changes the Thermostat weekly schedule.", response = NAOkResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAOkResponse.class) })

    public Response syncschedule(@ApiParam(value = "Your access token",required=true) @QueryParam("access_token") String accessToken,
    @ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "The thermostat program (zones, timetable and name)" ,required=true ) NAThermProgram thermProgram)
    throws NotFoundException {
        return delegate.syncschedule(accessToken,deviceId,moduleId,thermProgram);
    }
}

