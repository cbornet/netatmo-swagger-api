package io.swagger.client;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.reflect.TypeToken;
import java.lang.reflect.Type;
import java.util.List;
import io.swagger.client.model.*;

public class JsonUtil {
  public static GsonBuilder gsonBuilder;

  static {
    gsonBuilder = new GsonBuilder();
    gsonBuilder.serializeNulls();
    gsonBuilder.setDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ");
  }

  public static Gson getGson() {
    return gsonBuilder.create();
  }

  public static String serialize(Object obj){
    return getGson().toJson(obj);
  }

  public static <T> T deserializeToList(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getListTypeForDeserialization(cls));
  }

  public static <T> T deserializeToObject(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getTypeForDeserialization(cls));
  }

  public static Type getListTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("AccessToken".equalsIgnoreCase(className)) {
      return new TypeToken<List<AccessToken>>(){}.getType();
    }
    
    if ("NAResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAResponse>>(){}.getType();
    }
    
    if ("NAOkResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAOkResponse>>(){}.getType();
    }
    
    if ("NAUserResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAUserResponse>>(){}.getType();
    }
    
    if ("NADeviceListResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NADeviceListResponse>>(){}.getType();
    }
    
    if ("NAMeasureResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAMeasureResponse>>(){}.getType();
    }
    
    if ("NAThermStateResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAThermStateResponse>>(){}.getType();
    }
    
    if ("NANewScheduleResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NANewScheduleResponse>>(){}.getType();
    }
    
    if ("NAPartnerDevicesResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAPartnerDevicesResponse>>(){}.getType();
    }
    
    if ("NAUserBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAUserBody>>(){}.getType();
    }
    
    if ("NADeviceListBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<NADeviceListBody>>(){}.getType();
    }
    
    if ("NAMeasureBodyElem".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAMeasureBodyElem>>(){}.getType();
    }
    
    if ("NAThermStateBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAThermStateBody>>(){}.getType();
    }
    
    if ("NANewScheduleBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<NANewScheduleBody>>(){}.getType();
    }
    
    if ("NAUserAdministrative".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAUserAdministrative>>(){}.getType();
    }
    
    if ("NADate".equalsIgnoreCase(className)) {
      return new TypeToken<List<NADate>>(){}.getType();
    }
    
    if ("NADevice".equalsIgnoreCase(className)) {
      return new TypeToken<List<NADevice>>(){}.getType();
    }
    
    if ("NAModule".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAModule>>(){}.getType();
    }
    
    if ("NAHouseModel".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAHouseModel>>(){}.getType();
    }
    
    if ("NAHouseModelCa".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAHouseModelCa>>(){}.getType();
    }
    
    if ("NAStation".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAStation>>(){}.getType();
    }
    
    if ("NALinkStation".equalsIgnoreCase(className)) {
      return new TypeToken<List<NALinkStation>>(){}.getType();
    }
    
    if ("NAPidAlgo".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAPidAlgo>>(){}.getType();
    }
    
    if ("NAPlace".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAPlace>>(){}.getType();
    }
    
    if ("NASetpoint".equalsIgnoreCase(className)) {
      return new TypeToken<List<NASetpoint>>(){}.getType();
    }
    
    if ("NAThermProgram".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAThermProgram>>(){}.getType();
    }
    
    if ("NAZone".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAZone>>(){}.getType();
    }
    
    if ("NATimeTableItem".equalsIgnoreCase(className)) {
      return new TypeToken<List<NATimeTableItem>>(){}.getType();
    }
    
    if ("NAHeatingSystem".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAHeatingSystem>>(){}.getType();
    }
    
    if ("NASimpleAlgo".equalsIgnoreCase(className)) {
      return new TypeToken<List<NASimpleAlgo>>(){}.getType();
    }
    
    if ("NADashboardData".equalsIgnoreCase(className)) {
      return new TypeToken<List<NADashboardData>>(){}.getType();
    }
    
    if ("NAThermMeasure".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAThermMeasure>>(){}.getType();
    }
    
    if ("NAObject".equalsIgnoreCase(className)) {
      return new TypeToken<List<NAObject>>(){}.getType();
    }
    
    return new TypeToken<List<Object>>(){}.getType();
  }

  public static Type getTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("AccessToken".equalsIgnoreCase(className)) {
      return new TypeToken<AccessToken>(){}.getType();
    }
    
    if ("NAResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NAResponse>(){}.getType();
    }
    
    if ("NAOkResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NAOkResponse>(){}.getType();
    }
    
    if ("NAUserResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NAUserResponse>(){}.getType();
    }
    
    if ("NADeviceListResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NADeviceListResponse>(){}.getType();
    }
    
    if ("NAMeasureResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NAMeasureResponse>(){}.getType();
    }
    
    if ("NAThermStateResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NAThermStateResponse>(){}.getType();
    }
    
    if ("NANewScheduleResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NANewScheduleResponse>(){}.getType();
    }
    
    if ("NAPartnerDevicesResponse".equalsIgnoreCase(className)) {
      return new TypeToken<NAPartnerDevicesResponse>(){}.getType();
    }
    
    if ("NAUserBody".equalsIgnoreCase(className)) {
      return new TypeToken<NAUserBody>(){}.getType();
    }
    
    if ("NADeviceListBody".equalsIgnoreCase(className)) {
      return new TypeToken<NADeviceListBody>(){}.getType();
    }
    
    if ("NAMeasureBodyElem".equalsIgnoreCase(className)) {
      return new TypeToken<NAMeasureBodyElem>(){}.getType();
    }
    
    if ("NAThermStateBody".equalsIgnoreCase(className)) {
      return new TypeToken<NAThermStateBody>(){}.getType();
    }
    
    if ("NANewScheduleBody".equalsIgnoreCase(className)) {
      return new TypeToken<NANewScheduleBody>(){}.getType();
    }
    
    if ("NAUserAdministrative".equalsIgnoreCase(className)) {
      return new TypeToken<NAUserAdministrative>(){}.getType();
    }
    
    if ("NADate".equalsIgnoreCase(className)) {
      return new TypeToken<NADate>(){}.getType();
    }
    
    if ("NADevice".equalsIgnoreCase(className)) {
      return new TypeToken<NADevice>(){}.getType();
    }
    
    if ("NAModule".equalsIgnoreCase(className)) {
      return new TypeToken<NAModule>(){}.getType();
    }
    
    if ("NAHouseModel".equalsIgnoreCase(className)) {
      return new TypeToken<NAHouseModel>(){}.getType();
    }
    
    if ("NAHouseModelCa".equalsIgnoreCase(className)) {
      return new TypeToken<NAHouseModelCa>(){}.getType();
    }
    
    if ("NAStation".equalsIgnoreCase(className)) {
      return new TypeToken<NAStation>(){}.getType();
    }
    
    if ("NALinkStation".equalsIgnoreCase(className)) {
      return new TypeToken<NALinkStation>(){}.getType();
    }
    
    if ("NAPidAlgo".equalsIgnoreCase(className)) {
      return new TypeToken<NAPidAlgo>(){}.getType();
    }
    
    if ("NAPlace".equalsIgnoreCase(className)) {
      return new TypeToken<NAPlace>(){}.getType();
    }
    
    if ("NASetpoint".equalsIgnoreCase(className)) {
      return new TypeToken<NASetpoint>(){}.getType();
    }
    
    if ("NAThermProgram".equalsIgnoreCase(className)) {
      return new TypeToken<NAThermProgram>(){}.getType();
    }
    
    if ("NAZone".equalsIgnoreCase(className)) {
      return new TypeToken<NAZone>(){}.getType();
    }
    
    if ("NATimeTableItem".equalsIgnoreCase(className)) {
      return new TypeToken<NATimeTableItem>(){}.getType();
    }
    
    if ("NAHeatingSystem".equalsIgnoreCase(className)) {
      return new TypeToken<NAHeatingSystem>(){}.getType();
    }
    
    if ("NASimpleAlgo".equalsIgnoreCase(className)) {
      return new TypeToken<NASimpleAlgo>(){}.getType();
    }
    
    if ("NADashboardData".equalsIgnoreCase(className)) {
      return new TypeToken<NADashboardData>(){}.getType();
    }
    
    if ("NAThermMeasure".equalsIgnoreCase(className)) {
      return new TypeToken<NAThermMeasure>(){}.getType();
    }
    
    if ("NAObject".equalsIgnoreCase(className)) {
      return new TypeToken<NAObject>(){}.getType();
    }
    
    return new TypeToken<Object>(){}.getType();
  }

};
