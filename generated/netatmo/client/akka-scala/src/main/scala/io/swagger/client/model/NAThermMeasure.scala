package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAThermMeasure (
  time: Option[Int],
  temperature: Option[Float],
  setpointTemp: Option[Float])
   extends ApiModel


