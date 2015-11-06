package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NAHeatingSystem;
import io.swagger.client.model.NAHouseModel;
import java.util.*;
import java.util.Map;
import io.swagger.client.model.NAPlace;
import io.swagger.client.model.NAThermProgram;
import io.swagger.client.model.NADate;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NADevice  {
  
  @SerializedName("_id")
  private String id = null;
  
  @SerializedName("behavior")
  private Integer behavior = null;
  
  @SerializedName("cipher_id")
  private String cipherId = null;
  
  @SerializedName("date_setup")
  private NADate dateSetup = null;
  
  @SerializedName("firmware")
  private Integer firmware = null;
  
  @SerializedName("hw_version")
  private Integer hwVersion = null;
  
  @SerializedName("heating_system")
  private NAHeatingSystem heatingSystem = null;
  
  @SerializedName("house_model")
  private NAHouseModel houseModel = null;
  
  @SerializedName("ip")
  private String ip = null;
  
  @SerializedName("last_fw_update")
  private Integer lastFwUpdate = null;
  
  @SerializedName("last_radio_store")
  private Integer lastRadioStore = null;
  
  @SerializedName("last_status_store")
  private Integer lastStatusStore = null;
  
  @SerializedName("last_upgrade")
  private Integer lastUpgrade = null;
  
  @SerializedName("module_name")
  private String moduleName = null;
  
  @SerializedName("modules")
  private List<String> modules = new ArrayList<String>();
  
  @SerializedName("place")
  private NAPlace place = null;
  
  @SerializedName("setpoint")
  private Object setpoint = null;
  
  @SerializedName("setpoint_default_duration")
  private Integer setpointDefaultDuration = null;
  
  @SerializedName("setpoint_order")
  private Map<String, List<NAObject>> setpointOrder = new HashMap<String, List<NAObject>>();
  
  @SerializedName("public_ext_data")
  private Boolean publicExtData = null;
  
  @SerializedName("station_name")
  private String stationName = null;
  
  @SerializedName("therm_program")
  private Map<String, NAThermProgram> thermProgram = new HashMap<String, NAThermProgram>();
  
  @SerializedName("therm_program_backup")
  private Map<String, List<NAThermProgram>> thermProgramBackup = new HashMap<String, List<NAThermProgram>>();
  
  @SerializedName("therm_program_order")
  private Map<String, List<NAObject>> thermProgramOrder = new HashMap<String, List<NAObject>>();
  
  @SerializedName("type")
  private String type = null;
  
  @SerializedName("user_owner")
  private List<String> userOwner = new ArrayList<String>();
  
  @SerializedName("udp_conn")
  private Boolean udpConn = null;
  
  @SerializedName("wifi_status")
  private Integer wifiStatus = null;
  
  @SerializedName("new_feature_avail")
  private Boolean newFeatureAvail = null;
  
  @SerializedName("first_pid_avail")
  private Boolean firstPidAvail = null;
  
  @SerializedName("data_type")
  private List<String> dataType = new ArrayList<String>();
  

  
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
  public Integer getBehavior() {
    return behavior;
  }
  public void setBehavior(Integer behavior) {
    this.behavior = behavior;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCipherId() {
    return cipherId;
  }
  public void setCipherId(String cipherId) {
    this.cipherId = cipherId;
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
   **/
  @ApiModelProperty(value = "")
  public Integer getHwVersion() {
    return hwVersion;
  }
  public void setHwVersion(Integer hwVersion) {
    this.hwVersion = hwVersion;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAHeatingSystem getHeatingSystem() {
    return heatingSystem;
  }
  public void setHeatingSystem(NAHeatingSystem heatingSystem) {
    this.heatingSystem = heatingSystem;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAHouseModel getHouseModel() {
    return houseModel;
  }
  public void setHouseModel(NAHouseModel houseModel) {
    this.houseModel = houseModel;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getIp() {
    return ip;
  }
  public void setIp(String ip) {
    this.ip = ip;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastFwUpdate() {
    return lastFwUpdate;
  }
  public void setLastFwUpdate(Integer lastFwUpdate) {
    this.lastFwUpdate = lastFwUpdate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastRadioStore() {
    return lastRadioStore;
  }
  public void setLastRadioStore(Integer lastRadioStore) {
    this.lastRadioStore = lastRadioStore;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastStatusStore() {
    return lastStatusStore;
  }
  public void setLastStatusStore(Integer lastStatusStore) {
    this.lastStatusStore = lastStatusStore;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLastUpgrade() {
    return lastUpgrade;
  }
  public void setLastUpgrade(Integer lastUpgrade) {
    this.lastUpgrade = lastUpgrade;
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
   * It lists which modules are linked with this device
   **/
  @ApiModelProperty(value = "It lists which modules are linked with this device")
  public List<String> getModules() {
    return modules;
  }
  public void setModules(List<String> modules) {
    this.modules = modules;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAPlace getPlace() {
    return place;
  }
  public void setPlace(NAPlace place) {
    this.place = place;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Object getSetpoint() {
    return setpoint;
  }
  public void setSetpoint(Object setpoint) {
    this.setpoint = setpoint;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getSetpointDefaultDuration() {
    return setpointDefaultDuration;
  }
  public void setSetpointDefaultDuration(Integer setpointDefaultDuration) {
    this.setpointDefaultDuration = setpointDefaultDuration;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Map<String, List<NAObject>> getSetpointOrder() {
    return setpointOrder;
  }
  public void setSetpointOrder(Map<String, List<NAObject>> setpointOrder) {
    this.setpointOrder = setpointOrder;
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
   **/
  @ApiModelProperty(value = "")
  public String getStationName() {
    return stationName;
  }
  public void setStationName(String stationName) {
    this.stationName = stationName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Map<String, NAThermProgram> getThermProgram() {
    return thermProgram;
  }
  public void setThermProgram(Map<String, NAThermProgram> thermProgram) {
    this.thermProgram = thermProgram;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Map<String, List<NAThermProgram>> getThermProgramBackup() {
    return thermProgramBackup;
  }
  public void setThermProgramBackup(Map<String, List<NAThermProgram>> thermProgramBackup) {
    this.thermProgramBackup = thermProgramBackup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Map<String, List<NAObject>> getThermProgramOrder() {
    return thermProgramOrder;
  }
  public void setThermProgramOrder(Map<String, List<NAObject>> thermProgramOrder) {
    this.thermProgramOrder = thermProgramOrder;
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
  public List<String> getUserOwner() {
    return userOwner;
  }
  public void setUserOwner(List<String> userOwner) {
    this.userOwner = userOwner;
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
   * It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal
   **/
  @ApiModelProperty(value = "It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal")
  public Integer getWifiStatus() {
    return wifiStatus;
  }
  public void setWifiStatus(Integer wifiStatus) {
    this.wifiStatus = wifiStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getNewFeatureAvail() {
    return newFeatureAvail;
  }
  public void setNewFeatureAvail(Boolean newFeatureAvail) {
    this.newFeatureAvail = newFeatureAvail;
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
  public List<String> getDataType() {
    return dataType;
  }
  public void setDataType(List<String> dataType) {
    this.dataType = dataType;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NADevice {\n");
    
    sb.append("    id: ").append(StringUtil.toIndentedString(id)).append("\n");
    sb.append("    behavior: ").append(StringUtil.toIndentedString(behavior)).append("\n");
    sb.append("    cipherId: ").append(StringUtil.toIndentedString(cipherId)).append("\n");
    sb.append("    dateSetup: ").append(StringUtil.toIndentedString(dateSetup)).append("\n");
    sb.append("    firmware: ").append(StringUtil.toIndentedString(firmware)).append("\n");
    sb.append("    hwVersion: ").append(StringUtil.toIndentedString(hwVersion)).append("\n");
    sb.append("    heatingSystem: ").append(StringUtil.toIndentedString(heatingSystem)).append("\n");
    sb.append("    houseModel: ").append(StringUtil.toIndentedString(houseModel)).append("\n");
    sb.append("    ip: ").append(StringUtil.toIndentedString(ip)).append("\n");
    sb.append("    lastFwUpdate: ").append(StringUtil.toIndentedString(lastFwUpdate)).append("\n");
    sb.append("    lastRadioStore: ").append(StringUtil.toIndentedString(lastRadioStore)).append("\n");
    sb.append("    lastStatusStore: ").append(StringUtil.toIndentedString(lastStatusStore)).append("\n");
    sb.append("    lastUpgrade: ").append(StringUtil.toIndentedString(lastUpgrade)).append("\n");
    sb.append("    moduleName: ").append(StringUtil.toIndentedString(moduleName)).append("\n");
    sb.append("    modules: ").append(StringUtil.toIndentedString(modules)).append("\n");
    sb.append("    place: ").append(StringUtil.toIndentedString(place)).append("\n");
    sb.append("    setpoint: ").append(StringUtil.toIndentedString(setpoint)).append("\n");
    sb.append("    setpointDefaultDuration: ").append(StringUtil.toIndentedString(setpointDefaultDuration)).append("\n");
    sb.append("    setpointOrder: ").append(StringUtil.toIndentedString(setpointOrder)).append("\n");
    sb.append("    publicExtData: ").append(StringUtil.toIndentedString(publicExtData)).append("\n");
    sb.append("    stationName: ").append(StringUtil.toIndentedString(stationName)).append("\n");
    sb.append("    thermProgram: ").append(StringUtil.toIndentedString(thermProgram)).append("\n");
    sb.append("    thermProgramBackup: ").append(StringUtil.toIndentedString(thermProgramBackup)).append("\n");
    sb.append("    thermProgramOrder: ").append(StringUtil.toIndentedString(thermProgramOrder)).append("\n");
    sb.append("    type: ").append(StringUtil.toIndentedString(type)).append("\n");
    sb.append("    userOwner: ").append(StringUtil.toIndentedString(userOwner)).append("\n");
    sb.append("    udpConn: ").append(StringUtil.toIndentedString(udpConn)).append("\n");
    sb.append("    wifiStatus: ").append(StringUtil.toIndentedString(wifiStatus)).append("\n");
    sb.append("    newFeatureAvail: ").append(StringUtil.toIndentedString(newFeatureAvail)).append("\n");
    sb.append("    firstPidAvail: ").append(StringUtil.toIndentedString(firstPidAvail)).append("\n");
    sb.append("    dataType: ").append(StringUtil.toIndentedString(dataType)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
