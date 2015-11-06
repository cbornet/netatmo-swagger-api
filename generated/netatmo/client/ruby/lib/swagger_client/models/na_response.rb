module SwaggerClient
  # 
  class NAResponse < BaseObject
    attr_accessor :status, :time_exec, :time_server
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'status' => :'status',
        
        # 
        :'time_exec' => :'time_exec',
        
        # 
        :'time_server' => :'time_server'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'status' => :'String',
        :'time_exec' => :'Float',
        :'time_server' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'status']
        self.status = attributes[:'status']
      end
      
      if attributes[:'time_exec']
        self.time_exec = attributes[:'time_exec']
      end
      
      if attributes[:'time_server']
        self.time_server = attributes[:'time_server']
      end
      
    end

  end
end
