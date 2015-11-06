package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAPlace (
  city: Option[String],
  altitude: Option[Float],
  country: Option[String],
  fromIp: Option[Boolean],
  improveLocProposed: Option[Boolean],
  location: Option[Seq[Double]],
  timezone: Option[String],
  trustLocation: Option[Boolean])
   extends ApiModel


