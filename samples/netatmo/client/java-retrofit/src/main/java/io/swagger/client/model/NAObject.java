package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;

import java.io.Serializable;

import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAObject implements Serializable {
  
  @SerializedName("$id")
  private String id = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAObject {\n");
    
    sb.append("    id: ").append(StringUtil.toIndentedString(id)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
