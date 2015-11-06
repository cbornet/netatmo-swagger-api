package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAObject  {
  
  @SerializedName("$id")
  private String $Id = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String get$Id() {
    return $Id;
  }
  public void set$Id(String $Id) {
    this.$Id = $Id;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAObject {\n");
    
    sb.append("  $Id: ").append($Id).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
