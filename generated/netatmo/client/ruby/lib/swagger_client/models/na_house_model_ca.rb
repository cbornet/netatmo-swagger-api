module SwaggerClient
  # 
  class NAHouseModelCa < BaseObject
    attr_accessor :te, :ti, :so
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'te' => :'te',
        
        # 
        :'ti' => :'ti',
        
        # 
        :'so' => :'so'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'te' => :'Float',
        :'ti' => :'Integer',
        :'so' => :'String'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'te']
        self.te = attributes[:'te']
      end
      
      if attributes[:'ti']
        self.ti = attributes[:'ti']
      end
      
      if attributes[:'so']
        self.so = attributes[:'so']
      end
      
    end

  end
end
