using System;
using System.IO;
using System.Collections.Generic;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    
    public interface IPrivateApi
    {
        
        /// <summary>
        ///  The method createnewschedule creates a new schedule stored in the backup list.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="thermProgram">The thermostat program (zones and timetable)</param>
        /// <returns>NANewScheduleResponse</returns>
        NANewScheduleResponse Createnewschedule (string deviceId, string moduleId, NAThermProgram thermProgram);
  
        /// <summary>
        ///  The method createnewschedule creates a new schedule stored in the backup list.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="thermProgram">The thermostat program (zones and timetable)</param>
        /// <returns>NANewScheduleResponse</returns>
        System.Threading.Tasks.Task<NANewScheduleResponse> CreatenewscheduleAsync (string deviceId, string moduleId, NAThermProgram thermProgram);
        
        /// <summary>
        ///  The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
        /// </summary>
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param>
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param>
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param>
        /// <returns>NADeviceListResponse</returns>
        NADeviceListResponse Devicelist (string appType, string deviceId, bool? getFavorites);
  
        /// <summary>
        ///  The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
        /// </summary>
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param>
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param>
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param>
        /// <returns>NADeviceListResponse</returns>
        System.Threading.Tasks.Task<NADeviceListResponse> DevicelistAsync (string appType, string deviceId, bool? getFavorites);
        
        /// <summary>
        ///  The method getmeasure returns the measurements of a device or a module.
        /// </summary>
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param>
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param>
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if module_id is a rain sensor)\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure, Noise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise, min_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n  Temperature: Celsius\n  Humidity: %\n  Co2: ppm\n  Pressure: mbar\n  Noise: db\n  Rain: mm\nFor Thermostat:\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  where\nTemperature: Celsius\n  Sp_Temperature (temperature setpoint): Celsius\n  BoilerOn: Duration, since the previous data point, during which the boiler has been on (in seconds)\n  BoilerOff : Duration, since the previous data point, during which the boiler has been off (in seconds).\n  sum_boiler_on: Total duration during which the boiler has been on, at a specific scale (in seconds).\n  sum_boiler_off: Total duration during which the boiler has been off, at a specific scale (in seconds).</param>
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param>
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param>
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param>
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param>
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param>
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param>
        /// <returns>NAMeasureResponse</returns>
        NAMeasureResponse Getmeasure (string deviceId, string scale, string type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime);
  
        /// <summary>
        ///  The method getmeasure returns the measurements of a device or a module.
        /// </summary>
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param>
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param>
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if module_id is a rain sensor)\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure, Noise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise, min_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n  Temperature: Celsius\n  Humidity: %\n  Co2: ppm\n  Pressure: mbar\n  Noise: db\n  Rain: mm\nFor Thermostat:\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  where\nTemperature: Celsius\n  Sp_Temperature (temperature setpoint): Celsius\n  BoilerOn: Duration, since the previous data point, during which the boiler has been on (in seconds)\n  BoilerOff : Duration, since the previous data point, during which the boiler has been off (in seconds).\n  sum_boiler_on: Total duration during which the boiler has been on, at a specific scale (in seconds).\n  sum_boiler_off: Total duration during which the boiler has been off, at a specific scale (in seconds).</param>
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param>
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param>
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param>
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param>
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param>
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param>
        /// <returns>NAMeasureResponse</returns>
        System.Threading.Tasks.Task<NAMeasureResponse> GetmeasureAsync (string deviceId, string scale, string type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime);
        
        /// <summary>
        ///  The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <returns>NAThermStateResponse</returns>
        NAThermStateResponse Getthermstate (string deviceId, string moduleId);
  
        /// <summary>
        ///  The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <returns>NAThermStateResponse</returns>
        System.Threading.Tasks.Task<NAThermStateResponse> GetthermstateAsync (string deviceId, string moduleId);
        
        /// <summary>
        ///  The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
        /// </summary>
        /// <returns>NAUserResponse</returns>
        NAUserResponse Getuser ();
  
        /// <summary>
        ///  The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
        /// </summary>
        /// <returns>NAUserResponse</returns>
        System.Threading.Tasks.Task<NAUserResponse> GetuserAsync ();
        
        /// <summary>
        ///  The method setthermpoint changes the Thermostat manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="setpointMode">Chosen setpoint_mode</param>
        /// <param name="setpointEndtime">When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.</param>
        /// <param name="setpointTemp">When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.</param>
        /// <returns>NAOkResponse</returns>
        NAOkResponse Setthermpoint (string deviceId, string moduleId, string setpointMode, int? setpointEndtime, float? setpointTemp);
  
        /// <summary>
        ///  The method setthermpoint changes the Thermostat manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="setpointMode">Chosen setpoint_mode</param>
        /// <param name="setpointEndtime">When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.</param>
        /// <param name="setpointTemp">When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.</param>
        /// <returns>NAOkResponse</returns>
        System.Threading.Tasks.Task<NAOkResponse> SetthermpointAsync (string deviceId, string moduleId, string setpointMode, int? setpointEndtime, float? setpointTemp);
        
        /// <summary>
        ///  The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="scheduleId">The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.</param>
        /// <returns>NAOkResponse</returns>
        NAOkResponse Switchschedule (string deviceId, string moduleId, string scheduleId);
  
        /// <summary>
        ///  The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="scheduleId">The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.</param>
        /// <returns>NAOkResponse</returns>
        System.Threading.Tasks.Task<NAOkResponse> SwitchscheduleAsync (string deviceId, string moduleId, string scheduleId);
        
        /// <summary>
        ///  The method syncschedule changes the Thermostat weekly schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="thermProgram">The thermostat program (zones, timetable and name)</param>
        /// <returns>NAOkResponse</returns>
        NAOkResponse Syncschedule (string deviceId, string moduleId, NAThermProgram thermProgram);
  
        /// <summary>
        ///  The method syncschedule changes the Thermostat weekly schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="thermProgram">The thermostat program (zones, timetable and name)</param>
        /// <returns>NAOkResponse</returns>
        System.Threading.Tasks.Task<NAOkResponse> SyncscheduleAsync (string deviceId, string moduleId, NAThermProgram thermProgram);
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class PrivateApi : IPrivateApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PrivateApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public PrivateApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="PrivateApi"/> class.
        /// </summary>
        /// <returns></returns>
        public PrivateApi(String basePath)
        {
            this.ApiClient = new ApiClient(basePath);
        }
    
        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <param name="basePath">The base path</param>
        /// <value>The base path</value>
        public void SetBasePath(String basePath)
        {
            this.ApiClient.BasePath = basePath;
        }
    
        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.ApiClient.BasePath;
        }
    
        /// <summary>
        /// Gets or sets the API client.
        /// </summary>
        /// <value>An instance of the ApiClient</param>
        public ApiClient ApiClient {get; set;}
    
        
        /// <summary>
        ///  The method createnewschedule creates a new schedule stored in the backup list.
        /// </summary>
        /// <param name="deviceId">The relay id</param> 
        /// <param name="moduleId">The thermostat id</param> 
        /// <param name="thermProgram">The thermostat program (zones and timetable)</param> 
        /// <returns>NANewScheduleResponse</returns>            
        public NANewScheduleResponse Createnewschedule (string deviceId, string moduleId, NAThermProgram thermProgram)
        {
            
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Createnewschedule");
            
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Createnewschedule");
            
            // verify the required parameter 'thermProgram' is set
            if (thermProgram == null) throw new ApiException(400, "Missing required parameter 'thermProgram' when calling Createnewschedule");
            
    
            var path = "/createnewschedule";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            
            
            
            postBody = ApiClient.Serialize(thermProgram); // http body (model) parameter
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Createnewschedule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Createnewschedule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NANewScheduleResponse) ApiClient.Deserialize(response.Content, typeof(NANewScheduleResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method createnewschedule creates a new schedule stored in the backup list.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="thermProgram">The thermostat program (zones and timetable)</param>
        /// <returns>NANewScheduleResponse</returns>
        public async System.Threading.Tasks.Task<NANewScheduleResponse> CreatenewscheduleAsync (string deviceId, string moduleId, NAThermProgram thermProgram)
        {
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Createnewschedule");
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Createnewschedule");
            // verify the required parameter 'thermProgram' is set
            if (thermProgram == null) throw new ApiException(400, "Missing required parameter 'thermProgram' when calling Createnewschedule");
            
    
            var path = "/createnewschedule";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            
            
            
            postBody = ApiClient.Serialize(thermProgram); // http body (model) parameter
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Createnewschedule: " + response.Content, response.Content);

            return (NANewScheduleResponse) ApiClient.Deserialize(response.Content, typeof(NANewScheduleResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
        /// </summary>
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param> 
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param> 
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param> 
        /// <returns>NADeviceListResponse</returns>            
        public NADeviceListResponse Devicelist (string appType, string deviceId, bool? getFavorites)
        {
            
    
            var path = "/devicelist";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            if (appType != null) queryParams.Add("app_type", ApiClient.ParameterToString(appType)); // query parameter
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (getFavorites != null) queryParams.Add("get_favorites", ApiClient.ParameterToString(getFavorites)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Devicelist: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Devicelist: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NADeviceListResponse) ApiClient.Deserialize(response.Content, typeof(NADeviceListResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
        /// </summary>
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param>
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param>
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param>
        /// <returns>NADeviceListResponse</returns>
        public async System.Threading.Tasks.Task<NADeviceListResponse> DevicelistAsync (string appType, string deviceId, bool? getFavorites)
        {
            
    
            var path = "/devicelist";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            if (appType != null) queryParams.Add("app_type", ApiClient.ParameterToString(appType)); // query parameter
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (getFavorites != null) queryParams.Add("get_favorites", ApiClient.ParameterToString(getFavorites)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Devicelist: " + response.Content, response.Content);

            return (NADeviceListResponse) ApiClient.Deserialize(response.Content, typeof(NADeviceListResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method getmeasure returns the measurements of a device or a module.
        /// </summary>
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param> 
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param> 
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if module_id is a rain sensor)\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure, Noise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise, min_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n  Temperature: Celsius\n  Humidity: %\n  Co2: ppm\n  Pressure: mbar\n  Noise: db\n  Rain: mm\nFor Thermostat:\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  where\nTemperature: Celsius\n  Sp_Temperature (temperature setpoint): Celsius\n  BoilerOn: Duration, since the previous data point, during which the boiler has been on (in seconds)\n  BoilerOff : Duration, since the previous data point, during which the boiler has been off (in seconds).\n  sum_boiler_on: Total duration during which the boiler has been on, at a specific scale (in seconds).\n  sum_boiler_off: Total duration during which the boiler has been off, at a specific scale (in seconds).</param> 
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param> 
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param> 
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param> 
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param> 
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param> 
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param> 
        /// <returns>NAMeasureResponse</returns>            
        public NAMeasureResponse Getmeasure (string deviceId, string scale, string type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime)
        {
            
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Getmeasure");
            
            // verify the required parameter 'scale' is set
            if (scale == null) throw new ApiException(400, "Missing required parameter 'scale' when calling Getmeasure");
            
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling Getmeasure");
            
    
            var path = "/getmeasure";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            if (scale != null) queryParams.Add("scale", ApiClient.ParameterToString(scale)); // query parameter
            if (type != null) queryParams.Add("type", ApiClient.ParameterToString(type)); // query parameter
            if (dateBegin != null) queryParams.Add("date_begin", ApiClient.ParameterToString(dateBegin)); // query parameter
            if (dateEnd != null) queryParams.Add("date_end", ApiClient.ParameterToString(dateEnd)); // query parameter
            if (limit != null) queryParams.Add("limit", ApiClient.ParameterToString(limit)); // query parameter
            if (optimize != null) queryParams.Add("optimize", ApiClient.ParameterToString(optimize)); // query parameter
            if (realTime != null) queryParams.Add("real_time", ApiClient.ParameterToString(realTime)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getmeasure: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Getmeasure: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NAMeasureResponse) ApiClient.Deserialize(response.Content, typeof(NAMeasureResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method getmeasure returns the measurements of a device or a module.
        /// </summary>
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param>
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param>
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if module_id is a rain sensor)\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure, Noise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise, min_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n  Temperature: Celsius\n  Humidity: %\n  Co2: ppm\n  Pressure: mbar\n  Noise: db\n  Rain: mm\nFor Thermostat:\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp, max_temp, sum_boiler_on, sum_boiler_off\n  where\nTemperature: Celsius\n  Sp_Temperature (temperature setpoint): Celsius\n  BoilerOn: Duration, since the previous data point, during which the boiler has been on (in seconds)\n  BoilerOff : Duration, since the previous data point, during which the boiler has been off (in seconds).\n  sum_boiler_on: Total duration during which the boiler has been on, at a specific scale (in seconds).\n  sum_boiler_off: Total duration during which the boiler has been off, at a specific scale (in seconds).</param>
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param>
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param>
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param>
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param>
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param>
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param>
        /// <returns>NAMeasureResponse</returns>
        public async System.Threading.Tasks.Task<NAMeasureResponse> GetmeasureAsync (string deviceId, string scale, string type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime)
        {
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Getmeasure");
            // verify the required parameter 'scale' is set
            if (scale == null) throw new ApiException(400, "Missing required parameter 'scale' when calling Getmeasure");
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling Getmeasure");
            
    
            var path = "/getmeasure";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            if (scale != null) queryParams.Add("scale", ApiClient.ParameterToString(scale)); // query parameter
            if (type != null) queryParams.Add("type", ApiClient.ParameterToString(type)); // query parameter
            if (dateBegin != null) queryParams.Add("date_begin", ApiClient.ParameterToString(dateBegin)); // query parameter
            if (dateEnd != null) queryParams.Add("date_end", ApiClient.ParameterToString(dateEnd)); // query parameter
            if (limit != null) queryParams.Add("limit", ApiClient.ParameterToString(limit)); // query parameter
            if (optimize != null) queryParams.Add("optimize", ApiClient.ParameterToString(optimize)); // query parameter
            if (realTime != null) queryParams.Add("real_time", ApiClient.ParameterToString(realTime)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getmeasure: " + response.Content, response.Content);

            return (NAMeasureResponse) ApiClient.Deserialize(response.Content, typeof(NAMeasureResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param> 
        /// <param name="moduleId">The thermostat id</param> 
        /// <returns>NAThermStateResponse</returns>            
        public NAThermStateResponse Getthermstate (string deviceId, string moduleId)
        {
            
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Getthermstate");
            
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Getthermstate");
            
    
            var path = "/getthermstate";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getthermstate: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Getthermstate: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NAThermStateResponse) ApiClient.Deserialize(response.Content, typeof(NAThermStateResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <returns>NAThermStateResponse</returns>
        public async System.Threading.Tasks.Task<NAThermStateResponse> GetthermstateAsync (string deviceId, string moduleId)
        {
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Getthermstate");
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Getthermstate");
            
    
            var path = "/getthermstate";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getthermstate: " + response.Content, response.Content);

            return (NAThermStateResponse) ApiClient.Deserialize(response.Content, typeof(NAThermStateResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
        /// </summary>
        /// <returns>NAUserResponse</returns>            
        public NAUserResponse Getuser ()
        {
            
    
            var path = "/getuser";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getuser: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Getuser: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NAUserResponse) ApiClient.Deserialize(response.Content, typeof(NAUserResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
        /// </summary>
        /// <returns>NAUserResponse</returns>
        public async System.Threading.Tasks.Task<NAUserResponse> GetuserAsync ()
        {
            
    
            var path = "/getuser";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getuser: " + response.Content, response.Content);

            return (NAUserResponse) ApiClient.Deserialize(response.Content, typeof(NAUserResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method setthermpoint changes the Thermostat manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param> 
        /// <param name="moduleId">The thermostat id</param> 
        /// <param name="setpointMode">Chosen setpoint_mode</param> 
        /// <param name="setpointEndtime">When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.</param> 
        /// <param name="setpointTemp">When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.</param> 
        /// <returns>NAOkResponse</returns>            
        public NAOkResponse Setthermpoint (string deviceId, string moduleId, string setpointMode, int? setpointEndtime, float? setpointTemp)
        {
            
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Setthermpoint");
            
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Setthermpoint");
            
            // verify the required parameter 'setpointMode' is set
            if (setpointMode == null) throw new ApiException(400, "Missing required parameter 'setpointMode' when calling Setthermpoint");
            
    
            var path = "/setthermpoint";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            if (setpointMode != null) queryParams.Add("setpoint_mode", ApiClient.ParameterToString(setpointMode)); // query parameter
            if (setpointEndtime != null) queryParams.Add("setpoint_endtime", ApiClient.ParameterToString(setpointEndtime)); // query parameter
            if (setpointTemp != null) queryParams.Add("setpoint_temp", ApiClient.ParameterToString(setpointTemp)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Setthermpoint: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Setthermpoint: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NAOkResponse) ApiClient.Deserialize(response.Content, typeof(NAOkResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method setthermpoint changes the Thermostat manual temperature setpoint.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="setpointMode">Chosen setpoint_mode</param>
        /// <param name="setpointEndtime">When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.</param>
        /// <param name="setpointTemp">When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.</param>
        /// <returns>NAOkResponse</returns>
        public async System.Threading.Tasks.Task<NAOkResponse> SetthermpointAsync (string deviceId, string moduleId, string setpointMode, int? setpointEndtime, float? setpointTemp)
        {
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Setthermpoint");
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Setthermpoint");
            // verify the required parameter 'setpointMode' is set
            if (setpointMode == null) throw new ApiException(400, "Missing required parameter 'setpointMode' when calling Setthermpoint");
            
    
            var path = "/setthermpoint";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            if (setpointMode != null) queryParams.Add("setpoint_mode", ApiClient.ParameterToString(setpointMode)); // query parameter
            if (setpointEndtime != null) queryParams.Add("setpoint_endtime", ApiClient.ParameterToString(setpointEndtime)); // query parameter
            if (setpointTemp != null) queryParams.Add("setpoint_temp", ApiClient.ParameterToString(setpointTemp)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Setthermpoint: " + response.Content, response.Content);

            return (NAOkResponse) ApiClient.Deserialize(response.Content, typeof(NAOkResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param> 
        /// <param name="moduleId">The thermostat id</param> 
        /// <param name="scheduleId">The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.</param> 
        /// <returns>NAOkResponse</returns>            
        public NAOkResponse Switchschedule (string deviceId, string moduleId, string scheduleId)
        {
            
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Switchschedule");
            
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Switchschedule");
            
            // verify the required parameter 'scheduleId' is set
            if (scheduleId == null) throw new ApiException(400, "Missing required parameter 'scheduleId' when calling Switchschedule");
            
    
            var path = "/switchschedule";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            if (scheduleId != null) queryParams.Add("schedule_id", ApiClient.ParameterToString(scheduleId)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Switchschedule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Switchschedule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NAOkResponse) ApiClient.Deserialize(response.Content, typeof(NAOkResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method switchschedule switches the Thermostat&#39;s schedule to another existing schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="scheduleId">The schedule id. It can be found in the getthermstate response, under the keys \&quot;therm_program_backup\&quot; and \&quot;therm_program\&quot;.</param>
        /// <returns>NAOkResponse</returns>
        public async System.Threading.Tasks.Task<NAOkResponse> SwitchscheduleAsync (string deviceId, string moduleId, string scheduleId)
        {
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Switchschedule");
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Switchschedule");
            // verify the required parameter 'scheduleId' is set
            if (scheduleId == null) throw new ApiException(400, "Missing required parameter 'scheduleId' when calling Switchschedule");
            
    
            var path = "/switchschedule";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            if (scheduleId != null) queryParams.Add("schedule_id", ApiClient.ParameterToString(scheduleId)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Switchschedule: " + response.Content, response.Content);

            return (NAOkResponse) ApiClient.Deserialize(response.Content, typeof(NAOkResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method syncschedule changes the Thermostat weekly schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param> 
        /// <param name="moduleId">The thermostat id</param> 
        /// <param name="thermProgram">The thermostat program (zones, timetable and name)</param> 
        /// <returns>NAOkResponse</returns>            
        public NAOkResponse Syncschedule (string deviceId, string moduleId, NAThermProgram thermProgram)
        {
            
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Syncschedule");
            
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Syncschedule");
            
            // verify the required parameter 'thermProgram' is set
            if (thermProgram == null) throw new ApiException(400, "Missing required parameter 'thermProgram' when calling Syncschedule");
            
    
            var path = "/syncschedule";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            
            
            
            postBody = ApiClient.Serialize(thermProgram); // http body (model) parameter
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Syncschedule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Syncschedule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (NAOkResponse) ApiClient.Deserialize(response.Content, typeof(NAOkResponse), response.Headers);
        }
    
        /// <summary>
        ///  The method syncschedule changes the Thermostat weekly schedule.
        /// </summary>
        /// <param name="deviceId">The relay id</param>
        /// <param name="moduleId">The thermostat id</param>
        /// <param name="thermProgram">The thermostat program (zones, timetable and name)</param>
        /// <returns>NAOkResponse</returns>
        public async System.Threading.Tasks.Task<NAOkResponse> SyncscheduleAsync (string deviceId, string moduleId, NAThermProgram thermProgram)
        {
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Syncschedule");
            // verify the required parameter 'moduleId' is set
            if (moduleId == null) throw new ApiException(400, "Missing required parameter 'moduleId' when calling Syncschedule");
            // verify the required parameter 'thermProgram' is set
            if (thermProgram == null) throw new ApiException(400, "Missing required parameter 'thermProgram' when calling Syncschedule");
            
    
            var path = "/syncschedule";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
            pathParams.Add("format", "json");
            
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (moduleId != null) queryParams.Add("module_id", ApiClient.ParameterToString(moduleId)); // query parameter
            
            
            
            postBody = ApiClient.Serialize(thermProgram); // http body (model) parameter
            
    
            // authentication setting, if any
            String[] authSettings = new String[] { "code_oauth", "password_oauth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Syncschedule: " + response.Content, response.Content);

            return (NAOkResponse) ApiClient.Deserialize(response.Content, typeof(NAOkResponse), response.Headers);
        }
        
    }
    
}
