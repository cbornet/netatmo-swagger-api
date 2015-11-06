module SwaggerClient
  # 
  class NAThermStateBody < BaseObject
    attr_accessor :setpoint, :setpoint_order, :therm_program, :therm_program_backup, :therm_program_order, :therm_orientation, :therm_relay_cmd, :battery_vp, :rf_status, :plug_connected_boiler, :udp_conn, :last_therm_seen, :last_plug_seen, :wifi_status, :measured
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'setpoint' => :'setpoint',
        
        # 
        :'setpoint_order' => :'setpoint_order',
        
        # 
        :'therm_program' => :'therm_program',
        
        # 
        :'therm_program_backup' => :'therm_program_backup',
        
        # 
        :'therm_program_order' => :'therm_program_order',
        
        # 
        :'therm_orientation' => :'therm_orientation',
        
        # 
        :'therm_relay_cmd' => :'therm_relay_cmd',
        
        # 
        :'battery_vp' => :'battery_vp',
        
        # 
        :'rf_status' => :'rf_status',
        
        # 
        :'plug_connected_boiler' => :'plug_connected_boiler',
        
        # 
        :'udp_conn' => :'udp_conn',
        
        # 
        :'last_therm_seen' => :'last_therm_seen',
        
        # 
        :'last_plug_seen' => :'last_plug_seen',
        
        # 
        :'wifi_status' => :'wifi_status',
        
        # 
        :'measured' => :'measured'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'setpoint' => :'NASetpoint',
        :'setpoint_order' => :'NASetpoint',
        :'therm_program' => :'NAThermProgram',
        :'therm_program_backup' => :'Array<NAThermProgram>',
        :'therm_program_order' => :'NAThermProgram',
        :'therm_orientation' => :'Integer',
        :'therm_relay_cmd' => :'Integer',
        :'battery_vp' => :'Integer',
        :'rf_status' => :'Integer',
        :'plug_connected_boiler' => :'BOOLEAN',
        :'udp_conn' => :'BOOLEAN',
        :'last_therm_seen' => :'Integer',
        :'last_plug_seen' => :'Integer',
        :'wifi_status' => :'Integer',
        :'measured' => :'NAThermMeasure'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'setpoint']
        self.setpoint = attributes[:'setpoint']
      end
      
      if attributes[:'setpoint_order']
        self.setpoint_order = attributes[:'setpoint_order']
      end
      
      if attributes[:'therm_program']
        self.therm_program = attributes[:'therm_program']
      end
      
      if attributes[:'therm_program_backup']
        if (value = attributes[:'therm_program_backup']).is_a?(Array)
          self.therm_program_backup = value
        end
      end
      
      if attributes[:'therm_program_order']
        self.therm_program_order = attributes[:'therm_program_order']
      end
      
      if attributes[:'therm_orientation']
        self.therm_orientation = attributes[:'therm_orientation']
      end
      
      if attributes[:'therm_relay_cmd']
        self.therm_relay_cmd = attributes[:'therm_relay_cmd']
      end
      
      if attributes[:'battery_vp']
        self.battery_vp = attributes[:'battery_vp']
      end
      
      if attributes[:'rf_status']
        self.rf_status = attributes[:'rf_status']
      end
      
      if attributes[:'plug_connected_boiler']
        self.plug_connected_boiler = attributes[:'plug_connected_boiler']
      end
      
      if attributes[:'udp_conn']
        self.udp_conn = attributes[:'udp_conn']
      end
      
      if attributes[:'last_therm_seen']
        self.last_therm_seen = attributes[:'last_therm_seen']
      end
      
      if attributes[:'last_plug_seen']
        self.last_plug_seen = attributes[:'last_plug_seen']
      end
      
      if attributes[:'wifi_status']
        self.wifi_status = attributes[:'wifi_status']
      end
      
      if attributes[:'measured']
        self.measured = attributes[:'measured']
      end
      
    end

  end
end
