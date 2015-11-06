package io.swagger.client.api

import io.swagger.client.model.AccessToken
import io.swagger.client._
import scala.concurrent.{ Future, Await }
import scala.concurrent.duration._
import collection.mutable

class OauthApi(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  
  def getToken(grantType: String,
      clientId: String,
      clientSecret: String,
      scope: Option[String] = None,
      username: Option[String] = None,
      password: Option[String] = None,
      code: Option[String] = None,
      redirectUri: Option[String] = None,
      refreshToken: Option[String] = None
      )(implicit reader: ClientResponseReader[AccessToken]): Future[AccessToken] = {
    // create path and map variables
    val path = (addFmt("/oauth2/token"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    

    

    

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  

}
