package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAHeatingSystem   {
  
  @SerializedName("heating_energy")
  private String heatingEnergy = null;
  
  @SerializedName("heating_system_window_seen")
  private Boolean heatingSystemWindowSeen = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getHeatingEnergy() {
    return heatingEnergy;
  }
  public void setHeatingEnergy(String heatingEnergy) {
    this.heatingEnergy = heatingEnergy;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
