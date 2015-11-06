module SwaggerClient
  # 
  class NAThermMeasure < BaseObject
    attr_accessor :time, :temperature, :setpoint_temp
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'time' => :'time',
        
        # 
        :'temperature' => :'temperature',
        
        # 
        :'setpoint_temp' => :'setpoint_temp'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'time' => :'Integer',
        :'temperature' => :'Float',
        :'setpoint_temp' => :'Float'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'time']
        self.time = attributes[:'time']
      end
      
      if attributes[:'temperature']
        self.temperature = attributes[:'temperature']
      end
      
      if attributes[:'setpoint_temp']
        self.setpoint_temp = attributes[:'setpoint_temp']
      end
      
    end

  end
end
