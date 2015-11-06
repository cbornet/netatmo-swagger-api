package com.wordnik.client.model

import com.wordnik.client.model.NAUserBody
import com.wordnik.client.model.NAResponse


case class NAUserResponse (
  time_server: Int,
  time_exec: Double,
  body: NAUserBody,
  status: String
)
