package io.swagger.client.model




case class NAThermStateBody (
  setpoint: NASetpoint,
  setpoint_order: NASetpoint,
  therm_program: NAThermProgram,
  therm_program_backup: List[NAThermProgram],
  therm_program_order: NAThermProgram,
  therm_orientation: Integer,
  therm_relay_cmd: Integer,
  battery_vp: Integer,
  rf_status: Integer,
  plug_connected_boiler: Boolean,
  udp_conn: Boolean,
  last_therm_seen: Integer,
  last_plug_seen: Integer,
  wifi_status: Integer,
  measured: NAThermMeasure)
  
