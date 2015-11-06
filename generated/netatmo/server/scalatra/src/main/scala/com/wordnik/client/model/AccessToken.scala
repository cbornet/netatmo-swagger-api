package com.wordnik.client.model



case class AccessToken (
  access_token: String,
  refresh_token: String,
  expire_in: Int,
  expires_in: Int,
  scope: List[String]
)
