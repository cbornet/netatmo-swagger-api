package io.swagger.model;

import io.swagger.model.NAThermMeasure;
import io.swagger.model.NASetpoint;
import java.util.*;
import io.swagger.model.NAThermProgram;

import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-11T02:15:19.344+02:00")
public class NAThermStateBody  {
  
  private NASetpoint setpoint = null;
  private NASetpoint setpointOrder = null;
  private NAThermProgram thermProgram = null;
  private List<NAThermProgram> thermProgramBackup = new ArrayList<NAThermProgram>();
  private NAThermProgram thermProgramOrder = null;
  private Integer thermOrientation = null;
  private Integer thermRelayCmd = null;
  private Integer batteryVp = null;
  private Integer rfStatus = null;
  private Boolean plugConnectedBoiler = null;
  private Boolean udpConn = null;
  private Integer lastThermSeen = null;
  private Integer lastPlugSeen = null;
  private Integer wifiStatus = null;
  private NAThermMeasure measured = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("setpoint")
  public NASetpoint getSetpoint() {
    return setpoint;
  }
  public void setSetpoint(NASetpoint setpoint) {
    this.setpoint = setpoint;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("setpoint_order")
  public NASetpoint getSetpointOrder() {
    return setpointOrder;
  }
  public void setSetpointOrder(NASetpoint setpointOrder) {
    this.setpointOrder = setpointOrder;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("therm_program")
  public NAThermProgram getThermProgram() {
    return thermProgram;
  }
  public void setThermProgram(NAThermProgram thermProgram) {
    this.thermProgram = thermProgram;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("therm_program_backup")
  public List<NAThermProgram> getThermProgramBackup() {
    return thermProgramBackup;
  }
  public void setThermProgramBackup(List<NAThermProgram> thermProgramBackup) {
    this.thermProgramBackup = thermProgramBackup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("therm_program_order")
  public NAThermProgram getThermProgramOrder() {
    return thermProgramOrder;
  }
  public void setThermProgramOrder(NAThermProgram thermProgramOrder) {
    this.thermProgramOrder = thermProgramOrder;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("therm_orientation")
  public Integer getThermOrientation() {
    return thermOrientation;
  }
  public void setThermOrientation(Integer thermOrientation) {
    this.thermOrientation = thermOrientation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("therm_relay_cmd")
  public Integer getThermRelayCmd() {
    return thermRelayCmd;
  }
  public void setThermRelayCmd(Integer thermRelayCmd) {
    this.thermRelayCmd = thermRelayCmd;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("battery_vp")
  public Integer getBatteryVp() {
    return batteryVp;
  }
  public void setBatteryVp(Integer batteryVp) {
    this.batteryVp = batteryVp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("rf_status")
  public Integer getRfStatus() {
    return rfStatus;
  }
  public void setRfStatus(Integer rfStatus) {
    this.rfStatus = rfStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("plug_connected_boiler")
  public Boolean getPlugConnectedBoiler() {
    return plugConnectedBoiler;
  }
  public void setPlugConnectedBoiler(Boolean plugConnectedBoiler) {
    this.plugConnectedBoiler = plugConnectedBoiler;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("udp_conn")
  public Boolean getUdpConn() {
    return udpConn;
  }
  public void setUdpConn(Boolean udpConn) {
    this.udpConn = udpConn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("last_therm_seen")
  public Integer getLastThermSeen() {
    return lastThermSeen;
  }
  public void setLastThermSeen(Integer lastThermSeen) {
    this.lastThermSeen = lastThermSeen;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("last_plug_seen")
  public Integer getLastPlugSeen() {
    return lastPlugSeen;
  }
  public void setLastPlugSeen(Integer lastPlugSeen) {
    this.lastPlugSeen = lastPlugSeen;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("wifi_status")
  public Integer getWifiStatus() {
    return wifiStatus;
  }
  public void setWifiStatus(Integer wifiStatus) {
    this.wifiStatus = wifiStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("measured")
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
    
    sb.append("  setpoint: ").append(setpoint).append("\n");
    sb.append("  setpointOrder: ").append(setpointOrder).append("\n");
    sb.append("  thermProgram: ").append(thermProgram).append("\n");
    sb.append("  thermProgramBackup: ").append(thermProgramBackup).append("\n");
    sb.append("  thermProgramOrder: ").append(thermProgramOrder).append("\n");
    sb.append("  thermOrientation: ").append(thermOrientation).append("\n");
    sb.append("  thermRelayCmd: ").append(thermRelayCmd).append("\n");
    sb.append("  batteryVp: ").append(batteryVp).append("\n");
    sb.append("  rfStatus: ").append(rfStatus).append("\n");
    sb.append("  plugConnectedBoiler: ").append(plugConnectedBoiler).append("\n");
    sb.append("  udpConn: ").append(udpConn).append("\n");
    sb.append("  lastThermSeen: ").append(lastThermSeen).append("\n");
    sb.append("  lastPlugSeen: ").append(lastPlugSeen).append("\n");
    sb.append("  wifiStatus: ").append(wifiStatus).append("\n");
    sb.append("  measured: ").append(measured).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
