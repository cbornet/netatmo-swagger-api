package com.wordnik.client.model



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
