package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NANewScheduleBody;
import io.swagger.client.model.NAResponse;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:15.634+02:00")
public class NANewScheduleResponse  {
  
  private Integer timeServer = null;
  private Double timeExec = null;
  private NANewScheduleBody body = null;
  private String status = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("time_server")
  public Integer getTimeServer() {
    return timeServer;
  }
  public void setTimeServer(Integer timeServer) {
    this.timeServer = timeServer;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("time_exec")
  public Double getTimeExec() {
    return timeExec;
  }
  public void setTimeExec(Double timeExec) {
    this.timeExec = timeExec;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("body")
  public NANewScheduleBody getBody() {
    return body;
  }
  public void setBody(NANewScheduleBody body) {
    this.body = body;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("status")
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NANewScheduleResponse {\n");
    sb.append("    ").append(StringUtil.toIndentedString(super.toString())).append("\n");
    sb.append("    timeServer: ").append(StringUtil.toIndentedString(timeServer)).append("\n");
    sb.append("    timeExec: ").append(StringUtil.toIndentedString(timeExec)).append("\n");
    sb.append("    body: ").append(StringUtil.toIndentedString(body)).append("\n");
    sb.append("    status: ").append(StringUtil.toIndentedString(status)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
