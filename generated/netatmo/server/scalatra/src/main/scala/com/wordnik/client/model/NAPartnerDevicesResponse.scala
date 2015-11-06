package com.wordnik.client.model

import com.wordnik.client.model.NAResponse


case class NAPartnerDevicesResponse (
  time_server: Int,
  time_exec: Double,
  body: List[String],
  status: String
)
