package com.wordnik.client.model

import com.wordnik.client.model.NAThermMeasure
import com.wordnik.client.model.NASetpoint
import com.wordnik.client.model.NAThermProgram


case class NAThermStateBody (
  setpoint: NASetpoint,
  setpoint_order: NASetpoint,
  therm_program: NAThermProgram,
  therm_program_backup: List[NAThermProgram],
  therm_program_order: NAThermProgram,
  therm_orientation: Int,
  therm_relay_cmd: Int,
  battery_vp: Int,
  rf_status: Int,
  plug_connected_boiler: Boolean,
  udp_conn: Boolean,
  last_therm_seen: Int,
  last_plug_seen: Int,
  wifi_status: Int,
  measured: NAThermMeasure
)
