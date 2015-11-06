package com.wordnik.client.model

import com.wordnik.client.model.NADashboardData
import com.wordnik.client.model.NADate


case class NAModule (
  _id: String,
  date_setup: NADate,
  firmware: Int,
  type: String,
  module_name: String,
  main_device: String,
  last_message: Int,
  last_seen: Int,
  public_ext_data: Boolean,
  rf_status: Int,
  battery_vp: Int,
  therm_orientation: Int,
  therm_relay_cmd: Int,
  dashboard_data: NADashboardData,
  data_type: List[String]
)
