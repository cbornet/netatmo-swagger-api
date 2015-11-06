module SwaggerClient
  # 
  class NAModule < BaseObject
    attr_accessor :_id, :date_setup, :firmware, :type, :module_name, :main_device, :last_message, :last_seen, :public_ext_data, :rf_status, :battery_vp, :therm_orientation, :therm_relay_cmd, :dashboard_data, :data_type
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'date_setup' => :'date_setup',
        
        # 
        :'firmware' => :'firmware',
        
        # Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module
        :'type' => :'type',
        
        # 
        :'module_name' => :'module_name',
        
        # 
        :'main_device' => :'main_device',
        
        # 
        :'last_message' => :'last_message',
        
        # 
        :'last_seen' => :'last_seen',
        
        # 
        :'public_ext_data' => :'public_ext_data',
        
        # \&quot;It contains the current radio status. The different thresholds to take into account are :\&quot; |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60
        :'rf_status' => :'rf_status',
        
        # It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\&quot;Indoor module Battery range: 6000 ... 4200\&quot; |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\&quot;Below 4560: very low\&quot; |\n  \n\&quot;Raingauge and outdoor module Battery range: 6000 ... 3600\&quot; |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\&quot;Below 4000: very low\&quot; |\n  \n\&quot;Thermostat Battery range: 4500 ... 3000\&quot; |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\&quot;Below 3000: very low\&quot;
        :'battery_vp' => :'battery_vp',
        
        # 
        :'therm_orientation' => :'therm_orientation',
        
        # 
        :'therm_relay_cmd' => :'therm_relay_cmd',
        
        # It contains all the measurements that can be displayed on the dashboard
        :'dashboard_data' => :'dashboard_data',
        
        # 
        :'data_type' => :'data_type'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'String',
        :'date_setup' => :'NADate',
        :'firmware' => :'Integer',
        :'type' => :'String',
        :'module_name' => :'String',
        :'main_device' => :'String',
        :'last_message' => :'Integer',
        :'last_seen' => :'Integer',
        :'public_ext_data' => :'BOOLEAN',
        :'rf_status' => :'Integer',
        :'battery_vp' => :'Integer',
        :'therm_orientation' => :'Integer',
        :'therm_relay_cmd' => :'Integer',
        :'dashboard_data' => :'NADashboardData',
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
      
      if attributes[:'date_setup']
        self.date_setup = attributes[:'date_setup']
      end
      
      if attributes[:'firmware']
        self.firmware = attributes[:'firmware']
      end
      
      if attributes[:'type']
        self.type = attributes[:'type']
      end
      
      if attributes[:'module_name']
        self.module_name = attributes[:'module_name']
      end
      
      if attributes[:'main_device']
        self.main_device = attributes[:'main_device']
      end
      
      if attributes[:'last_message']
        self.last_message = attributes[:'last_message']
      end
      
      if attributes[:'last_seen']
        self.last_seen = attributes[:'last_seen']
      end
      
      if attributes[:'public_ext_data']
        self.public_ext_data = attributes[:'public_ext_data']
      end
      
      if attributes[:'rf_status']
        self.rf_status = attributes[:'rf_status']
      end
      
      if attributes[:'battery_vp']
        self.battery_vp = attributes[:'battery_vp']
      end
      
      if attributes[:'therm_orientation']
        self.therm_orientation = attributes[:'therm_orientation']
      end
      
      if attributes[:'therm_relay_cmd']
        self.therm_relay_cmd = attributes[:'therm_relay_cmd']
      end
      
      if attributes[:'dashboard_data']
        self.dashboard_data = attributes[:'dashboard_data']
      end
      
      if attributes[:'data_type']
        if (value = attributes[:'data_type']).is_a?(Array)
          self.data_type = value
        end
      end
      
    end

  end
end
