module SwaggerClient
  # 
  class NAUserBody < BaseObject
    attr_accessor :_id, :administrative, :date_creation, :devices, :friend_devices, :mail, :timeline_not_read, :timeline_size
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # Contains administrative information related to the user
        :'administrative' => :'administrative',
        
        # 
        :'date_creation' => :'date_creation',
        
        # An array of string containing the ids of the devices owned by the user
        :'devices' => :'devices',
        
        # An array of string containing the ids of the devices on which the user has a \&quot;guest\&quot; access
        :'friend_devices' => :'friend_devices',
        
        # 
        :'mail' => :'mail',
        
        # 
        :'timeline_not_read' => :'timeline_not_read',
        
        # 
        :'timeline_size' => :'timeline_size'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'String',
        :'administrative' => :'NAUserAdministrative',
        :'date_creation' => :'NADate',
        :'devices' => :'Array<String>',
        :'friend_devices' => :'Array<String>',
        :'mail' => :'String',
        :'timeline_not_read' => :'Integer',
        :'timeline_size' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        self._id = attributes[:'_id']
      end
      
      if attributes[:'administrative']
        self.administrative = attributes[:'administrative']
      end
      
      if attributes[:'date_creation']
        self.date_creation = attributes[:'date_creation']
      end
      
      if attributes[:'devices']
        if (value = attributes[:'devices']).is_a?(Array)
          self.devices = value
        end
      end
      
      if attributes[:'friend_devices']
        if (value = attributes[:'friend_devices']).is_a?(Array)
          self.friend_devices = value
        end
      end
      
      if attributes[:'mail']
        self.mail = attributes[:'mail']
      end
      
      if attributes[:'timeline_not_read']
        self.timeline_not_read = attributes[:'timeline_not_read']
      end
      
      if attributes[:'timeline_size']
        self.timeline_size = attributes[:'timeline_size']
      end
      
    end

  end
end
