package io.swagger.client.model




case class NAUserAdministrative (
  /* user country */
  country: String,
  /* user locale */
  lang: String,
  /* user regional preferences (used for displaying date) */
  reg_locale: String,
  /* 0 -> metric system, 1 -> imperial system */
  unit: String,
  /* 0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot */
  windunit: String,
  /* 0 -> mbar, 1 -> inHg, 2 -> mmHg */
  pressureunit: String,
  /* algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index */
  feel_like_algo: String)
  
