package io.swagger.model;

import java.util.*;
import io.swagger.model.NAUserAdministrative;
import io.swagger.model.NADate;

import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-11T02:15:19.344+02:00")
public class NAUserBody  {
  
  private String id = null;
  private NAUserAdministrative administrative = null;
  private NADate dateCreation = null;
  private List<String> devices = new ArrayList<String>();
  private List<String> friendDevices = new ArrayList<String>();
  private String mail = null;
  private Integer timelineNotRead = null;
  private Integer timelineSize = null;

  
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
   * Contains administrative information related to the user
   **/
  @ApiModelProperty(value = "Contains administrative information related to the user")
  @JsonProperty("administrative")
  public NAUserAdministrative getAdministrative() {
    return administrative;
  }
  public void setAdministrative(NAUserAdministrative administrative) {
    this.administrative = administrative;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("date_creation")
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
  @JsonProperty("devices")
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
  @JsonProperty("friend_devices")
  public List<String> getFriendDevices() {
    return friendDevices;
  }
  public void setFriendDevices(List<String> friendDevices) {
    this.friendDevices = friendDevices;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("mail")
  public String getMail() {
    return mail;
  }
  public void setMail(String mail) {
    this.mail = mail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("timeline_not_read")
  public Integer getTimelineNotRead() {
    return timelineNotRead;
  }
  public void setTimelineNotRead(Integer timelineNotRead) {
    this.timelineNotRead = timelineNotRead;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("timeline_size")
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
