package io.swagger.client.model

import org.joda.time.DateTime


case class NAPlace (
  city: String,
  altitude: Float,
  country: String,
  from_ip: Boolean,
  improveLocProposed: Boolean,
  location: List[Double],
  timezone: String,
  trust_location: Boolean
  
)
