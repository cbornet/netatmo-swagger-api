package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAModule (
  id: Option[String],
  dateSetup: Option[NADate],
  firmware: Option[Int],
  /* Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module */
  `type`: Option[String],
  moduleName: Option[String],
  mainDevice: Option[String],
  lastMessage: Option[Int],
  lastSeen: Option[Int],
  publicExtData: Option[Boolean],
  /* \"It contains the current radio status. The different thresholds to take into account are :\" |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60 */
  rfStatus: Option[Int],
  /* It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\"Indoor module Battery range: 6000 ... 4200\" |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\"Below 4560: very low\" |\n  \n\"Raingauge and outdoor module Battery range: 6000 ... 3600\" |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\"Below 4000: very low\" |\n  \n\"Thermostat Battery range: 4500 ... 3000\" |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\"Below 3000: very low\" */
  batteryVp: Option[Int],
  thermOrientation: Option[Int],
  thermRelayCmd: Option[Int],
  /* It contains all the measurements that can be displayed on the dashboard */
  dashboardData: Option[NADashboardData],
  dataType: Option[Seq[String]])
   extends ApiModel


