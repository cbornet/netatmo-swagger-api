module SwaggerClient
  # 
  class NALinkStation < BaseObject
    attr_accessor :mac, :ext, :temperature
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'mac' => :'mac',
        
        # 
        :'ext' => :'ext',
        
        # 
        :'temperature' => :'Temperature'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'mac' => :'String',
        :'ext' => :'String',
        :'temperature' => :'Float'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'mac']
        self.mac = attributes[:'mac']
      end
      
      if attributes[:'ext']
        self.ext = attributes[:'ext']
      end
      
      if attributes[:'Temperature']
        self.temperature = attributes[:'Temperature']
      end
      
    end

  end
end
