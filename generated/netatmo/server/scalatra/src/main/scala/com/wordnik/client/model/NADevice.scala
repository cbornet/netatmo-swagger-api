package com.wordnik.client.model

import com.wordnik.client.model.NAHeatingSystem
import com.wordnik.client.model.NAHouseModel
import com.wordnik.client.model.NAPlace
import com.wordnik.client.model.NAThermProgram
import com.wordnik.client.model.NADate


case class NADevice (
  _id: String,
  behavior: Int,
  cipher_id: String,
  date_setup: NADate,
  firmware: Int,
  hw_version: Int,
  heating_system: NAHeatingSystem,
  house_model: NAHouseModel,
  ip: String,
  last_fw_update: Int,
  last_radio_store: Int,
  last_status_store: Int,
  last_upgrade: Int,
  module_name: String,
  modules: List[String],
  place: NAPlace,
  setpoint: Object,
  setpoint_default_duration: Int,
  setpoint_order: Map[String, List[NAObject]],
  public_ext_data: Boolean,
  station_name: String,
  therm_program: Map[String, NAThermProgram],
  therm_program_backup: Map[String, List[NAThermProgram]],
  therm_program_order: Map[String, List[NAObject]],
  type: String,
  user_owner: List[String],
  udp_conn: Boolean,
  wifi_status: Int,
  new_feature_avail: Boolean,
  first_pid_avail: Boolean,
  data_type: List[String]
)
