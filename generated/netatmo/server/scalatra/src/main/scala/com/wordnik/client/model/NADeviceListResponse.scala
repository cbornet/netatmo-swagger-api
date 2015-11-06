package com.wordnik.client.model

import com.wordnik.client.model.NAResponse
import com.wordnik.client.model.NADeviceListBody


case class NADeviceListResponse (
  time_server: Int,
  time_exec: Double,
  body: NADeviceListBody,
  status: String
)
