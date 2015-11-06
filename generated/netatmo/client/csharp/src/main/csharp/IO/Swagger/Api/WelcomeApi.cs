using System;
using System.IO;
using System.Collections.Generic;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IWelcomeApi
    {
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
        /// </remarks>
        /// <param name="accessToken">Your access token</param>
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param>
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param>
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param>
        /// <returns>NADeviceListResponse</returns>
        NADeviceListResponse Devicelist (string accessToken, string appType, string deviceId, bool? getFavorites);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
        /// </remarks>
        /// <param name="accessToken">Your access token</param>
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param>
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param>
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param>
        /// <returns>NADeviceListResponse</returns>
        System.Threading.Tasks.Task<NADeviceListResponse> DevicelistAsync (string accessToken, string appType, string deviceId, bool? getFavorites);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// The method getmeasure returns the measurements of a device or a module.
        /// </remarks>
        /// <param name="accessToken">Your access token</param>
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param>
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param>
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).</param>
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param>
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param>
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param>
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param>
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param>
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param>
        /// <returns>NAMeasureResponse</returns>
        NAMeasureResponse Getmeasure (string accessToken, string deviceId, string scale, List<string> type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// The method getmeasure returns the measurements of a device or a module.
        /// </remarks>
        /// <param name="accessToken">Your access token</param>
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param>
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param>
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).</param>
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param>
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param>
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param>
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param>
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param>
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param>
        /// <returns>NAMeasureResponse</returns>
        System.Threading.Tasks.Task<NAMeasureResponse> GetmeasureAsync (string accessToken, string deviceId, string scale, List<string> type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime);
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
        /// </remarks>
        /// <param name="accessToken">Your access token</param>
        /// <returns>NAUserResponse</returns>
        NAUserResponse Getuser (string accessToken);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
        /// </remarks>
        /// <param name="accessToken">Your access token</param>
        /// <returns>NAUserResponse</returns>
        System.Threading.Tasks.Task<NAUserResponse> GetuserAsync (string accessToken);
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class WelcomeApi : IWelcomeApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="WelcomeApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public WelcomeApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="WelcomeApi"/> class.
        /// </summary>
        /// <returns></returns>
        public WelcomeApi(String basePath)
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
        /// <value>An instance of the ApiClient</value>
        public ApiClient ApiClient {get; set;}
    
        
        /// <summary>
        ///  The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
        /// </summary>
        /// <param name="accessToken">Your access token</param> 
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param> 
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param> 
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param> 
        /// <returns>NADeviceListResponse</returns>            
        public NADeviceListResponse Devicelist (string accessToken, string appType, string deviceId, bool? getFavorites)
        {
            
            // verify the required parameter 'accessToken' is set
            if (accessToken == null) throw new ApiException(400, "Missing required parameter 'accessToken' when calling Devicelist");
            
    
            var path = "/api/devicelist";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            if (accessToken != null) queryParams.Add("access_token", ApiClient.ParameterToString(accessToken)); // query parameter
            if (appType != null) queryParams.Add("app_type", ApiClient.ParameterToString(appType)); // query parameter
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (getFavorites != null) queryParams.Add("get_favorites", ApiClient.ParameterToString(getFavorites)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] {  };
    
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
        /// <param name="accessToken">Your access token</param>
        /// <param name="appType">Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)</param>
        /// <param name="deviceId">Specify a device_id if you want to retrieve only this device informations.</param>
        /// <param name="getFavorites">When set to \&quot;true\&quot;, the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.</param>
        /// <returns>NADeviceListResponse</returns>
        public async System.Threading.Tasks.Task<NADeviceListResponse> DevicelistAsync (string accessToken, string appType, string deviceId, bool? getFavorites)
        {
            // verify the required parameter 'accessToken' is set
            if (accessToken == null) throw new ApiException(400, "Missing required parameter 'accessToken' when calling Devicelist");
            
    
            var path = "/api/devicelist";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            if (accessToken != null) queryParams.Add("access_token", ApiClient.ParameterToString(accessToken)); // query parameter
            if (appType != null) queryParams.Add("app_type", ApiClient.ParameterToString(appType)); // query parameter
            if (deviceId != null) queryParams.Add("device_id", ApiClient.ParameterToString(deviceId)); // query parameter
            if (getFavorites != null) queryParams.Add("get_favorites", ApiClient.ParameterToString(getFavorites)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] {  };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Devicelist: " + response.Content, response.Content);

            return (NADeviceListResponse) ApiClient.Deserialize(response.Content, typeof(NADeviceListResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method getmeasure returns the measurements of a device or a module.
        /// </summary>
        /// <param name="accessToken">Your access token</param> 
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param> 
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param> 
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).</param> 
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param> 
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param> 
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param> 
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param> 
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param> 
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param> 
        /// <returns>NAMeasureResponse</returns>            
        public NAMeasureResponse Getmeasure (string accessToken, string deviceId, string scale, List<string> type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime)
        {
            
            // verify the required parameter 'accessToken' is set
            if (accessToken == null) throw new ApiException(400, "Missing required parameter 'accessToken' when calling Getmeasure");
            
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Getmeasure");
            
            // verify the required parameter 'scale' is set
            if (scale == null) throw new ApiException(400, "Missing required parameter 'scale' when calling Getmeasure");
            
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling Getmeasure");
            
    
            var path = "/api/getmeasure";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            if (accessToken != null) queryParams.Add("access_token", ApiClient.ParameterToString(accessToken)); // query parameter
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
            String[] authSettings = new String[] {  };
    
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
        /// <param name="accessToken">Your access token</param>
        /// <param name="deviceId">Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.</param>
        /// <param name="scale">Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month</param>
        /// <param name="type">Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).</param>
        /// <param name="moduleId">If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.</param>
        /// <param name="dateBegin">Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.</param>
        /// <param name="dateEnd">Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.</param>
        /// <param name="limit">Limits the number of measurements returned (default &amp; max is 1024)</param>
        /// <param name="optimize">Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.</param>
        /// <param name="realTime">In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.</param>
        /// <returns>NAMeasureResponse</returns>
        public async System.Threading.Tasks.Task<NAMeasureResponse> GetmeasureAsync (string accessToken, string deviceId, string scale, List<string> type, string moduleId, int? dateBegin, int? dateEnd, int? limit, bool? optimize, bool? realTime)
        {
            // verify the required parameter 'accessToken' is set
            if (accessToken == null) throw new ApiException(400, "Missing required parameter 'accessToken' when calling Getmeasure");
            // verify the required parameter 'deviceId' is set
            if (deviceId == null) throw new ApiException(400, "Missing required parameter 'deviceId' when calling Getmeasure");
            // verify the required parameter 'scale' is set
            if (scale == null) throw new ApiException(400, "Missing required parameter 'scale' when calling Getmeasure");
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling Getmeasure");
            
    
            var path = "/api/getmeasure";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            if (accessToken != null) queryParams.Add("access_token", ApiClient.ParameterToString(accessToken)); // query parameter
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
            String[] authSettings = new String[] {  };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getmeasure: " + response.Content, response.Content);

            return (NAMeasureResponse) ApiClient.Deserialize(response.Content, typeof(NAMeasureResponse), response.Headers);
        }
        
        /// <summary>
        ///  The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
        /// </summary>
        /// <param name="accessToken">Your access token</param> 
        /// <returns>NAUserResponse</returns>            
        public NAUserResponse Getuser (string accessToken)
        {
            
            // verify the required parameter 'accessToken' is set
            if (accessToken == null) throw new ApiException(400, "Missing required parameter 'accessToken' when calling Getuser");
            
    
            var path = "/api/getuser";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            if (accessToken != null) queryParams.Add("access_token", ApiClient.ParameterToString(accessToken)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] {  };
    
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
        /// <param name="accessToken">Your access token</param>
        /// <returns>NAUserResponse</returns>
        public async System.Threading.Tasks.Task<NAUserResponse> GetuserAsync (string accessToken)
        {
            // verify the required parameter 'accessToken' is set
            if (accessToken == null) throw new ApiException(400, "Missing required parameter 'accessToken' when calling Getuser");
            
    
            var path = "/api/getuser";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            if (accessToken != null) queryParams.Add("access_token", ApiClient.ParameterToString(accessToken)); // query parameter
            
            
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] {  };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling Getuser: " + response.Content, response.Content);

            return (NAUserResponse) ApiClient.Deserialize(response.Content, typeof(NAUserResponse), response.Headers);
        }
        
    }
    
}
