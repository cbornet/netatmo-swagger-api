module SwaggerClient
  # 
  class NAUserAdministrative < BaseObject
    attr_accessor :country, :lang, :reg_locale, :unit, :windunit, :pressureunit, :feel_like_algo
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # user country
        :'country' => :'country',
        
        # user locale
        :'lang' => :'lang',
        
        # user regional preferences (used for displaying date)
        :'reg_locale' => :'reg_locale',
        
        # 0 -&gt; metric system, 1 -&gt; imperial system
        :'unit' => :'unit',
        
        # 0 -&gt; kph, 1 -&gt; mph, 2 -&gt; ms, 3 -&gt; beaufort, 4 -&gt; knot
        :'windunit' => :'windunit',
        
        # 0 -&gt; mbar, 1 -&gt; inHg, 2 -&gt; mmHg
        :'pressureunit' => :'pressureunit',
        
        # algorithm used to compute feel like temperature, 0 -&gt; humidex, 1 -&gt; heat-index
        :'feel_like_algo' => :'feel_like_algo'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'country' => :'String',
        :'lang' => :'String',
        :'reg_locale' => :'String',
        :'unit' => :'String',
        :'windunit' => :'String',
        :'pressureunit' => :'String',
        :'feel_like_algo' => :'String'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'country']
        self.country = attributes[:'country']
      end
      
      if attributes[:'lang']
        self.lang = attributes[:'lang']
      end
      
      if attributes[:'reg_locale']
        self.reg_locale = attributes[:'reg_locale']
      end
      
      if attributes[:'unit']
        self.unit = attributes[:'unit']
      end
      
      if attributes[:'windunit']
        self.windunit = attributes[:'windunit']
      end
      
      if attributes[:'pressureunit']
        self.pressureunit = attributes[:'pressureunit']
      end
      
      if attributes[:'feel_like_algo']
        self.feel_like_algo = attributes[:'feel_like_algo']
      end
      
    end

  end
end
