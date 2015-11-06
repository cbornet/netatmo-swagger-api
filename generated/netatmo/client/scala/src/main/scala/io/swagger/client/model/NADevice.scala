package io.swagger.client.model




case class NADevice (
  _id: String,
  behavior: Integer,
  cipher_id: String,
  date_setup: NADate,
  firmware: Integer,
  hw_version: Integer,
  heating_system: NAHeatingSystem,
  house_model: NAHouseModel,
  ip: String,
  last_fw_update: Integer,
  last_radio_store: Integer,
  last_status_store: Integer,
  last_upgrade: Integer,
  module_name: String,
  /* It lists which modules are linked with this device */
  modules: List[String],
  place: NAPlace,
  setpoint: Any,
  setpoint_default_duration: Integer,
  setpoint_order: Map[String, List[NAObject]],
  public_ext_data: Boolean,
  station_name: String,
  therm_program: Map[String, NAThermProgram],
  therm_program_backup: Map[String, List[NAThermProgram]],
  therm_program_order: Map[String, List[NAObject]],
  /* Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module */
  _type: String,
  user_owner: List[String],
  udp_conn: Boolean,
  /* It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal */
  wifi_status: Integer,
  new_feature_avail: Boolean,
  first_pid_avail: Boolean,
  data_type: List[String])
  
