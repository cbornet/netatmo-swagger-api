package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAUserResponse (
  timeServer: Option[Int],
  timeExec: Option[Double],
  body: Option[NAUserBody],
  status: Option[String])
   extends ApiModel


