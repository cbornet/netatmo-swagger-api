module SwaggerClient
  # 
  class NAMeasureResponse < BaseObject
    attr_accessor :time_server, :time_exec, :body, :status
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'time_server' => :'time_server',
        
        # 
        :'time_exec' => :'time_exec',
        
        # 
        :'body' => :'body',
        
        # 
        :'status' => :'status'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'time_server' => :'Integer',
        :'time_exec' => :'Float',
        :'body' => :'Array<NAMeasureBodyElem>',
        :'status' => :'String'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'time_server']
        self.time_server = attributes[:'time_server']
      end
      
      if attributes[:'time_exec']
        self.time_exec = attributes[:'time_exec']
      end
      
      if attributes[:'body']
        if (value = attributes[:'body']).is_a?(Array)
          self.body = value
        end
      end
      
      if attributes[:'status']
        self.status = attributes[:'status']
      end
      
    end

  end
end
