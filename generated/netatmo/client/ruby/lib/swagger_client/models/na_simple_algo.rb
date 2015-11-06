module SwaggerClient
  # 
  class NASimpleAlgo < BaseObject
    attr_accessor :high_deadband
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'high_deadband' => :'high_deadband'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'high_deadband' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'high_deadband']
        self.high_deadband = attributes[:'high_deadband']
      end
      
    end

  end
end
