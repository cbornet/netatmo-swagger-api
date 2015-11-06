package com.wordnik.client.model

import com.wordnik.client.model.NANewScheduleBody
import com.wordnik.client.model.NAResponse


case class NANewScheduleResponse (
  time_server: Int,
  time_exec: Double,
  body: NANewScheduleBody,
  status: String
)
