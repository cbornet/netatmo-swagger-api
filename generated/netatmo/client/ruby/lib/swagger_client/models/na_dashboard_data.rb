module SwaggerClient
  # 
  class NADashboardData < BaseObject
    attr_accessor :time_utc, :device_id, :boiler_on, :boiler_off, :temperature, :date_max_temp, :date_min_temp, :min_temp, :max_temp, :absolute_pressure, :co2, :humidity, :noise, :pressure, :rain, :sum_rain_1, :sum_rain_24
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'time_utc' => :'time_utc',
        
        # 
        :'device_id' => :'device_id',
        
        # 
        :'boiler_on' => :'BoilerOn',
        
        # 
        :'boiler_off' => :'BoilerOff',
        
        # Last temperature measure @ time_utc (in °C)
        :'temperature' => :'Temperature',
        
        # Timestamp when max temperature was measured
        :'date_max_temp' => :'date_max_temp',
        
        # Timestamp when min temperature was measured
        :'date_min_temp' => :'date_min_temp',
        
        # Max temperature of the day (measured @ date_max_temp)
        :'min_temp' => :'min_temp',
        
        # Min temperature of the day (measured @ date_min_temp)
        :'max_temp' => :'max_temp',
        
        # Real measured pressure @ time_utc (in mb)
        :'absolute_pressure' => :'AbsolutePressure',
        
        # Last Co2 measured @ time_utc (in ppm)
        :'co2' => :'CO2',
        
        # Last humidity measured @ time_utc (in %)
        :'humidity' => :'Humidity',
        
        # Last noise measured @ time_utc (in db)
        :'noise' => :'Noise',
        
        # Last Sea level pressure measured @ time_utc (in mb)
        :'pressure' => :'Pressure',
        
        # Last rain measured (in mm)
        :'rain' => :'Rain',
        
        # Amount of rain in last hour
        :'sum_rain_1' => :'sum_rain_1',
        
        # Amount of rain today
        :'sum_rain_24' => :'sum_rain_24'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'time_utc' => :'Integer',
        :'device_id' => :'Float',
        :'boiler_on' => :'Integer',
        :'boiler_off' => :'Integer',
        :'temperature' => :'Float',
        :'date_max_temp' => :'Integer',
        :'date_min_temp' => :'Integer',
        :'min_temp' => :'Float',
        :'max_temp' => :'Float',
        :'absolute_pressure' => :'Float',
        :'co2' => :'Float',
        :'humidity' => :'Float',
        :'noise' => :'Float',
        :'pressure' => :'Float',
        :'rain' => :'Integer',
        :'sum_rain_1' => :'Integer',
        :'sum_rain_24' => :'Integer'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'time_utc']
        self.time_utc = attributes[:'time_utc']
      end
      
      if attributes[:'device_id']
        self.device_id = attributes[:'device_id']
      end
      
      if attributes[:'BoilerOn']
        self.boiler_on = attributes[:'BoilerOn']
      end
      
      if attributes[:'BoilerOff']
        self.boiler_off = attributes[:'BoilerOff']
      end
      
      if attributes[:'Temperature']
        self.temperature = attributes[:'Temperature']
      end
      
      if attributes[:'date_max_temp']
        self.date_max_temp = attributes[:'date_max_temp']
      end
      
      if attributes[:'date_min_temp']
        self.date_min_temp = attributes[:'date_min_temp']
      end
      
      if attributes[:'min_temp']
        self.min_temp = attributes[:'min_temp']
      end
      
      if attributes[:'max_temp']
        self.max_temp = attributes[:'max_temp']
      end
      
      if attributes[:'AbsolutePressure']
        self.absolute_pressure = attributes[:'AbsolutePressure']
      end
      
      if attributes[:'CO2']
        self.co2 = attributes[:'CO2']
      end
      
      if attributes[:'Humidity']
        self.humidity = attributes[:'Humidity']
      end
      
      if attributes[:'Noise']
        self.noise = attributes[:'Noise']
      end
      
      if attributes[:'Pressure']
        self.pressure = attributes[:'Pressure']
      end
      
      if attributes[:'Rain']
        self.rain = attributes[:'Rain']
      end
      
      if attributes[:'sum_rain_1']
        self.sum_rain_1 = attributes[:'sum_rain_1']
      end
      
      if attributes[:'sum_rain_24']
        self.sum_rain_24 = attributes[:'sum_rain_24']
      end
      
    end

  end
end
