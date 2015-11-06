package io.swagger.client.model

import org.joda.time.DateTime


case class AccessToken (
  access_token: String,
  refresh_token: String,
  expire_in: Integer,
  expires_in: Integer,
  scope: List[String]
  
)
