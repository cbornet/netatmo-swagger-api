module SwaggerClient
  # 
  class NADeviceListBody < BaseObject
    attr_accessor :devices, :modules
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'devices' => :'devices',
        
        # 
        :'modules' => :'modules'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'devices' => :'Array<NADevice>',
        :'modules' => :'Array<NAModule>'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'devices']
        if (value = attributes[:'devices']).is_a?(Array)
          self.devices = value
        end
      end
      
      if attributes[:'modules']
        if (value = attributes[:'modules']).is_a?(Array)
          self.modules = value
        end
      end
      
    end

  end
end
