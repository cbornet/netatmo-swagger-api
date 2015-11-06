package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NALinkStation;
import java.util.*;
import io.swagger.client.model.NAStation;
import io.swagger.client.model.NAHouseModelCa;
import java.util.Map;
import io.swagger.client.model.NAPidAlgo;
import io.swagger.client.model.NASimpleAlgo;
import io.swagger.client.model.NADate;

import com.google.gson.annotations.SerializedName;

import java.io.Serializable;

import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAHouseModel implements Serializable {
  
  @SerializedName("algo_type")
  private String algoType = null;
  
  @SerializedName("ca")
  private NAHouseModelCa ca = null;
  
  @SerializedName("ext_temps")
  private Map<String, Integer> extTemps = new HashMap<String, Integer>();
  
  @SerializedName("first_anticipate_avail")
  private Boolean firstAnticipateAvail = null;
  
  @SerializedName("first_pid_avail")
  private Boolean firstPidAvail = null;
  
  @SerializedName("gefs")
  private NAStation gefs = null;
  
  @SerializedName("in_use")
  private String inUse = null;
  
  @SerializedName("last_compute_try")
  private NADate lastComputeTry = null;
  
  @SerializedName("link_station")
  private NALinkStation linkStation = null;
  
  @SerializedName("pid_algo")
  private NAPidAlgo pidAlgo = null;
  
  @SerializedName("station")
  private NAStation station = null;
  
  @SerializedName("prefered_algo_type")
  private String preferedAlgoType = null;
  
  @SerializedName("simple_algo")
  private NASimpleAlgo simpleAlgo = null;
  
  @SerializedName("time")
  private NADate time = null;
  
  @SerializedName("station_firsttime_anticipate")
  private Boolean stationFirsttimeAnticipate = null;
  
  @SerializedName("time_algo_changed")
  private Integer timeAlgoChanged = null;
  
  @SerializedName("time_pid_computed")
  private Integer timePidComputed = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAlgoType() {
    return algoType;
  }
  public void setAlgoType(String algoType) {
    this.algoType = algoType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAHouseModelCa getCa() {
    return ca;
  }
  public void setCa(NAHouseModelCa ca) {
    this.ca = ca;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Map<String, Integer> getExtTemps() {
    return extTemps;
  }
  public void setExtTemps(Map<String, Integer> extTemps) {
    this.extTemps = extTemps;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getFirstAnticipateAvail() {
    return firstAnticipateAvail;
  }
  public void setFirstAnticipateAvail(Boolean firstAnticipateAvail) {
    this.firstAnticipateAvail = firstAnticipateAvail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getFirstPidAvail() {
    return firstPidAvail;
  }
  public void setFirstPidAvail(Boolean firstPidAvail) {
    this.firstPidAvail = firstPidAvail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAStation getGefs() {
    return gefs;
  }
  public void setGefs(NAStation gefs) {
    this.gefs = gefs;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getInUse() {
    return inUse;
  }
  public void setInUse(String inUse) {
    this.inUse = inUse;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NADate getLastComputeTry() {
    return lastComputeTry;
  }
  public void setLastComputeTry(NADate lastComputeTry) {
    this.lastComputeTry = lastComputeTry;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NALinkStation getLinkStation() {
    return linkStation;
  }
  public void setLinkStation(NALinkStation linkStation) {
    this.linkStation = linkStation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAPidAlgo getPidAlgo() {
    return pidAlgo;
  }
  public void setPidAlgo(NAPidAlgo pidAlgo) {
    this.pidAlgo = pidAlgo;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAStation getStation() {
    return station;
  }
  public void setStation(NAStation station) {
    this.station = station;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPreferedAlgoType() {
    return preferedAlgoType;
  }
  public void setPreferedAlgoType(String preferedAlgoType) {
    this.preferedAlgoType = preferedAlgoType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NASimpleAlgo getSimpleAlgo() {
    return simpleAlgo;
  }
  public void setSimpleAlgo(NASimpleAlgo simpleAlgo) {
    this.simpleAlgo = simpleAlgo;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NADate getTime() {
    return time;
  }
  public void setTime(NADate time) {
    this.time = time;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getStationFirsttimeAnticipate() {
    return stationFirsttimeAnticipate;
  }
  public void setStationFirsttimeAnticipate(Boolean stationFirsttimeAnticipate) {
    this.stationFirsttimeAnticipate = stationFirsttimeAnticipate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTimeAlgoChanged() {
    return timeAlgoChanged;
  }
  public void setTimeAlgoChanged(Integer timeAlgoChanged) {
    this.timeAlgoChanged = timeAlgoChanged;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTimePidComputed() {
    return timePidComputed;
  }
  public void setTimePidComputed(Integer timePidComputed) {
    this.timePidComputed = timePidComputed;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAHouseModel {\n");
    
    sb.append("    algoType: ").append(StringUtil.toIndentedString(algoType)).append("\n");
    sb.append("    ca: ").append(StringUtil.toIndentedString(ca)).append("\n");
    sb.append("    extTemps: ").append(StringUtil.toIndentedString(extTemps)).append("\n");
    sb.append("    firstAnticipateAvail: ").append(StringUtil.toIndentedString(firstAnticipateAvail)).append("\n");
    sb.append("    firstPidAvail: ").append(StringUtil.toIndentedString(firstPidAvail)).append("\n");
    sb.append("    gefs: ").append(StringUtil.toIndentedString(gefs)).append("\n");
    sb.append("    inUse: ").append(StringUtil.toIndentedString(inUse)).append("\n");
    sb.append("    lastComputeTry: ").append(StringUtil.toIndentedString(lastComputeTry)).append("\n");
    sb.append("    linkStation: ").append(StringUtil.toIndentedString(linkStation)).append("\n");
    sb.append("    pidAlgo: ").append(StringUtil.toIndentedString(pidAlgo)).append("\n");
    sb.append("    station: ").append(StringUtil.toIndentedString(station)).append("\n");
    sb.append("    preferedAlgoType: ").append(StringUtil.toIndentedString(preferedAlgoType)).append("\n");
    sb.append("    simpleAlgo: ").append(StringUtil.toIndentedString(simpleAlgo)).append("\n");
    sb.append("    time: ").append(StringUtil.toIndentedString(time)).append("\n");
    sb.append("    stationFirsttimeAnticipate: ").append(StringUtil.toIndentedString(stationFirsttimeAnticipate)).append("\n");
    sb.append("    timeAlgoChanged: ").append(StringUtil.toIndentedString(timeAlgoChanged)).append("\n");
    sb.append("    timePidComputed: ").append(StringUtil.toIndentedString(timePidComputed)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
