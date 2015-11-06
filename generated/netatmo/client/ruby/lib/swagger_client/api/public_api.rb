require "uri"

module SwaggerClient
  class PublicApi
    attr_accessor :api_client

    def initialize(api_client = nil)
      @api_client = api_client || Configuration.api_client
    end

    # 
    # The method getmeasure returns the measurements of a device or a module.
    # @param access_token Your access token
    # @param device_id Id of the device whose module&#39;s measurements you want to retrieve. This _id can be found in the user&#39;s devices field.
    # @param scale Defines the time interval between two measurements.\nPossible values :\nmax -&gt; every value stored will be returned\n30min -&gt; 1 value every 30 minutes\n1hour -&gt; 1 value every hour\n3hours -&gt; 1 value every 3 hours\n1day -&gt; 1 value per day\n1week -&gt; 1 value per week\n1month -&gt; 1 value per month
    # @param type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\&quot;Temperature,Humidity\&quot;\nDepending on the device&#39;s type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -&gt; Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -&gt; Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -&gt; Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -&gt; Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -&gt; Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -&gt; Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).
    # @param [Hash] opts the optional parameters
    # @option opts [String] :module_id If you don&#39;t specify any module_id you will retrieve the device&#39;s measurements. If you specify a module_id you will retrieve the module&#39;s measurements.
    # @option opts [Integer] :date_begin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
    # @option opts [Integer] :date_end Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \&quot;last\&quot;.
    # @option opts [Integer] :limit Limits the number of measurements returned (default &amp; max is 1024)
    # @option opts [BOOLEAN] :optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\&quot;status\&quot;: \&quot;ok\&quot;, \n  \&quot;body\&quot;: {\n    \&quot;1347575400\&quot;: [18.3,39],\n    \&quot;1347586200\&quot;: [20.6,48]\n  },\n\&quot;time_exec\&quot;: 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\&quot;status\&quot;: \&quot;ok\&quot;,\n  \&quot;body\&quot;: [\n    {\&quot;beg_time\&quot;: 1347575400,\n     \&quot;step_time\&quot;: 10800,\n     \&quot;value\&quot;: \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\&quot;time_exec\&quot;: 0.014238119125366}\nDefault value is true.
    # @option opts [BOOLEAN] :real_time In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
    # @return [NAMeasureResponse]
    def getmeasure(access_token, device_id, scale, type, opts = {})
      if Configuration.debugging
        Configuration.logger.debug "Calling API: PublicApi#getmeasure ..."
      end
      
      # verify the required parameter 'access_token' is set
      fail "Missing the required parameter 'access_token' when calling getmeasure" if access_token.nil?
      
      # verify the required parameter 'device_id' is set
      fail "Missing the required parameter 'device_id' when calling getmeasure" if device_id.nil?
      
      # verify the required parameter 'scale' is set
      fail "Missing the required parameter 'scale' when calling getmeasure" if scale.nil?
      unless ['max', '30min', '1hour', '3hours', '1day', '1week', '1month'].include?(scale)
        fail "invalid value for 'scale', must be one of max, 30min, 1hour, 3hours, 1day, 1week, 1month"
      end
      
      # verify the required parameter 'type' is set
      fail "Missing the required parameter 'type' when calling getmeasure" if type.nil?
      
      # resource path
      path = "/api/getmeasure".sub('{format}','json')

      # query parameters
      query_params = {}
      query_params[:'access_token'] = access_token
      query_params[:'device_id'] = device_id
      query_params[:'scale'] = scale
      query_params[:'type'] = type
      query_params[:'module_id'] = opts[:'module_id'] if opts[:'module_id']
      query_params[:'date_begin'] = opts[:'date_begin'] if opts[:'date_begin']
      query_params[:'date_end'] = opts[:'date_end'] if opts[:'date_end']
      query_params[:'limit'] = opts[:'limit'] if opts[:'limit']
      query_params[:'optimize'] = opts[:'optimize'] if opts[:'optimize']
      query_params[:'real_time'] = opts[:'real_time'] if opts[:'real_time']

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = []
      _header_accept_result = @api_client.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = @api_client.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      

      auth_names = []
      result = @api_client.call_api(:GET, path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'NAMeasureResponse')
      if Configuration.debugging
        Configuration.logger.debug "API called: PublicApi#getmeasure. Result: #{result.inspect}"
      end
      return result
    end
  end
end




