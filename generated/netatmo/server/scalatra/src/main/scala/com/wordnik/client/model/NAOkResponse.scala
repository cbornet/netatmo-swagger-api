package com.wordnik.client.model

import com.wordnik.client.model.NAResponse


case class NAOkResponse (
  time_server: Int,
  time_exec: Double,
  body: String,
  status: String
)
