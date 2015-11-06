package io.swagger.client.model;

import java.util.*;
import io.swagger.client.model.NADashboardData;
import io.swagger.client.model.NADate;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAModule  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("date_setup")
  private NADate dateSetup = null;
  @SerializedName("firmware")
  private Integer firmware = null;
  @SerializedName("type")
  private String type = null;
  @SerializedName("module_name")
  private String moduleName = null;
  @SerializedName("main_device")
  private String mainDevice = null;
  @SerializedName("last_message")
  private Integer lastMessage = null;
  @SerializedName("last_seen")
  private Integer lastSeen = null;
  @SerializedName("public_ext_data")
  private Boolean publicExtData = null;
  @SerializedName("rf_status")
  private Integer rfStatus = null;
  @SerializedName("battery_vp")
  private Integer batteryVp = null;
  @SerializedName("therm_orientation")
  private Integer thermOrientation = null;
  @SerializedName("therm_relay_cmd")
  private Integer thermRelayCmd = null;
  @SerializedName("dashboard_data")
  private NADashboardData dashboardData = null;
  @SerializedName("data_type")
  private List<String> dataType = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NADate getDateSetup() {
    return dateSetup;
  }
  public void setDateSetup(NADate dateSetup) {
    this.dateSetup = dateSetup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getModuleName() {
    return moduleName;
  }
  public void setModuleName(String moduleName) {
    this.moduleName = moduleName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMainDevice() {
    return mainDevice;
  }
  public void setMainDevice(String mainDevice) {
    this.mainDevice = mainDevice;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastMessage() {
    return lastMessage;
  }
  public void setLastMessage(Integer lastMessage) {
    this.lastMessage = lastMessage;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastSeen() {
    return lastSeen;
  }
  public void setLastSeen(Integer lastSeen) {
    this.lastSeen = lastSeen;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
  public Integer getBatteryVp() {
    return batteryVp;
  }
  public void setBatteryVp(Integer batteryVp) {
    this.batteryVp = batteryVp;
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
   * It contains all the measurements that can be displayed on the dashboard
   **/
  @ApiModelProperty(value = "It contains all the measurements that can be displayed on the dashboard")
  public NADashboardData getDashboardData() {
    return dashboardData;
  }
  public void setDashboardData(NADashboardData dashboardData) {
    this.dashboardData = dashboardData;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  dateSetup: ").append(dateSetup).append("\n");
    sb.append("  firmware: ").append(firmware).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  moduleName: ").append(moduleName).append("\n");
    sb.append("  mainDevice: ").append(mainDevice).append("\n");
    sb.append("  lastMessage: ").append(lastMessage).append("\n");
    sb.append("  lastSeen: ").append(lastSeen).append("\n");
    sb.append("  publicExtData: ").append(publicExtData).append("\n");
    sb.append("  rfStatus: ").append(rfStatus).append("\n");
    sb.append("  batteryVp: ").append(batteryVp).append("\n");
    sb.append("  thermOrientation: ").append(thermOrientation).append("\n");
    sb.append("  thermRelayCmd: ").append(thermRelayCmd).append("\n");
    sb.append("  dashboardData: ").append(dashboardData).append("\n");
    sb.append("  dataType: ").append(dataType).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
