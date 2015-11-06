module SwaggerClient
  # 
  class NAPlace < BaseObject
    attr_accessor :city, :altitude, :country, :from_ip, :improve_loc_proposed, :location, :timezone, :trust_location
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'city' => :'city',
        
        # 
        :'altitude' => :'altitude',
        
        # 
        :'country' => :'country',
        
        # 
        :'from_ip' => :'from_ip',
        
        # 
        :'improve_loc_proposed' => :'improveLocProposed',
        
        # 
        :'location' => :'location',
        
        # 
        :'timezone' => :'timezone',
        
        # 
        :'trust_location' => :'trust_location'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'city' => :'String',
        :'altitude' => :'Float',
        :'country' => :'String',
        :'from_ip' => :'BOOLEAN',
        :'improve_loc_proposed' => :'BOOLEAN',
        :'location' => :'Array<Float>',
        :'timezone' => :'String',
        :'trust_location' => :'BOOLEAN'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'city']
        self.city = attributes[:'city']
      end
      
      if attributes[:'altitude']
        self.altitude = attributes[:'altitude']
      end
      
      if attributes[:'country']
        self.country = attributes[:'country']
      end
      
      if attributes[:'from_ip']
        self.from_ip = attributes[:'from_ip']
      end
      
      if attributes[:'improveLocProposed']
        self.improve_loc_proposed = attributes[:'improveLocProposed']
      end
      
      if attributes[:'location']
        if (value = attributes[:'location']).is_a?(Array)
          self.location = value
        end
      end
      
      if attributes[:'timezone']
        self.timezone = attributes[:'timezone']
      end
      
      if attributes[:'trust_location']
        self.trust_location = attributes[:'trust_location']
      end
      
    end

  end
end
