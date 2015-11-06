package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NANewScheduleResponse (
  timeServer: Option[Int],
  timeExec: Option[Double],
  body: Option[NANewScheduleBody],
  status: Option[String])
   extends ApiModel


