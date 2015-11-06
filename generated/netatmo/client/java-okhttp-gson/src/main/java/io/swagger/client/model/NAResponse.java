package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAResponse   {
  
  @SerializedName("status")
  private String status = null;
  
  @SerializedName("time_exec")
  private Double timeExec = null;
  
  @SerializedName("time_server")
  private Integer timeServer = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
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
  public Integer getTimeServer() {
    return timeServer;
  }
  public void setTimeServer(Integer timeServer) {
    this.timeServer = timeServer;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAResponse {\n");
    
    sb.append("    status: ").append(StringUtil.toIndentedString(status)).append("\n");
    sb.append("    timeExec: ").append(StringUtil.toIndentedString(timeExec)).append("\n");
    sb.append("    timeServer: ").append(StringUtil.toIndentedString(timeServer)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
