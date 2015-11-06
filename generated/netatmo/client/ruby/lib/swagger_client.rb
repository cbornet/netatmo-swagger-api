# Common files
require 'swagger_client/api_client'
require 'swagger_client/api_error'
require 'swagger_client/version'
require 'swagger_client/configuration'

# Models
require 'swagger_client/models/base_object'
require 'swagger_client/models/access_token'
require 'swagger_client/models/na_response'
require 'swagger_client/models/na_ok_response'
require 'swagger_client/models/na_user_response'
require 'swagger_client/models/na_device_list_response'
require 'swagger_client/models/na_measure_response'
require 'swagger_client/models/na_therm_state_response'
require 'swagger_client/models/na_new_schedule_response'
require 'swagger_client/models/na_partner_devices_response'
require 'swagger_client/models/na_user_body'
require 'swagger_client/models/na_device_list_body'
require 'swagger_client/models/na_measure_body_elem'
require 'swagger_client/models/na_therm_state_body'
require 'swagger_client/models/na_new_schedule_body'
require 'swagger_client/models/na_user_administrative'
require 'swagger_client/models/na_date'
require 'swagger_client/models/na_device'
require 'swagger_client/models/na_module'
require 'swagger_client/models/na_house_model'
require 'swagger_client/models/na_house_model_ca'
require 'swagger_client/models/na_station'
require 'swagger_client/models/na_link_station'
require 'swagger_client/models/na_pid_algo'
require 'swagger_client/models/na_place'
require 'swagger_client/models/na_setpoint'
require 'swagger_client/models/na_therm_program'
require 'swagger_client/models/na_zone'
require 'swagger_client/models/na_time_table_item'
require 'swagger_client/models/na_heating_system'
require 'swagger_client/models/na_simple_algo'
require 'swagger_client/models/na_dashboard_data'
require 'swagger_client/models/na_therm_measure'
require 'swagger_client/models/na_object'

# APIs
require 'swagger_client/api/station_api'
require 'swagger_client/api/oauth_api'
require 'swagger_client/api/thermostat_api'
require 'swagger_client/api/welcome_api'
require 'swagger_client/api/public_api'
require 'swagger_client/api/partner_api'

module SwaggerClient
  class << self
    # Configure sdk using block.
    # SwaggerClient.configure do |config|
    #   config.username = "xxx"
    #   config.password = "xxx"
    # end
    # If no block given, return the configuration singleton instance.
    def configure
      if block_given?
        yield Configuration.instance
      else
        Configuration.instance
      end
    end
  end
end
