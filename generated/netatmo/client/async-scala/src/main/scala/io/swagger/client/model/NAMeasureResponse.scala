package io.swagger.client.model

import org.joda.time.DateTime


case class NAMeasureResponse (
  time_server: Integer,
  time_exec: Double,
  body: List[NAMeasureBodyElem],
  status: String
  
)
