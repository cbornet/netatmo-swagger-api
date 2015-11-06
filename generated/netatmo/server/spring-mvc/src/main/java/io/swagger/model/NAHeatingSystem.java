package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-11T02:15:19.344+02:00")
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
    
    sb.append("  heatingEnergy: ").append(heatingEnergy).append("\n");
    sb.append("  heatingSystemWindowSeen: ").append(heatingSystemWindowSeen).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
