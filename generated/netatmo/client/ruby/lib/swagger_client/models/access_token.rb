module SwaggerClient
  # 
  class AccessToken < BaseObject
    attr_accessor :access_token, :refresh_token, :expire_in, :expires_in, :scope
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'access_token' => :'access_token',
        
        # 
        :'refresh_token' => :'refresh_token',
        
        # 
        :'expire_in' => :'expire_in',
        
        # 
        :'expires_in' => :'expires_in',
        
        # 
        :'scope' => :'scope'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'access_token' => :'String',
        :'refresh_token' => :'String',
        :'expire_in' => :'Integer',
        :'expires_in' => :'Integer',
        :'scope' => :'Array<String>'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'access_token']
        self.access_token = attributes[:'access_token']
      end
      
      if attributes[:'refresh_token']
        self.refresh_token = attributes[:'refresh_token']
      end
      
      if attributes[:'expire_in']
        self.expire_in = attributes[:'expire_in']
      end
      
      if attributes[:'expires_in']
        self.expires_in = attributes[:'expires_in']
      end
      
      if attributes[:'scope']
        if (value = attributes[:'scope']).is_a?(Array)
          self.scope = value
        end
      end
      
    end

  end
end
