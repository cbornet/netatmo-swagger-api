package com.wordnik.client.model

import com.wordnik.client.model.NAResponse
import com.wordnik.client.model.NAThermStateBody


case class NAThermStateResponse (
  time_server: Int,
  time_exec: Double,
  body: NAThermStateBody,
  status: String
)
