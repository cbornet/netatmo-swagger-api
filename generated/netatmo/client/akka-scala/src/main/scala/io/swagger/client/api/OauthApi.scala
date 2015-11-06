package io.swagger.client.api

import io.swagger.client.model.AccessToken
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object OauthApi {

  /**
   * OAuth2 token endpoint
   * 
   * Expected answers:
   *   code 200 : AccessToken (Successful response)
   * 
   * @param grantType Oauth2 grant type
   * @param clientId Application client ID
   * @param clientSecret Application client secret
   * @param scope Scopes to use, separated by a space
   * @param username User name if grant_type is password
   * @param password User password if grant_type is password
   * @param code Authorization code if grant_type is authorization_code
   * @param redirectUri Redirect URI if grant_type is authorization_code
   * @param refreshToken Refresh token if grant_type is refresh_token
   */
  def getToken(grantType: String, clientId: String, clientSecret: String, scope: Option[String] = None, username: Option[String] = None, password: Option[String] = None, code: Option[String] = None, redirectUri: Option[String] = None, refreshToken: Option[String] = None): ApiRequest[AccessToken] =
    ApiRequest[AccessToken](ApiMethods.POST, "https://api.netatmo.net/", "/oauth2/token", "application/x-www-form-urlencoded")
      .withFormParam("grant_type", grantType)
      .withFormParam("client_id", clientId)
      .withFormParam("client_secret", clientSecret)
      .withFormParam("scope", scope)
      .withFormParam("username", username)
      .withFormParam("password", password)
      .withFormParam("code", code)
      .withFormParam("redirect_uri", redirectUri)
      .withFormParam("refresh_token", refreshToken)
      .withSuccessResponse[AccessToken](200)
      


}

