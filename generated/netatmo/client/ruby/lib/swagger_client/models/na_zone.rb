module SwaggerClient
  # 
  class NAZone < BaseObject
    attr_accessor :id, :type, :name, :temp
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'id' => :'id',
        
        # 
        :'type' => :'type',
        
        # 
        :'name' => :'name',
        
        # 
        :'temp' => :'temp'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'id' => :'Integer',
        :'type' => :'Integer',
        :'name' => :'String',
        :'temp' => :'Float'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'id']
        self.id = attributes[:'id']
      end
      
      if attributes[:'type']
        self.type = attributes[:'type']
      end
      
      if attributes[:'name']
        self.name = attributes[:'name']
      end
      
      if attributes[:'temp']
        self.temp = attributes[:'temp']
      end
      
    end

  end
end
