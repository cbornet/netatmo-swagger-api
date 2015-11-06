module SwaggerClient
  # 
  class NAStation < BaseObject
    attr_accessor :lag_down, :lag_up, :off_overshoot, :on_overshoot, :pk, :tau
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'lag_down' => :'lag_down',
        
        # 
        :'lag_up' => :'lag_up',
        
        # 
        :'off_overshoot' => :'off_overshoot',
        
        # 
        :'on_overshoot' => :'on_overshoot',
        
        # 
        :'pk' => :'pk',
        
        # 
        :'tau' => :'tau'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'lag_down' => :'Integer',
        :'lag_up' => :'Integer',
        :'off_overshoot' => :'Float',
        :'on_overshoot' => :'Float',
        :'pk' => :'Integer',
        :'tau' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'lag_down']
        self.lag_down = attributes[:'lag_down']
      end
      
      if attributes[:'lag_up']
        self.lag_up = attributes[:'lag_up']
      end
      
      if attributes[:'off_overshoot']
        self.off_overshoot = attributes[:'off_overshoot']
      end
      
      if attributes[:'on_overshoot']
        self.on_overshoot = attributes[:'on_overshoot']
      end
      
      if attributes[:'pk']
        self.pk = attributes[:'pk']
      end
      
      if attributes[:'tau']
        self.tau = attributes[:'tau']
      end
      
    end

  end
end
