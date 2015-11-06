package io.swagger.client.model;

import io.swagger.client.model.NAUserBody;
import io.swagger.client.model.NAResponse;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAUserResponse extends NAResponse {
  
  @SerializedName("time_server")
  private Integer timeServer = null;
  @SerializedName("time_exec")
  private Double timeExec = null;
  @SerializedName("body")
  private NAUserBody body = null;
  @SerializedName("status")
  private String status = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTimeServer() {
    return timeServer;
  }
  public void setTimeServer(Integer timeServer) {
    this.timeServer = timeServer;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Double getTimeExec() {
    return timeExec;
  }
  public void setTimeExec(Double timeExec) {
    this.timeExec = timeExec;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NAUserBody getBody() {
    return body;
  }
  public void setBody(NAUserBody body) {
    this.body = body;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
