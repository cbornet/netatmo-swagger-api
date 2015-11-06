module SwaggerClient
  # 
  class NASetpoint < BaseObject
    attr_accessor :setpoint_temp, :setpoint_endtime, :setpoint_mode
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'setpoint_temp' => :'setpoint_temp',
        
        # 
        :'setpoint_endtime' => :'setpoint_endtime',
        
        # 
        :'setpoint_mode' => :'setpoint_mode'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'setpoint_temp' => :'Float',
        :'setpoint_endtime' => :'Integer',
        :'setpoint_mode' => :'String'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'setpoint_temp']
        self.setpoint_temp = attributes[:'setpoint_temp']
      end
      
      if attributes[:'setpoint_endtime']
        self.setpoint_endtime = attributes[:'setpoint_endtime']
      end
      
      if attributes[:'setpoint_mode']
        self.setpoint_mode = attributes[:'setpoint_mode']
      end
      
    end

  end
end
