module SwaggerClient
  # 
  class NADate < BaseObject
    attr_accessor :sec, :usec
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'sec' => :'sec',
        
        # 
        :'usec' => :'usec'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'sec' => :'Integer',
        :'usec' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'sec']
        self.sec = attributes[:'sec']
      end
      
      if attributes[:'usec']
        self.usec = attributes[:'usec']
      end
      
    end

  end
end
