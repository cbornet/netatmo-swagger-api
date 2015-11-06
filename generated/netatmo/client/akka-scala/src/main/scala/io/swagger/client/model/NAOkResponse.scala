package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAOkResponse (
  timeServer: Option[Int],
  timeExec: Option[Double],
  body: Option[String],
  status: Option[String])
   extends ApiModel


