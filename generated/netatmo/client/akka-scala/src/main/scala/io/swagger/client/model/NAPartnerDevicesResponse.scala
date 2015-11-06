package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAPartnerDevicesResponse (
  timeServer: Option[Int],
  timeExec: Option[Double],
  body: Option[Seq[String]],
  status: Option[String])
   extends ApiModel


