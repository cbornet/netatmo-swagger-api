module SwaggerClient
  # 
  class NAHeatingSystem < BaseObject
    attr_accessor :heating_energy, :heating_system_window_seen
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'heating_energy' => :'heating_energy',
        
        # 
        :'heating_system_window_seen' => :'heating_system_window_seen'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'heating_energy' => :'String',
        :'heating_system_window_seen' => :'BOOLEAN'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'heating_energy']
        self.heating_energy = attributes[:'heating_energy']
      end
      
      if attributes[:'heating_system_window_seen']
        self.heating_system_window_seen = attributes[:'heating_system_window_seen']
      end
      
    end

  end
end
