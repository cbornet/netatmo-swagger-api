package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NADevice (
  id: Option[String],
  behavior: Option[Int],
  cipherId: Option[String],
  dateSetup: Option[NADate],
  firmware: Option[Int],
  hwVersion: Option[Int],
  heatingSystem: Option[NAHeatingSystem],
  houseModel: Option[NAHouseModel],
  ip: Option[String],
  lastFwUpdate: Option[Int],
  lastRadioStore: Option[Int],
  lastStatusStore: Option[Int],
  lastUpgrade: Option[Int],
  moduleName: Option[String],
  /* It lists which modules are linked with this device */
  modules: Option[Seq[String]],
  place: Option[NAPlace],
  setpoint: Option[Any],
  setpointDefaultDuration: Option[Int],
  setpointOrder: Option[Map[String, Seq[NAObject]]],
  publicExtData: Option[Boolean],
  stationName: Option[String],
  thermProgram: Option[Map[String, NAThermProgram]],
  thermProgramBackup: Option[Map[String, Seq[NAThermProgram]]],
  thermProgramOrder: Option[Map[String, Seq[NAObject]]],
  /* Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module */
  `type`: Option[String],
  userOwner: Option[Seq[String]],
  udpConn: Option[Boolean],
  /* It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal */
  wifiStatus: Option[Int],
  newFeatureAvail: Option[Boolean],
  firstPidAvail: Option[Boolean],
  dataType: Option[Seq[String]])
   extends ApiModel


