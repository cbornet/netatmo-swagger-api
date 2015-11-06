package io.swagger.client.model;

import io.swagger.client.StringUtil;
import java.util.*;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAPlace   {
  
  @SerializedName("city")
  private String city = null;
  
  @SerializedName("altitude")
  private Float altitude = null;
  
  @SerializedName("country")
  private String country = null;
  
  @SerializedName("from_ip")
  private Boolean fromIp = null;
  
  @SerializedName("improveLocProposed")
  private Boolean improveLocProposed = null;
  
  @SerializedName("location")
  private List<Double> location = new ArrayList<Double>();
  
  @SerializedName("timezone")
  private String timezone = null;
  
  @SerializedName("trust_location")
  private Boolean trustLocation = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Float getAltitude() {
    return altitude;
  }
  public void setAltitude(Float altitude) {
    this.altitude = altitude;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getFromIp() {
    return fromIp;
  }
  public void setFromIp(Boolean fromIp) {
    this.fromIp = fromIp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getImproveLocProposed() {
    return improveLocProposed;
  }
  public void setImproveLocProposed(Boolean improveLocProposed) {
    this.improveLocProposed = improveLocProposed;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<Double> getLocation() {
    return location;
  }
  public void setLocation(List<Double> location) {
    this.location = location;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getTimezone() {
    return timezone;
  }
  public void setTimezone(String timezone) {
    this.timezone = timezone;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getTrustLocation() {
    return trustLocation;
  }
  public void setTrustLocation(Boolean trustLocation) {
    this.trustLocation = trustLocation;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAPlace {\n");
    
    sb.append("    city: ").append(StringUtil.toIndentedString(city)).append("\n");
    sb.append("    altitude: ").append(StringUtil.toIndentedString(altitude)).append("\n");
    sb.append("    country: ").append(StringUtil.toIndentedString(country)).append("\n");
    sb.append("    fromIp: ").append(StringUtil.toIndentedString(fromIp)).append("\n");
    sb.append("    improveLocProposed: ").append(StringUtil.toIndentedString(improveLocProposed)).append("\n");
    sb.append("    location: ").append(StringUtil.toIndentedString(location)).append("\n");
    sb.append("    timezone: ").append(StringUtil.toIndentedString(timezone)).append("\n");
    sb.append("    trustLocation: ").append(StringUtil.toIndentedString(trustLocation)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
