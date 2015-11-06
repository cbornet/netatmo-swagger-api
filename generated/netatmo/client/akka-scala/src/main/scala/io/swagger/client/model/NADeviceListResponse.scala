package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NADeviceListResponse (
  timeServer: Option[Int],
  timeExec: Option[Double],
  body: Option[NADeviceListBody],
  status: Option[String])
   extends ApiModel


