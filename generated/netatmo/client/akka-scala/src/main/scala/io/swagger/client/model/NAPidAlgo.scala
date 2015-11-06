package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAPidAlgo (
  gain: Option[Int],
  period: Option[Int],
  td: Option[Int],
  ti: Option[Int])
   extends ApiModel


