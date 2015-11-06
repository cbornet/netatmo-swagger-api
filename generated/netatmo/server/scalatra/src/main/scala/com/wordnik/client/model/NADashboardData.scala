package com.wordnik.client.model



case class NADashboardData (
  time_utc: Int,
  device_id: Float,
  BoilerOn: Int,
  BoilerOff: Int,
  Temperature: Float,
  date_max_temp: Int,
  date_min_temp: Int,
  min_temp: Float,
  max_temp: Float,
  AbsolutePressure: Float,
  CO2: Float,
  Humidity: Float,
  Noise: Float,
  Pressure: Float,
  Rain: Int,
  sum_rain_1: Int,
  sum_rain_24: Int
)
