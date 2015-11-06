module SwaggerClient
  # 
  class NAMeasureBodyElem < BaseObject
    attr_accessor :beg_time, :step_time, :value
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'beg_time' => :'beg_time',
        
        # 
        :'step_time' => :'step_time',
        
        # 
        :'value' => :'value'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'beg_time' => :'Integer',
        :'step_time' => :'Integer',
        :'value' => :'Array<Array<Float>>'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'beg_time']
        self.beg_time = attributes[:'beg_time']
      end
      
      if attributes[:'step_time']
        self.step_time = attributes[:'step_time']
      end
      
      if attributes[:'value']
        if (value = attributes[:'value']).is_a?(Array)
          self.value = value
        end
      end
      
    end

  end
end
