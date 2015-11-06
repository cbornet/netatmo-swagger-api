package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-12T09:33:30.687+02:00")
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
    
    sb.append("    scheduleId: ").append(StringUtil.toIndentedString(scheduleId)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
