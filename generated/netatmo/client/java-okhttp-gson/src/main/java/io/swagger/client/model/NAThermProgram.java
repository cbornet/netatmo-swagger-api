package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NATimeTableItem;
import io.swagger.client.model.NAZone;
import java.util.*;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAThermProgram   {
  
  @SerializedName("program_id")
  private String programId = null;
  
  @SerializedName("name")
  private String name = null;
  
  @SerializedName("zones")
  private List<NAZone> zones = new ArrayList<NAZone>();
  
  @SerializedName("timetable")
  private List<NATimeTableItem> timetable = new ArrayList<NATimeTableItem>();
  
  @SerializedName("selected")
  private Boolean selected = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getProgramId() {
    return programId;
  }
  public void setProgramId(String programId) {
    this.programId = programId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<NAZone> getZones() {
    return zones;
  }
  public void setZones(List<NAZone> zones) {
    this.zones = zones;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<NATimeTableItem> getTimetable() {
    return timetable;
  }
  public void setTimetable(List<NATimeTableItem> timetable) {
    this.timetable = timetable;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getSelected() {
    return selected;
  }
  public void setSelected(Boolean selected) {
    this.selected = selected;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAThermProgram {\n");
    
    sb.append("    programId: ").append(StringUtil.toIndentedString(programId)).append("\n");
    sb.append("    name: ").append(StringUtil.toIndentedString(name)).append("\n");
    sb.append("    zones: ").append(StringUtil.toIndentedString(zones)).append("\n");
    sb.append("    timetable: ").append(StringUtil.toIndentedString(timetable)).append("\n");
    sb.append("    selected: ").append(StringUtil.toIndentedString(selected)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
