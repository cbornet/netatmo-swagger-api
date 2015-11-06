module SwaggerClient
  # 
  class NADevice < BaseObject
    attr_accessor :_id, :behavior, :cipher_id, :date_setup, :firmware, :hw_version, :heating_system, :house_model, :ip, :last_fw_update, :last_radio_store, :last_status_store, :last_upgrade, :module_name, :modules, :place, :setpoint, :setpoint_default_duration, :setpoint_order, :public_ext_data, :station_name, :therm_program, :therm_program_backup, :therm_program_order, :type, :user_owner, :udp_conn, :wifi_status, :new_feature_avail, :first_pid_avail, :data_type
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'behavior' => :'behavior',
        
        # 
        :'cipher_id' => :'cipher_id',
        
        # 
        :'date_setup' => :'date_setup',
        
        # 
        :'firmware' => :'firmware',
        
        # 
        :'hw_version' => :'hw_version',
        
        # 
        :'heating_system' => :'heating_system',
        
        # 
        :'house_model' => :'house_model',
        
        # 
        :'ip' => :'ip',
        
        # 
        :'last_fw_update' => :'last_fw_update',
        
        # 
        :'last_radio_store' => :'last_radio_store',
        
        # 
        :'last_status_store' => :'last_status_store',
        
        # 
        :'last_upgrade' => :'last_upgrade',
        
        # 
        :'module_name' => :'module_name',
        
        # It lists which modules are linked with this device
        :'modules' => :'modules',
        
        # 
        :'place' => :'place',
        
        # 
        :'setpoint' => :'setpoint',
        
        # 
        :'setpoint_default_duration' => :'setpoint_default_duration',
        
        # 
        :'setpoint_order' => :'setpoint_order',
        
        # 
        :'public_ext_data' => :'public_ext_data',
        
        # 
        :'station_name' => :'station_name',
        
        # 
        :'therm_program' => :'therm_program',
        
        # 
        :'therm_program_backup' => :'therm_program_backup',
        
        # 
        :'therm_program_order' => :'therm_program_order',
        
        # Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module
        :'type' => :'type',
        
        # 
        :'user_owner' => :'user_owner',
        
        # 
        :'udp_conn' => :'udp_conn',
        
        # It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal
        :'wifi_status' => :'wifi_status',
        
        # 
        :'new_feature_avail' => :'new_feature_avail',
        
        # 
        :'first_pid_avail' => :'first_pid_avail',
        
        # 
        :'data_type' => :'data_type'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'String',
        :'behavior' => :'Integer',
        :'cipher_id' => :'String',
        :'date_setup' => :'NADate',
        :'firmware' => :'Integer',
        :'hw_version' => :'Integer',
        :'heating_system' => :'NAHeatingSystem',
        :'house_model' => :'NAHouseModel',
        :'ip' => :'String',
        :'last_fw_update' => :'Integer',
        :'last_radio_store' => :'Integer',
        :'last_status_store' => :'Integer',
        :'last_upgrade' => :'Integer',
        :'module_name' => :'String',
        :'modules' => :'Array<String>',
        :'place' => :'NAPlace',
        :'setpoint' => :'Object',
        :'setpoint_default_duration' => :'Integer',
        :'setpoint_order' => :'Hash<String, Array<NAObject>>',
        :'public_ext_data' => :'BOOLEAN',
        :'station_name' => :'String',
        :'therm_program' => :'Hash<String, NAThermProgram>',
        :'therm_program_backup' => :'Hash<String, Array<NAThermProgram>>',
        :'therm_program_order' => :'Hash<String, Array<NAObject>>',
        :'type' => :'String',
        :'user_owner' => :'Array<String>',
        :'udp_conn' => :'BOOLEAN',
        :'wifi_status' => :'Integer',
        :'new_feature_avail' => :'BOOLEAN',
        :'first_pid_avail' => :'BOOLEAN',
        :'data_type' => :'Array<String>'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        self._id = attributes[:'_id']
      end
      
      if attributes[:'behavior']
        self.behavior = attributes[:'behavior']
      end
      
      if attributes[:'cipher_id']
        self.cipher_id = attributes[:'cipher_id']
      end
      
      if attributes[:'date_setup']
        self.date_setup = attributes[:'date_setup']
      end
      
      if attributes[:'firmware']
        self.firmware = attributes[:'firmware']
      end
      
      if attributes[:'hw_version']
        self.hw_version = attributes[:'hw_version']
      end
      
      if attributes[:'heating_system']
        self.heating_system = attributes[:'heating_system']
      end
      
      if attributes[:'house_model']
        self.house_model = attributes[:'house_model']
      end
      
      if attributes[:'ip']
        self.ip = attributes[:'ip']
      end
      
      if attributes[:'last_fw_update']
        self.last_fw_update = attributes[:'last_fw_update']
      end
      
      if attributes[:'last_radio_store']
        self.last_radio_store = attributes[:'last_radio_store']
      end
      
      if attributes[:'last_status_store']
        self.last_status_store = attributes[:'last_status_store']
      end
      
      if attributes[:'last_upgrade']
        self.last_upgrade = attributes[:'last_upgrade']
      end
      
      if attributes[:'module_name']
        self.module_name = attributes[:'module_name']
      end
      
      if attributes[:'modules']
        if (value = attributes[:'modules']).is_a?(Array)
          self.modules = value
        end
      end
      
      if attributes[:'place']
        self.place = attributes[:'place']
      end
      
      if attributes[:'setpoint']
        self.setpoint = attributes[:'setpoint']
      end
      
      if attributes[:'setpoint_default_duration']
        self.setpoint_default_duration = attributes[:'setpoint_default_duration']
      end
      
      if attributes[:'setpoint_order']
        if (value = attributes[:'setpoint_order']).is_a?(Array)
          self.setpoint_order = value
        end
      end
      
      if attributes[:'public_ext_data']
        self.public_ext_data = attributes[:'public_ext_data']
      end
      
      if attributes[:'station_name']
        self.station_name = attributes[:'station_name']
      end
      
      if attributes[:'therm_program']
        if (value = attributes[:'therm_program']).is_a?(Array)
          self.therm_program = value
        end
      end
      
      if attributes[:'therm_program_backup']
        if (value = attributes[:'therm_program_backup']).is_a?(Array)
          self.therm_program_backup = value
        end
      end
      
      if attributes[:'therm_program_order']
        if (value = attributes[:'therm_program_order']).is_a?(Array)
          self.therm_program_order = value
        end
      end
      
      if attributes[:'type']
        self.type = attributes[:'type']
      end
      
      if attributes[:'user_owner']
        if (value = attributes[:'user_owner']).is_a?(Array)
          self.user_owner = value
        end
      end
      
      if attributes[:'udp_conn']
        self.udp_conn = attributes[:'udp_conn']
      end
      
      if attributes[:'wifi_status']
        self.wifi_status = attributes[:'wifi_status']
      end
      
      if attributes[:'new_feature_avail']
        self.new_feature_avail = attributes[:'new_feature_avail']
      end
      
      if attributes[:'first_pid_avail']
        self.first_pid_avail = attributes[:'first_pid_avail']
      end
      
      if attributes[:'data_type']
        if (value = attributes[:'data_type']).is_a?(Array)
          self.data_type = value
        end
      end
      
    end

  end
end
