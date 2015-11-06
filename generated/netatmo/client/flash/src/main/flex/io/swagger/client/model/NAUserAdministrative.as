package io.swagger.client.model {


    [XmlRootNode(name="NAUserAdministrative")]
    public class NAUserAdministrative {
        
        /* user country */
        
        
        [XmlElement(name="country")]
        
        public var country: String = null;
    
        /* user locale */
        
        
        [XmlElement(name="lang")]
        
        public var lang: String = null;
    
        /* user regional preferences (used for displaying date) */
        
        
        [XmlElement(name="reg_locale")]
        
        public var regLocale: String = null;
    
        /* 0 -&gt; metric system, 1 -&gt; imperial system */
        
        
        [XmlElement(name="unit")]
        
        public var unit: String = null;
    
        /* 0 -&gt; kph, 1 -&gt; mph, 2 -&gt; ms, 3 -&gt; beaufort, 4 -&gt; knot */
        
        
        [XmlElement(name="windunit")]
        
        public var windunit: String = null;
    
        /* 0 -&gt; mbar, 1 -&gt; inHg, 2 -&gt; mmHg */
        
        
        [XmlElement(name="pressureunit")]
        
        public var pressureunit: String = null;
    
        /* algorithm used to compute feel like temperature, 0 -&gt; humidex, 1 -&gt; heat-index */
        
        
        [XmlElement(name="feel_like_algo")]
        
        public var feelLikeAlgo: String = null;
    

    public function toString(): String {
        var str: String = "NAUserAdministrative: ";
        
        str += " (country: " + country + ")";
        
        str += " (lang: " + lang + ")";
        
        str += " (regLocale: " + regLocale + ")";
        
        str += " (unit: " + unit + ")";
        
        str += " (windunit: " + windunit + ")";
        
        str += " (pressureunit: " + pressureunit + ")";
        
        str += " (feelLikeAlgo: " + feelLikeAlgo + ")";
        
        return str;
    }

}

}
