package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-11T02:15:19.344+02:00")
public class NANewScheduleBody  {
  
  private String scheduleId = null;

  
  /**
   * Id of the schedule. It can be use with the method \"switchschedule\"
   **/
  @ApiModelProperty(value = "Id of the schedule. It can be use with the method \"switchschedule\"")
  @JsonProperty("schedule_id")
  public String getScheduleId() {
    return scheduleId;
  }
  public void setScheduleId(String scheduleId) {
    this.scheduleId = scheduleId;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NANewScheduleBody {\n");
    
    sb.append("  scheduleId: ").append(scheduleId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
