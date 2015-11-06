package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NANewScheduleBody  {
  
  @SerializedName("schedule_id")
  private String scheduleId = null;
  

  
  /**
   * Id of the schedule. It can be use with the method \"switchschedule\"
   **/
  @ApiModelProperty(value = "Id of the schedule. It can be use with the method \"switchschedule\"")
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
