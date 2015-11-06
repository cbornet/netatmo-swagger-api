package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class AccessToken (
  accessToken: Option[String],
  refreshToken: Option[String],
  expireIn: Option[Int],
  expiresIn: Option[Int],
  scope: Option[Seq[String]])
   extends ApiModel


