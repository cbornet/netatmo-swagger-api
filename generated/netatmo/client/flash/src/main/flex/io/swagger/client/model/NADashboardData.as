package io.swagger.client.model {


    [XmlRootNode(name="NADashboardData")]
    public class NADashboardData {
        
        
        
        [XmlElement(name="time_utc")]
        
        public var timeUtc: Number = 0;
    
        
        
        [XmlElement(name="device_id")]
        
        public var deviceId: Number = 0.0;
    
        
        
        [XmlElement(name="BoilerOn")]
        
        public var boilerOn: Number = 0;
    
        
        
        [XmlElement(name="BoilerOff")]
        
        public var boilerOff: Number = 0;
    
        /* Last temperature measure @ time_utc (in °C) */
        
        
        [XmlElement(name="Temperature")]
        
        public var temperature: Number = 0.0;
    
        /* Timestamp when max temperature was measured */
        
        
        [XmlElement(name="date_max_temp")]
        
        public var dateMaxTemp: Number = 0;
    
        /* Timestamp when min temperature was measured */
        
        
        [XmlElement(name="date_min_temp")]
        
        public var dateMinTemp: Number = 0;
    
        /* Max temperature of the day (measured @ date_max_temp) */
        
        
        [XmlElement(name="min_temp")]
        
        public var minTemp: Number = 0.0;
    
        /* Min temperature of the day (measured @ date_min_temp) */
        
        
        [XmlElement(name="max_temp")]
        
        public var maxTemp: Number = 0.0;
    
        /* Real measured pressure @ time_utc (in mb) */
        
        
        [XmlElement(name="AbsolutePressure")]
        
        public var absolutePressure: Number = 0.0;
    
        /* Last Co2 measured @ time_utc (in ppm) */
        
        
        [XmlElement(name="CO2")]
        
        public var cO2: Number = 0.0;
    
        /* Last humidity measured @ time_utc (in %) */
        
        
        [XmlElement(name="Humidity")]
        
        public var humidity: Number = 0.0;
    
        /* Last noise measured @ time_utc (in db) */
        
        
        [XmlElement(name="Noise")]
        
        public var noise: Number = 0.0;
    
        /* Last Sea level pressure measured @ time_utc (in mb) */
        
        
        [XmlElement(name="Pressure")]
        
        public var pressure: Number = 0.0;
    
        /* Last rain measured (in mm) */
        
        
        [XmlElement(name="Rain")]
        
        public var rain: Number = 0;
    
        /* Amount of rain in last hour */
        
        
        [XmlElement(name="sum_rain_1")]
        
        public var sumRain1: Number = 0;
    
        /* Amount of rain today */
        
        
        [XmlElement(name="sum_rain_24")]
        
        public var sumRain24: Number = 0;
    

    public function toString(): String {
        var str: String = "NADashboardData: ";
        
        str += " (timeUtc: " + timeUtc + ")";
        
        str += " (deviceId: " + deviceId + ")";
        
        str += " (boilerOn: " + boilerOn + ")";
        
        str += " (boilerOff: " + boilerOff + ")";
        
        str += " (temperature: " + temperature + ")";
        
        str += " (dateMaxTemp: " + dateMaxTemp + ")";
        
        str += " (dateMinTemp: " + dateMinTemp + ")";
        
        str += " (minTemp: " + minTemp + ")";
        
        str += " (maxTemp: " + maxTemp + ")";
        
        str += " (absolutePressure: " + absolutePressure + ")";
        
        str += " (cO2: " + cO2 + ")";
        
        str += " (humidity: " + humidity + ")";
        
        str += " (noise: " + noise + ")";
        
        str += " (pressure: " + pressure + ")";
        
        str += " (rain: " + rain + ")";
        
        str += " (sumRain1: " + sumRain1 + ")";
        
        str += " (sumRain24: " + sumRain24 + ")";
        
        return str;
    }

}

}
