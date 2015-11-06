module SwaggerClient
  # 
  class NAThermProgram < BaseObject
    attr_accessor :program_id, :name, :zones, :timetable, :selected
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'program_id' => :'program_id',
        
        # 
        :'name' => :'name',
        
        # 
        :'zones' => :'zones',
        
        # 
        :'timetable' => :'timetable',
        
        # 
        :'selected' => :'selected'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'program_id' => :'String',
        :'name' => :'String',
        :'zones' => :'Array<NAZone>',
        :'timetable' => :'Array<NATimeTableItem>',
        :'selected' => :'BOOLEAN'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'program_id']
        self.program_id = attributes[:'program_id']
      end
      
      if attributes[:'name']
        self.name = attributes[:'name']
      end
      
      if attributes[:'zones']
        if (value = attributes[:'zones']).is_a?(Array)
          self.zones = value
        end
      end
      
      if attributes[:'timetable']
        if (value = attributes[:'timetable']).is_a?(Array)
          self.timetable = value
        end
      end
      
      if attributes[:'selected']
        self.selected = attributes[:'selected']
      end
      
    end

  end
end
