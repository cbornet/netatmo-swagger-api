package io.swagger.client.model

import org.joda.time.DateTime


case class NAUserAdministrative (
  country: String,  // user country
  lang: String,  // user locale
  reg_locale: String,  // user regional preferences (used for displaying date)
  unit: String,  // 0 -&gt; metric system, 1 -&gt; imperial system
  windunit: String,  // 0 -&gt; kph, 1 -&gt; mph, 2 -&gt; ms, 3 -&gt; beaufort, 4 -&gt; knot
  pressureunit: String,  // 0 -&gt; mbar, 1 -&gt; inHg, 2 -&gt; mmHg
  feel_like_algo: String  // algorithm used to compute feel like temperature, 0 -&gt; humidex, 1 -&gt; heat-index
  
)
