package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAResponse (
  status: Option[String],
  timeExec: Option[Double],
  timeServer: Option[Int])
   extends ApiModel


