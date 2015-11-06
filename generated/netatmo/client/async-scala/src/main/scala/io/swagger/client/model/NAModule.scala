package io.swagger.client.model

import org.joda.time.DateTime


case class NAModule (
  _id: String,
  date_setup: NADate,
  firmware: Integer,
  _type: String,  // Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module
  module_name: String,
  main_device: String,
  last_message: Integer,
  last_seen: Integer,
  public_ext_data: Boolean,
  rf_status: Integer,  // \&quot;It contains the current radio status. The different thresholds to take into account are :\&quot; |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60
  battery_vp: Integer,  // It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\&quot;Indoor module Battery range: 6000 ... 4200\&quot; |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\&quot;Below 4560: very low\&quot; |\n  \n\&quot;Raingauge and outdoor module Battery range: 6000 ... 3600\&quot; |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\&quot;Below 4000: very low\&quot; |\n  \n\&quot;Thermostat Battery range: 4500 ... 3000\&quot; |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\&quot;Below 3000: very low\&quot;
  therm_orientation: Integer,
  therm_relay_cmd: Integer,
  dashboard_data: NADashboardData,  // It contains all the measurements that can be displayed on the dashboard
  data_type: List[String]
  
)
