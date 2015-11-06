package io.swagger.client.model

import org.joda.time.DateTime


case class NADashboardData (
  time_utc: Integer,
  device_id: Float,
  BoilerOn: Integer,
  BoilerOff: Integer,
  Temperature: Float,  // Last temperature measure @ time_utc (in °C)
  date_max_temp: Integer,  // Timestamp when max temperature was measured
  date_min_temp: Integer,  // Timestamp when min temperature was measured
  min_temp: Float,  // Max temperature of the day (measured @ date_max_temp)
  max_temp: Float,  // Min temperature of the day (measured @ date_min_temp)
  AbsolutePressure: Float,  // Real measured pressure @ time_utc (in mb)
  CO2: Float,  // Last Co2 measured @ time_utc (in ppm)
  Humidity: Float,  // Last humidity measured @ time_utc (in %)
  Noise: Float,  // Last noise measured @ time_utc (in db)
  Pressure: Float,  // Last Sea level pressure measured @ time_utc (in mb)
  Rain: Integer,  // Last rain measured (in mm)
  sum_rain_1: Integer,  // Amount of rain in last hour
  sum_rain_24: Integer  // Amount of rain today
  
)
