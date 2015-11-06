module SwaggerClient
  # 
  class NAPidAlgo < BaseObject
    attr_accessor :gain, :period, :td, :ti
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'gain' => :'gain',
        
        # 
        :'period' => :'period',
        
        # 
        :'td' => :'td',
        
        # 
        :'ti' => :'ti'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'gain' => :'Integer',
        :'period' => :'Integer',
        :'td' => :'Integer',
        :'ti' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'gain']
        self.gain = attributes[:'gain']
      end
      
      if attributes[:'period']
        self.period = attributes[:'period']
      end
      
      if attributes[:'td']
        self.td = attributes[:'td']
      end
      
      if attributes[:'ti']
        self.ti = attributes[:'ti']
      end
      
    end

  end
end
