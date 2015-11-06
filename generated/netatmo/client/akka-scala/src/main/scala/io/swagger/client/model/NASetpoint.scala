package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NASetpoint (
  setpointTemp: Option[Float],
  setpointEndtime: Option[Int],
  setpointMode: Option[String])
   extends ApiModel


