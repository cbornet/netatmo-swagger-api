package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NATimeTableItem;
import io.swagger.client.model.NAZone;
import java.util.*;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class NAThermProgram  {
  
  private String programId = null;
  private String name = null;
  private List<NAZone> zones = new ArrayList<NAZone>();
  private List<NATimeTableItem> timetable = new ArrayList<NATimeTableItem>();
  private Boolean selected = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("program_id")
  public String getProgramId() {
    return programId;
  }
  public void setProgramId(String programId) {
    this.programId = programId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("zones")
  public List<NAZone> getZones() {
    return zones;
  }
  public void setZones(List<NAZone> zones) {
    this.zones = zones;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("timetable")
  public List<NATimeTableItem> getTimetable() {
    return timetable;
  }
  public void setTimetable(List<NATimeTableItem> timetable) {
    this.timetable = timetable;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("selected")
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
