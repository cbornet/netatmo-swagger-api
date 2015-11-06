package io.swagger.model;

import io.swagger.model.NAUserBody;
import io.swagger.model.NAResponse;

import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-11T02:15:19.344+02:00")
public class NAUserResponse extends NAResponse {
  
  private Integer timeServer = null;
  private Double timeExec = null;
  private NAUserBody body = null;
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
  public NAUserBody getBody() {
    return body;
  }
  public void setBody(NAUserBody body) {
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
    sb.append("class NAUserResponse {\n");
    sb.append("  " + super.toString()).append("\n");
    sb.append("  timeServer: ").append(timeServer).append("\n");
    sb.append("  timeExec: ").append(timeExec).append("\n");
    sb.append("  body: ").append(body).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
