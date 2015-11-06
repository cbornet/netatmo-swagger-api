package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAThermStateBody (
  setpoint: Option[NASetpoint],
  setpointOrder: Option[NASetpoint],
  thermProgram: Option[NAThermProgram],
  thermProgramBackup: Option[Seq[NAThermProgram]],
  thermProgramOrder: Option[NAThermProgram],
  thermOrientation: Option[Int],
  thermRelayCmd: Option[Int],
  batteryVp: Option[Int],
  rfStatus: Option[Int],
  plugConnectedBoiler: Option[Boolean],
  udpConn: Option[Boolean],
  lastThermSeen: Option[Int],
  lastPlugSeen: Option[Int],
  wifiStatus: Option[Int],
  measured: Option[NAThermMeasure])
   extends ApiModel


