package io.swagger.client.api

import io.swagger.client.model.AccessToken
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class OauthApi(val defBasePath: String = "https://api.netatmo.net/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * 
   * OAuth2 token endpoint
   * @param grantType Oauth2 grant type
   * @param clientId Application client ID
   * @param clientSecret Application client secret
   * @param scope Scopes to use, separated by a space
   * @param username User name if grant_type is password
   * @param password User password if grant_type is password
   * @param code Authorization code if grant_type is authorization_code
   * @param redirectUri Redirect URI if grant_type is authorization_code
   * @param refreshToken Refresh token if grant_type is refresh_token
   * @return AccessToken
   */
  def getToken (grantType: String, clientId: String, clientSecret: String, scope: String, username: String, password: String, code: String, redirectUri: String, refreshToken: String) : Option[AccessToken] = {
    // create path and map variables
    val path = "/oauth2/token".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/x-www-form-urlencoded", "application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      mp.field("grant_type", grantType.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("client_id", clientId.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("client_secret", clientSecret.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("scope", scope.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("username", username.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("password", password.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("code", code.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("redirect_uri", redirectUri.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      mp.field("refresh_token", refreshToken.toString(), MediaType.MULTIPART_FORM_DATA_TYPE)
      
      postBody = mp
    }
    else {
      formParams += "grant_type" -> grantType.toString()
      formParams += "client_id" -> clientId.toString()
      formParams += "client_secret" -> clientSecret.toString()
      formParams += "scope" -> scope.toString()
      formParams += "username" -> username.toString()
      formParams += "password" -> password.toString()
      formParams += "code" -> code.toString()
      formParams += "redirect_uri" -> redirectUri.toString()
      formParams += "refresh_token" -> refreshToken.toString()
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[AccessToken]).asInstanceOf[AccessToken])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
