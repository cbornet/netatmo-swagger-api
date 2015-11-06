package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAMeasureBodyElem (
  begTime: Option[Int],
  stepTime: Option[Int],
  value: Option[Seq[Seq[Float]]])
   extends ApiModel


