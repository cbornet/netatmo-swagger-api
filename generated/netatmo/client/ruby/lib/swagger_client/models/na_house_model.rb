module SwaggerClient
  # 
  class NAHouseModel < BaseObject
    attr_accessor :algo_type, :ca, :ext_temps, :first_anticipate_avail, :first_pid_avail, :gefs, :in_use, :last_compute_try, :link_station, :pid_algo, :station, :prefered_algo_type, :simple_algo, :time, :station_firsttime_anticipate, :time_algo_changed, :time_pid_computed
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'algo_type' => :'algo_type',
        
        # 
        :'ca' => :'ca',
        
        # 
        :'ext_temps' => :'ext_temps',
        
        # 
        :'first_anticipate_avail' => :'first_anticipate_avail',
        
        # 
        :'first_pid_avail' => :'first_pid_avail',
        
        # 
        :'gefs' => :'gefs',
        
        # 
        :'in_use' => :'in_use',
        
        # 
        :'last_compute_try' => :'last_compute_try',
        
        # 
        :'link_station' => :'link_station',
        
        # 
        :'pid_algo' => :'pid_algo',
        
        # 
        :'station' => :'station',
        
        # 
        :'prefered_algo_type' => :'prefered_algo_type',
        
        # 
        :'simple_algo' => :'simple_algo',
        
        # 
        :'time' => :'time',
        
        # 
        :'station_firsttime_anticipate' => :'station_firsttime_anticipate',
        
        # 
        :'time_algo_changed' => :'time_algo_changed',
        
        # 
        :'time_pid_computed' => :'time_pid_computed'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'algo_type' => :'String',
        :'ca' => :'NAHouseModelCa',
        :'ext_temps' => :'Hash<String, Integer>',
        :'first_anticipate_avail' => :'BOOLEAN',
        :'first_pid_avail' => :'BOOLEAN',
        :'gefs' => :'NAStation',
        :'in_use' => :'String',
        :'last_compute_try' => :'NADate',
        :'link_station' => :'NALinkStation',
        :'pid_algo' => :'NAPidAlgo',
        :'station' => :'NAStation',
        :'prefered_algo_type' => :'String',
        :'simple_algo' => :'NASimpleAlgo',
        :'time' => :'NADate',
        :'station_firsttime_anticipate' => :'BOOLEAN',
        :'time_algo_changed' => :'Integer',
        :'time_pid_computed' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'algo_type']
        self.algo_type = attributes[:'algo_type']
      end
      
      if attributes[:'ca']
        self.ca = attributes[:'ca']
      end
      
      if attributes[:'ext_temps']
        if (value = attributes[:'ext_temps']).is_a?(Array)
          self.ext_temps = value
        end
      end
      
      if attributes[:'first_anticipate_avail']
        self.first_anticipate_avail = attributes[:'first_anticipate_avail']
      end
      
      if attributes[:'first_pid_avail']
        self.first_pid_avail = attributes[:'first_pid_avail']
      end
      
      if attributes[:'gefs']
        self.gefs = attributes[:'gefs']
      end
      
      if attributes[:'in_use']
        self.in_use = attributes[:'in_use']
      end
      
      if attributes[:'last_compute_try']
        self.last_compute_try = attributes[:'last_compute_try']
      end
      
      if attributes[:'link_station']
        self.link_station = attributes[:'link_station']
      end
      
      if attributes[:'pid_algo']
        self.pid_algo = attributes[:'pid_algo']
      end
      
      if attributes[:'station']
        self.station = attributes[:'station']
      end
      
      if attributes[:'prefered_algo_type']
        self.prefered_algo_type = attributes[:'prefered_algo_type']
      end
      
      if attributes[:'simple_algo']
        self.simple_algo = attributes[:'simple_algo']
      end
      
      if attributes[:'time']
        self.time = attributes[:'time']
      end
      
      if attributes[:'station_firsttime_anticipate']
        self.station_firsttime_anticipate = attributes[:'station_firsttime_anticipate']
      end
      
      if attributes[:'time_algo_changed']
        self.time_algo_changed = attributes[:'time_algo_changed']
      end
      
      if attributes[:'time_pid_computed']
        self.time_pid_computed = attributes[:'time_pid_computed']
      end
      
    end

  end
end
