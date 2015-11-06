package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAThermProgram (
  programId: Option[String],
  name: Option[String],
  zones: Option[Seq[NAZone]],
  timetable: Option[Seq[NATimeTableItem]],
  selected: Option[Boolean])
   extends ApiModel


