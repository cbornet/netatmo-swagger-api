package io.swagger.client.model




case class NADashboardData (
  time_utc: Integer,
  device_id: Float,
  BoilerOn: Integer,
  BoilerOff: Integer,
  /* Last temperature measure @ time_utc (in °C) */
  Temperature: Float,
  /* Timestamp when max temperature was measured */
  date_max_temp: Integer,
  /* Timestamp when min temperature was measured */
  date_min_temp: Integer,
  /* Max temperature of the day (measured @ date_max_temp) */
  min_temp: Float,
  /* Min temperature of the day (measured @ date_min_temp) */
  max_temp: Float,
  /* Real measured pressure @ time_utc (in mb) */
  AbsolutePressure: Float,
  /* Last Co2 measured @ time_utc (in ppm) */
  CO2: Float,
  /* Last humidity measured @ time_utc (in %) */
  Humidity: Float,
  /* Last noise measured @ time_utc (in db) */
  Noise: Float,
  /* Last Sea level pressure measured @ time_utc (in mb) */
  Pressure: Float,
  /* Last rain measured (in mm) */
  Rain: Integer,
  /* Amount of rain in last hour */
  sum_rain_1: Integer,
  /* Amount of rain today */
  sum_rain_24: Integer)
  
