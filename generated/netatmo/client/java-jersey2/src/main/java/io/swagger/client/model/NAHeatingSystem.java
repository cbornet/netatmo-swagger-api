package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class NAHeatingSystem  {
  
  private String heatingEnergy = null;
  private Boolean heatingSystemWindowSeen = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("heating_energy")
  public String getHeatingEnergy() {
    return heatingEnergy;
  }
  public void setHeatingEnergy(String heatingEnergy) {
    this.heatingEnergy = heatingEnergy;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("heating_system_window_seen")
  public Boolean getHeatingSystemWindowSeen() {
    return heatingSystemWindowSeen;
  }
  public void setHeatingSystemWindowSeen(Boolean heatingSystemWindowSeen) {
    this.heatingSystemWindowSeen = heatingSystemWindowSeen;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAHeatingSystem {\n");
    
    sb.append("    heatingEnergy: ").append(StringUtil.toIndentedString(heatingEnergy)).append("\n");
    sb.append("    heatingSystemWindowSeen: ").append(StringUtil.toIndentedString(heatingSystemWindowSeen)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
