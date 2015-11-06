package com.wordnik.client.api

import com.wordnik.client.model.NADeviceListResponse
import com.wordnik.client.model.NAMeasureResponse
import com.wordnik.client.model.NAUserResponse

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class StationApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "StationApi"
  override protected val applicationName: Option[String] = Some("Station")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val devicelistOperation = (apiOperation[NADeviceListResponse]("devicelist")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        ,
        queryParam[String]("appType").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("deviceId").description("").optional
        
        
        
        
        
        ,
        queryParam[Boolean]("getFavorites").description("").optional
        
        
        
        
        
        
        )
  )

  get("/api/devicelist",operation(devicelistOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
    
    
    

    
      
      val appType = params.getAs[String]("appType")
      
    

    

    

    
    
    println("appType: " + appType)
  
    
    
    

    
      
      val deviceId = params.getAs[String]("deviceId")
      
    

    

    

    
    
    println("deviceId: " + deviceId)
  
    
    
    

    
      
      val getFavorites = params.getAs[Boolean]("getFavorites")
      
    

    

    

    
    
    println("getFavorites: " + getFavorites)
  
  }

  

  val getmeasureOperation = (apiOperation[NAMeasureResponse]("getmeasure")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        ,
        queryParam[String]("deviceId").description("")
        
        
        
        
        
        ,
        queryParam[String]("scale").description("")
        
        
        
        
        
        ,
        queryParam[List[String]]("type").description("")
        
        
        
        
        
        ,
        queryParam[String]("moduleId").description("").optional
        
        
        
        
        
        ,
        queryParam[Int]("dateBegin").description("").optional
        
        
        
        
        
        ,
        queryParam[Int]("dateEnd").description("").optional
        
        
        
        
        
        ,
        queryParam[Int]("limit").description("").optional
        
        
        
        
        
        ,
        queryParam[Boolean]("optimize").description("").optional
        
        
        
        
        
        ,
        queryParam[Boolean]("realTime").description("").optional
        
        
        
        
        
        
        )
  )

  get("/api/getmeasure",operation(getmeasureOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
    
    
    

    
      
      val deviceId = params.getAs[String]("deviceId")
      
    

    

    

    
    
    println("deviceId: " + deviceId)
  
    
    
    

    
      
      val scale = params.getAs[String]("scale")
      
    

    

    

    
    
    println("scale: " + scale)
  
    
    
    

    
      val typeString = params.getAs[String]("type")
      val type = if("csv".equals("default")) {
        typeString match {
          case Some(str) => str.split(",")
          case None => List()
        }
      }
      else
        List()
      
      
      
    

    

    

    
    
    println("type: " + type)
  
    
    
    

    
      
      val moduleId = params.getAs[String]("moduleId")
      
    

    

    

    
    
    println("moduleId: " + moduleId)
  
    
    
    

    
      
      val dateBegin = params.getAs[Int]("dateBegin")
      
    

    

    

    
    
    println("dateBegin: " + dateBegin)
  
    
    
    

    
      
      val dateEnd = params.getAs[Int]("dateEnd")
      
    

    

    

    
    
    println("dateEnd: " + dateEnd)
  
    
    
    

    
      
      val limit = params.getAs[Int]("limit")
      
    

    

    

    
    
    println("limit: " + limit)
  
    
    
    

    
      
      val optimize = params.getAs[Boolean]("optimize")
      
    

    

    

    
    
    println("optimize: " + optimize)
  
    
    
    

    
      
      val realTime = params.getAs[Boolean]("realTime")
      
    

    

    

    
    
    println("realTime: " + realTime)
  
  }

  

  val getuserOperation = (apiOperation[NAUserResponse]("getuser")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        
        )
  )

  get("/api/getuser",operation(getuserOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
  }

}