package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAStation (
  lagDown: Option[Int],
  lagUp: Option[Int],
  offOvershoot: Option[Float],
  onOvershoot: Option[Float],
  pk: Option[Int],
  tau: Option[Int])
   extends ApiModel


