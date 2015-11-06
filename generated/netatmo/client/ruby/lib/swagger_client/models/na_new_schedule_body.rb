module SwaggerClient
  # 
  class NANewScheduleBody < BaseObject
    attr_accessor :schedule_id
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # Id of the schedule. It can be use with the method \&quot;switchschedule\&quot;
        :'schedule_id' => :'schedule_id'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'schedule_id' => :'String'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'schedule_id']
        self.schedule_id = attributes[:'schedule_id']
      end
      
    end

  end
end
