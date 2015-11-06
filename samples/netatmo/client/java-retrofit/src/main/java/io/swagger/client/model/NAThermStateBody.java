package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NAThermMeasure;
import io.swagger.client.model.NASetpoint;
import java.util.*;
import io.swagger.client.model.NAThermProgram;

import com.google.gson.annotations.SerializedName;

import java.io.Serializable;

import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAThermStateBody implements Serializable {
  
  @SerializedName("setpoint")
  private NASetpoint setpoint = null;
  
  @SerializedName("setpoint_order")
  private NASetpoint setpointOrder = null;
  
  @SerializedName("therm_program")
  private NAThermProgram thermProgram = null;
  
  @SerializedName("therm_program_backup")
  private List<NAThermProgram> thermProgramBackup = new ArrayList<NAThermProgram>();
  
  @SerializedName("therm_program_order")
  private NAThermProgram thermProgramOrder = null;
  
  @SerializedName("therm_orientation")
  private Integer thermOrientation = null;
  
  @SerializedName("therm_relay_cmd")
  private Integer thermRelayCmd = null;
  
  @SerializedName("battery_vp")
  private Integer batteryVp = null;
  
  @SerializedName("rf_status")
  private Integer rfStatus = null;
  
  @SerializedName("plug_connected_boiler")
  private Boolean plugConnectedBoiler = null;
  
  @SerializedName("udp_conn")
  private Boolean udpConn = null;
  
  @SerializedName("last_therm_seen")
  private Integer lastThermSeen = null;
  
  @SerializedName("last_plug_seen")
  private Integer lastPlugSeen = null;
  
  @SerializedName("wifi_status")
  private Integer wifiStatus = null;
  
  @SerializedName("measured")
  private NAThermMeasure measured = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NASetpoint getSetpoint() {
    return setpoint;
  }
  public void setSetpoint(NASetpoint setpoint) {
    this.setpoint = setpoint;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NASetpoint getSetpointOrder() {
    return setpointOrder;
  }
  public void setSetpointOrder(NASetpoint setpointOrder) {
    this.setpointOrder = setpointOrder;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAThermProgram getThermProgram() {
    return thermProgram;
  }
  public void setThermProgram(NAThermProgram thermProgram) {
    this.thermProgram = thermProgram;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<NAThermProgram> getThermProgramBackup() {
    return thermProgramBackup;
  }
  public void setThermProgramBackup(List<NAThermProgram> thermProgramBackup) {
    this.thermProgramBackup = thermProgramBackup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAThermProgram getThermProgramOrder() {
    return thermProgramOrder;
  }
  public void setThermProgramOrder(NAThermProgram thermProgramOrder) {
    this.thermProgramOrder = thermProgramOrder;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getThermOrientation() {
    return thermOrientation;
  }
  public void setThermOrientation(Integer thermOrientation) {
    this.thermOrientation = thermOrientation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getThermRelayCmd() {
    return thermRelayCmd;
  }
  public void setThermRelayCmd(Integer thermRelayCmd) {
    this.thermRelayCmd = thermRelayCmd;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getBatteryVp() {
    return batteryVp;
  }
  public void setBatteryVp(Integer batteryVp) {
    this.batteryVp = batteryVp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getRfStatus() {
    return rfStatus;
  }
  public void setRfStatus(Integer rfStatus) {
    this.rfStatus = rfStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getPlugConnectedBoiler() {
    return plugConnectedBoiler;
  }
  public void setPlugConnectedBoiler(Boolean plugConnectedBoiler) {
    this.plugConnectedBoiler = plugConnectedBoiler;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUdpConn() {
    return udpConn;
  }
  public void setUdpConn(Boolean udpConn) {
    this.udpConn = udpConn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastThermSeen() {
    return lastThermSeen;
  }
  public void setLastThermSeen(Integer lastThermSeen) {
    this.lastThermSeen = lastThermSeen;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastPlugSeen() {
    return lastPlugSeen;
  }
  public void setLastPlugSeen(Integer lastPlugSeen) {
    this.lastPlugSeen = lastPlugSeen;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getWifiStatus() {
    return wifiStatus;
  }
  public void setWifiStatus(Integer wifiStatus) {
    this.wifiStatus = wifiStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAThermMeasure getMeasured() {
    return measured;
  }
  public void setMeasured(NAThermMeasure measured) {
    this.measured = measured;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAThermStateBody {\n");
    
    sb.append("    setpoint: ").append(StringUtil.toIndentedString(setpoint)).append("\n");
    sb.append("    setpointOrder: ").append(StringUtil.toIndentedString(setpointOrder)).append("\n");
    sb.append("    thermProgram: ").append(StringUtil.toIndentedString(thermProgram)).append("\n");
    sb.append("    thermProgramBackup: ").append(StringUtil.toIndentedString(thermProgramBackup)).append("\n");
    sb.append("    thermProgramOrder: ").append(StringUtil.toIndentedString(thermProgramOrder)).append("\n");
    sb.append("    thermOrientation: ").append(StringUtil.toIndentedString(thermOrientation)).append("\n");
    sb.append("    thermRelayCmd: ").append(StringUtil.toIndentedString(thermRelayCmd)).append("\n");
    sb.append("    batteryVp: ").append(StringUtil.toIndentedString(batteryVp)).append("\n");
    sb.append("    rfStatus: ").append(StringUtil.toIndentedString(rfStatus)).append("\n");
    sb.append("    plugConnectedBoiler: ").append(StringUtil.toIndentedString(plugConnectedBoiler)).append("\n");
    sb.append("    udpConn: ").append(StringUtil.toIndentedString(udpConn)).append("\n");
    sb.append("    lastThermSeen: ").append(StringUtil.toIndentedString(lastThermSeen)).append("\n");
    sb.append("    lastPlugSeen: ").append(StringUtil.toIndentedString(lastPlugSeen)).append("\n");
    sb.append("    wifiStatus: ").append(StringUtil.toIndentedString(wifiStatus)).append("\n");
    sb.append("    measured: ").append(StringUtil.toIndentedString(measured)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
