package io.swagger.client.model;

import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAPlace  {
  
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
  private List<Double> location = null;
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
    
    sb.append("  city: ").append(city).append("\n");
    sb.append("  altitude: ").append(altitude).append("\n");
    sb.append("  country: ").append(country).append("\n");
    sb.append("  fromIp: ").append(fromIp).append("\n");
    sb.append("  improveLocProposed: ").append(improveLocProposed).append("\n");
    sb.append("  location: ").append(location).append("\n");
    sb.append("  timezone: ").append(timezone).append("\n");
    sb.append("  trustLocation: ").append(trustLocation).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
