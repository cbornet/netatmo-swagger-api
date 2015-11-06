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



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class NAHouseModel  {
  
  private String algoType = null;
  private NAHouseModelCa ca = null;
  private Map<String, Integer> extTemps = new HashMap<String, Integer>();
  private Boolean firstAnticipateAvail = null;
  private Boolean firstPidAvail = null;
  private NAStation gefs = null;
  private String inUse = null;
  private NADate lastComputeTry = null;
  private NALinkStation linkStation = null;
  private NAPidAlgo pidAlgo = null;
  private NAStation station = null;
  private String preferedAlgoType = null;
  private NASimpleAlgo simpleAlgo = null;
  private NADate time = null;
  private Boolean stationFirsttimeAnticipate = null;
  private Integer timeAlgoChanged = null;
  private Integer timePidComputed = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("algo_type")
  public String getAlgoType() {
    return algoType;
  }
  public void setAlgoType(String algoType) {
    this.algoType = algoType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("ca")
  public NAHouseModelCa getCa() {
    return ca;
  }
  public void setCa(NAHouseModelCa ca) {
    this.ca = ca;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("ext_temps")
  public Map<String, Integer> getExtTemps() {
    return extTemps;
  }
  public void setExtTemps(Map<String, Integer> extTemps) {
    this.extTemps = extTemps;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("first_anticipate_avail")
  public Boolean getFirstAnticipateAvail() {
    return firstAnticipateAvail;
  }
  public void setFirstAnticipateAvail(Boolean firstAnticipateAvail) {
    this.firstAnticipateAvail = firstAnticipateAvail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("first_pid_avail")
  public Boolean getFirstPidAvail() {
    return firstPidAvail;
  }
  public void setFirstPidAvail(Boolean firstPidAvail) {
    this.firstPidAvail = firstPidAvail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("gefs")
  public NAStation getGefs() {
    return gefs;
  }
  public void setGefs(NAStation gefs) {
    this.gefs = gefs;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("in_use")
  public String getInUse() {
    return inUse;
  }
  public void setInUse(String inUse) {
    this.inUse = inUse;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("last_compute_try")
  public NADate getLastComputeTry() {
    return lastComputeTry;
  }
  public void setLastComputeTry(NADate lastComputeTry) {
    this.lastComputeTry = lastComputeTry;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("link_station")
  public NALinkStation getLinkStation() {
    return linkStation;
  }
  public void setLinkStation(NALinkStation linkStation) {
    this.linkStation = linkStation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("pid_algo")
  public NAPidAlgo getPidAlgo() {
    return pidAlgo;
  }
  public void setPidAlgo(NAPidAlgo pidAlgo) {
    this.pidAlgo = pidAlgo;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("station")
  public NAStation getStation() {
    return station;
  }
  public void setStation(NAStation station) {
    this.station = station;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("prefered_algo_type")
  public String getPreferedAlgoType() {
    return preferedAlgoType;
  }
  public void setPreferedAlgoType(String preferedAlgoType) {
    this.preferedAlgoType = preferedAlgoType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("simple_algo")
  public NASimpleAlgo getSimpleAlgo() {
    return simpleAlgo;
  }
  public void setSimpleAlgo(NASimpleAlgo simpleAlgo) {
    this.simpleAlgo = simpleAlgo;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("time")
  public NADate getTime() {
    return time;
  }
  public void setTime(NADate time) {
    this.time = time;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("station_firsttime_anticipate")
  public Boolean getStationFirsttimeAnticipate() {
    return stationFirsttimeAnticipate;
  }
  public void setStationFirsttimeAnticipate(Boolean stationFirsttimeAnticipate) {
    this.stationFirsttimeAnticipate = stationFirsttimeAnticipate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("time_algo_changed")
  public Integer getTimeAlgoChanged() {
    return timeAlgoChanged;
  }
  public void setTimeAlgoChanged(Integer timeAlgoChanged) {
    this.timeAlgoChanged = timeAlgoChanged;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("time_pid_computed")
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
