package io.swagger.client.model;

import io.swagger.client.StringUtil;
import java.util.*;
import io.swagger.client.model.NADashboardData;
import io.swagger.client.model.NADate;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-12T09:33:30.687+02:00")
public class NAModule  {
  
  private String id = null;
  private NADate dateSetup = null;
  private Integer firmware = null;
  private String type = null;
  private String moduleName = null;
  private String mainDevice = null;
  private Integer lastMessage = null;
  private Integer lastSeen = null;
  private Boolean publicExtData = null;
  private Integer rfStatus = null;
  private Integer batteryVp = null;
  private Integer thermOrientation = null;
  private Integer thermRelayCmd = null;
  private NADashboardData dashboardData = null;
  private List<String> dataType = new ArrayList<String>();

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("_id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("date_setup")
  public NADate getDateSetup() {
    return dateSetup;
  }
  public void setDateSetup(NADate dateSetup) {
    this.dateSetup = dateSetup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("firmware")
  public Integer getFirmware() {
    return firmware;
  }
  public void setFirmware(Integer firmware) {
    this.firmware = firmware;
  }

  
  /**
   * Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module
   **/
  @ApiModelProperty(value = "Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("module_name")
  public String getModuleName() {
    return moduleName;
  }
  public void setModuleName(String moduleName) {
    this.moduleName = moduleName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("main_device")
  public String getMainDevice() {
    return mainDevice;
  }
  public void setMainDevice(String mainDevice) {
    this.mainDevice = mainDevice;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("last_message")
  public Integer getLastMessage() {
    return lastMessage;
  }
  public void setLastMessage(Integer lastMessage) {
    this.lastMessage = lastMessage;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("last_seen")
  public Integer getLastSeen() {
    return lastSeen;
  }
  public void setLastSeen(Integer lastSeen) {
    this.lastSeen = lastSeen;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("public_ext_data")
  public Boolean getPublicExtData() {
    return publicExtData;
  }
  public void setPublicExtData(Boolean publicExtData) {
    this.publicExtData = publicExtData;
  }

  
  /**
   * \"It contains the current radio status. The different thresholds to take into account are :\" |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60
   **/
  @ApiModelProperty(value = "\"It contains the current radio status. The different thresholds to take into account are :\" |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60")
  @JsonProperty("rf_status")
  public Integer getRfStatus() {
    return rfStatus;
  }
  public void setRfStatus(Integer rfStatus) {
    this.rfStatus = rfStatus;
  }

  
  /**
   * It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\"Indoor module Battery range: 6000 ... 4200\" |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\"Below 4560: very low\" |\n  \n\"Raingauge and outdoor module Battery range: 6000 ... 3600\" |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\"Below 4000: very low\" |\n  \n\"Thermostat Battery range: 4500 ... 3000\" |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\"Below 3000: very low\"
   **/
  @ApiModelProperty(value = "It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\"Indoor module Battery range: 6000 ... 4200\" |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\"Below 4560: very low\" |\n  \n\"Raingauge and outdoor module Battery range: 6000 ... 3600\" |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\"Below 4000: very low\" |\n  \n\"Thermostat Battery range: 4500 ... 3000\" |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\"Below 3000: very low\"")
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
   * It contains all the measurements that can be displayed on the dashboard
   **/
  @ApiModelProperty(value = "It contains all the measurements that can be displayed on the dashboard")
  @JsonProperty("dashboard_data")
  public NADashboardData getDashboardData() {
    return dashboardData;
  }
  public void setDashboardData(NADashboardData dashboardData) {
    this.dashboardData = dashboardData;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("data_type")
  public List<String> getDataType() {
    return dataType;
  }
  public void setDataType(List<String> dataType) {
    this.dataType = dataType;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAModule {\n");
    
    sb.append("    id: ").append(StringUtil.toIndentedString(id)).append("\n");
    sb.append("    dateSetup: ").append(StringUtil.toIndentedString(dateSetup)).append("\n");
    sb.append("    firmware: ").append(StringUtil.toIndentedString(firmware)).append("\n");
    sb.append("    type: ").append(StringUtil.toIndentedString(type)).append("\n");
    sb.append("    moduleName: ").append(StringUtil.toIndentedString(moduleName)).append("\n");
    sb.append("    mainDevice: ").append(StringUtil.toIndentedString(mainDevice)).append("\n");
    sb.append("    lastMessage: ").append(StringUtil.toIndentedString(lastMessage)).append("\n");
    sb.append("    lastSeen: ").append(StringUtil.toIndentedString(lastSeen)).append("\n");
    sb.append("    publicExtData: ").append(StringUtil.toIndentedString(publicExtData)).append("\n");
    sb.append("    rfStatus: ").append(StringUtil.toIndentedString(rfStatus)).append("\n");
    sb.append("    batteryVp: ").append(StringUtil.toIndentedString(batteryVp)).append("\n");
    sb.append("    thermOrientation: ").append(StringUtil.toIndentedString(thermOrientation)).append("\n");
    sb.append("    thermRelayCmd: ").append(StringUtil.toIndentedString(thermRelayCmd)).append("\n");
    sb.append("    dashboardData: ").append(StringUtil.toIndentedString(dashboardData)).append("\n");
    sb.append("    dataType: ").append(StringUtil.toIndentedString(dataType)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
