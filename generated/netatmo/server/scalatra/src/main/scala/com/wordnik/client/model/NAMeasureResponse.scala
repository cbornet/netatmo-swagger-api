package com.wordnik.client.model

import com.wordnik.client.model.NAResponse
import com.wordnik.client.model.NAMeasureBodyElem


case class NAMeasureResponse (
  time_server: Int,
  time_exec: Double,
  body: List[NAMeasureBodyElem],
  status: String
)
