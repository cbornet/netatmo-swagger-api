package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAThermStateResponse (
  timeServer: Option[Int],
  timeExec: Option[Double],
  body: Option[NAThermStateBody],
  status: Option[String])
   extends ApiModel


