package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NADashboardData (
  timeUtc: Option[Int],
  deviceId: Option[Float],
  boilerOn: Option[Int],
  boilerOff: Option[Int],
  /* Last temperature measure @ time_utc (in °C) */
  temperature: Option[Float],
  /* Timestamp when max temperature was measured */
  dateMaxTemp: Option[Int],
  /* Timestamp when min temperature was measured */
  dateMinTemp: Option[Int],
  /* Max temperature of the day (measured @ date_max_temp) */
  minTemp: Option[Float],
  /* Min temperature of the day (measured @ date_min_temp) */
  maxTemp: Option[Float],
  /* Real measured pressure @ time_utc (in mb) */
  absolutePressure: Option[Float],
  /* Last Co2 measured @ time_utc (in ppm) */
  cO2: Option[Float],
  /* Last humidity measured @ time_utc (in %) */
  humidity: Option[Float],
  /* Last noise measured @ time_utc (in db) */
  noise: Option[Float],
  /* Last Sea level pressure measured @ time_utc (in mb) */
  pressure: Option[Float],
  /* Last rain measured (in mm) */
  rain: Option[Int],
  /* Amount of rain in last hour */
  sumRain1: Option[Int],
  /* Amount of rain today */
  sumRain24: Option[Int])
   extends ApiModel


