package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NAResponse;
import io.swagger.client.model.NAThermStateBody;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAThermStateResponse  {
  
  @SerializedName("time_server")
  private Integer timeServer = null;
  
  @SerializedName("time_exec")
  private Double timeExec = null;
  
  @SerializedName("body")
  private NAThermStateBody body = null;
  
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
  public NAThermStateBody getBody() {
    return body;
  }
  public void setBody(NAThermStateBody body) {
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
    sb.append("class NAThermStateResponse {\n");
    sb.append("    ").append(StringUtil.toIndentedString(super.toString())).append("\n");
    sb.append("    timeServer: ").append(StringUtil.toIndentedString(timeServer)).append("\n");
    sb.append("    timeExec: ").append(StringUtil.toIndentedString(timeExec)).append("\n");
    sb.append("    body: ").append(StringUtil.toIndentedString(body)).append("\n");
    sb.append("    status: ").append(StringUtil.toIndentedString(status)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
