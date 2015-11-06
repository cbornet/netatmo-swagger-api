package com.wordnik.client.api

import com.wordnik.client.model.AccessToken

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class OauthApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "OauthApi"
  override protected val applicationName: Option[String] = Some("Oauth")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val getTokenOperation = (apiOperation[AccessToken]("getToken")
      summary ""
      parameters(
        
        
        
        
        formParam[String]("grantType").description("")
        
        ,
        
        
        
        
        formParam[String]("clientId").description("")
        
        ,
        
        
        
        
        formParam[String]("clientSecret").description("")
        
        ,
        
        
        
        
        formParam[String]("scope").description("").optional
        
        ,
        
        
        
        
        formParam[String]("username").description("").optional
        
        ,
        
        
        
        
        formParam[String]("password").description("").optional
        
        ,
        
        
        
        
        formParam[String]("code").description("").optional
        
        ,
        
        
        
        
        formParam[String]("redirectUri").description("").optional
        
        ,
        
        
        
        
        formParam[String]("refreshToken").description("").optional
        
        
        )
  )

  post("/oauth2/token",operation(getTokenOperation)) {
    
    
    
    

    

    

    
      val grantType = params.getAs[String]("grantType")
    

    
    
    println("grantType: " + grantType)
  
    
    
    

    

    

    
      val clientId = params.getAs[String]("clientId")
    

    
    
    println("clientId: " + clientId)
  
    
    
    

    

    

    
      val clientSecret = params.getAs[String]("clientSecret")
    

    
    
    println("clientSecret: " + clientSecret)
  
    
    
    

    

    

    
      val scope = params.getAs[String]("scope")
    

    
    
    println("scope: " + scope)
  
    
    
    

    

    

    
      val username = params.getAs[String]("username")
    

    
    
    println("username: " + username)
  
    
    
    

    

    

    
      val password = params.getAs[String]("password")
    

    
    
    println("password: " + password)
  
    
    
    

    

    

    
      val code = params.getAs[String]("code")
    

    
    
    println("code: " + code)
  
    
    
    

    

    

    
      val redirectUri = params.getAs[String]("redirectUri")
    

    
    
    println("redirectUri: " + redirectUri)
  
    
    
    

    

    

    
      val refreshToken = params.getAs[String]("refreshToken")
    

    
    
    println("refreshToken: " + refreshToken)
  
  }

}