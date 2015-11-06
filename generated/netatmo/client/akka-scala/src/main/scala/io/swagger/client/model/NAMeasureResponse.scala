package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAMeasureResponse (
  timeServer: Option[Int],
  timeExec: Option[Double],
  body: Option[Seq[NAMeasureBodyElem]],
  status: Option[String])
   extends ApiModel


