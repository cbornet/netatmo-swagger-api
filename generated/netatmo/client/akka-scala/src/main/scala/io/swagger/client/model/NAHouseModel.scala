package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAHouseModel (
  algoType: Option[String],
  ca: Option[NAHouseModelCa],
  extTemps: Option[Map[String, Int]],
  firstAnticipateAvail: Option[Boolean],
  firstPidAvail: Option[Boolean],
  gefs: Option[NAStation],
  inUse: Option[String],
  lastComputeTry: Option[NADate],
  linkStation: Option[NALinkStation],
  pidAlgo: Option[NAPidAlgo],
  station: Option[NAStation],
  preferedAlgoType: Option[String],
  simpleAlgo: Option[NASimpleAlgo],
  time: Option[NADate],
  stationFirsttimeAnticipate: Option[Boolean],
  timeAlgoChanged: Option[Int],
  timePidComputed: Option[Int])
   extends ApiModel


