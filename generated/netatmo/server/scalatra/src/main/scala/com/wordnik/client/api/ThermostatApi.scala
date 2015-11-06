package com.wordnik.client.api

import com.wordnik.client.model.NANewScheduleResponse
import com.wordnik.client.model.NAThermProgram
import com.wordnik.client.model.NADeviceListResponse
import com.wordnik.client.model.NAMeasureResponse
import com.wordnik.client.model.NAThermStateResponse
import com.wordnik.client.model.NAUserResponse
import com.wordnik.client.model.NAOkResponse

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class ThermostatApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "ThermostatApi"
  override protected val applicationName: Option[String] = Some("Thermostat")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val createnewscheduleOperation = (apiOperation[NANewScheduleResponse]("createnewschedule")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        ,
        queryParam[String]("deviceId").description("")
        
        
        
        
        
        ,
        queryParam[String]("moduleId").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[NAThermProgram]("thermProgram").description("")
        
        
        
        )
  )

  post("/api/createnewschedule",operation(createnewscheduleOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
    
    
    

    
      
      val deviceId = params.getAs[String]("deviceId")
      
    

    

    

    
    
    println("deviceId: " + deviceId)
  
    
    
    

    
      
      val moduleId = params.getAs[String]("moduleId")
      
    

    

    

    
    
    println("moduleId: " + moduleId)
  
    
    
    

    

    

    

    
      val thermProgram = parsedBody.extract[NAThermProgram]
    
    
    println("thermProgram: " + thermProgram)
  
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

  

  val getthermstateOperation = (apiOperation[NAThermStateResponse]("getthermstate")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        ,
        queryParam[String]("deviceId").description("")
        
        
        
        
        
        ,
        queryParam[String]("moduleId").description("")
        
        
        
        
        
        
        )
  )

  get("/api/getthermstate",operation(getthermstateOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
    
    
    

    
      
      val deviceId = params.getAs[String]("deviceId")
      
    

    

    

    
    
    println("deviceId: " + deviceId)
  
    
    
    

    
      
      val moduleId = params.getAs[String]("moduleId")
      
    

    

    

    
    
    println("moduleId: " + moduleId)
  
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

  

  val setthermpointOperation = (apiOperation[NAOkResponse]("setthermpoint")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        ,
        queryParam[String]("deviceId").description("")
        
        
        
        
        
        ,
        queryParam[String]("moduleId").description("")
        
        
        
        
        
        ,
        queryParam[String]("setpointMode").description("")
        
        
        
        
        
        ,
        queryParam[Int]("setpointEndtime").description("").optional
        
        
        
        
        
        ,
        queryParam[Float]("setpointTemp").description("").optional
        
        
        
        
        
        
        )
  )

  post("/api/setthermpoint",operation(setthermpointOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
    
    
    

    
      
      val deviceId = params.getAs[String]("deviceId")
      
    

    

    

    
    
    println("deviceId: " + deviceId)
  
    
    
    

    
      
      val moduleId = params.getAs[String]("moduleId")
      
    

    

    

    
    
    println("moduleId: " + moduleId)
  
    
    
    

    
      
      val setpointMode = params.getAs[String]("setpointMode")
      
    

    

    

    
    
    println("setpointMode: " + setpointMode)
  
    
    
    

    
      
      val setpointEndtime = params.getAs[Int]("setpointEndtime")
      
    

    

    

    
    
    println("setpointEndtime: " + setpointEndtime)
  
    
    
    

    
      
      val setpointTemp = params.getAs[Float]("setpointTemp")
      
    

    

    

    
    
    println("setpointTemp: " + setpointTemp)
  
  }

  

  val switchscheduleOperation = (apiOperation[NAOkResponse]("switchschedule")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        ,
        queryParam[String]("deviceId").description("")
        
        
        
        
        
        ,
        queryParam[String]("moduleId").description("")
        
        
        
        
        
        ,
        queryParam[String]("scheduleId").description("")
        
        
        
        
        
        
        )
  )

  post("/api/switchschedule",operation(switchscheduleOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
    
    
    

    
      
      val deviceId = params.getAs[String]("deviceId")
      
    

    

    

    
    
    println("deviceId: " + deviceId)
  
    
    
    

    
      
      val moduleId = params.getAs[String]("moduleId")
      
    

    

    

    
    
    println("moduleId: " + moduleId)
  
    
    
    

    
      
      val scheduleId = params.getAs[String]("scheduleId")
      
    

    

    

    
    
    println("scheduleId: " + scheduleId)
  
  }

  

  val syncscheduleOperation = (apiOperation[NAOkResponse]("syncschedule")
      summary ""
      parameters(
        queryParam[String]("accessToken").description("")
        
        
        
        
        
        ,
        queryParam[String]("deviceId").description("")
        
        
        
        
        
        ,
        queryParam[String]("moduleId").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[NAThermProgram]("thermProgram").description("")
        
        
        
        )
  )

  post("/api/syncschedule",operation(syncscheduleOperation)) {
    
    
    
    

    
      
      val accessToken = params.getAs[String]("accessToken")
      
    

    

    

    
    
    println("accessToken: " + accessToken)
  
    
    
    

    
      
      val deviceId = params.getAs[String]("deviceId")
      
    

    

    

    
    
    println("deviceId: " + deviceId)
  
    
    
    

    
      
      val moduleId = params.getAs[String]("moduleId")
      
    

    

    

    
    
    println("moduleId: " + moduleId)
  
    
    
    

    

    

    

    
      val thermProgram = parsedBody.extract[NAThermProgram]
    
    
    println("thermProgram: " + thermProgram)
  
  }

}