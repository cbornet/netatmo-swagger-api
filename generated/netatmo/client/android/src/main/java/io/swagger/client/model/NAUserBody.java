package io.swagger.client.model;

import java.util.*;
import io.swagger.client.model.NAUserAdministrative;
import io.swagger.client.model.NADate;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAUserBody  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("administrative")
  private NAUserAdministrative administrative = null;
  @SerializedName("date_creation")
  private NADate dateCreation = null;
  @SerializedName("devices")
  private List<String> devices = null;
  @SerializedName("friend_devices")
  private List<String> friendDevices = null;
  @SerializedName("mail")
  private String mail = null;
  @SerializedName("timeline_not_read")
  private Integer timelineNotRead = null;
  @SerializedName("timeline_size")
  private Integer timelineSize = null;

  
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
   * Contains administrative information related to the user
   **/
  @ApiModelProperty(value = "Contains administrative information related to the user")
  public NAUserAdministrative getAdministrative() {
    return administrative;
  }
  public void setAdministrative(NAUserAdministrative administrative) {
    this.administrative = administrative;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NADate getDateCreation() {
    return dateCreation;
  }
  public void setDateCreation(NADate dateCreation) {
    this.dateCreation = dateCreation;
  }

  
  /**
   * An array of string containing the ids of the devices owned by the user
   **/
  @ApiModelProperty(value = "An array of string containing the ids of the devices owned by the user")
  public List<String> getDevices() {
    return devices;
  }
  public void setDevices(List<String> devices) {
    this.devices = devices;
  }

  
  /**
   * An array of string containing the ids of the devices on which the user has a \"guest\" access
   **/
  @ApiModelProperty(value = "An array of string containing the ids of the devices on which the user has a \"guest\" access")
  public List<String> getFriendDevices() {
    return friendDevices;
  }
  public void setFriendDevices(List<String> friendDevices) {
    this.friendDevices = friendDevices;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMail() {
    return mail;
  }
  public void setMail(String mail) {
    this.mail = mail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTimelineNotRead() {
    return timelineNotRead;
  }
  public void setTimelineNotRead(Integer timelineNotRead) {
    this.timelineNotRead = timelineNotRead;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTimelineSize() {
    return timelineSize;
  }
  public void setTimelineSize(Integer timelineSize) {
    this.timelineSize = timelineSize;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAUserBody {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  administrative: ").append(administrative).append("\n");
    sb.append("  dateCreation: ").append(dateCreation).append("\n");
    sb.append("  devices: ").append(devices).append("\n");
    sb.append("  friendDevices: ").append(friendDevices).append("\n");
    sb.append("  mail: ").append(mail).append("\n");
    sb.append("  timelineNotRead: ").append(timelineNotRead).append("\n");
    sb.append("  timelineSize: ").append(timelineSize).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
