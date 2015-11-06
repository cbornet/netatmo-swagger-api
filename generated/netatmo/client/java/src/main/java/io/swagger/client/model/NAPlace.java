package io.swagger.client.model;

import io.swagger.client.StringUtil;
import java.util.*;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:15.634+02:00")
public class NAPlace  {
  
  private String city = null;
  private Float altitude = null;
  private String country = null;
  private Boolean fromIp = null;
  private Boolean improveLocProposed = null;
  private List<Double> location = new ArrayList<Double>();
  private String timezone = null;
  private Boolean trustLocation = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("city")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("altitude")
  public Float getAltitude() {
    return altitude;
  }
  public void setAltitude(Float altitude) {
    this.altitude = altitude;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("from_ip")
  public Boolean getFromIp() {
    return fromIp;
  }
  public void setFromIp(Boolean fromIp) {
    this.fromIp = fromIp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("improveLocProposed")
  public Boolean getImproveLocProposed() {
    return improveLocProposed;
  }
  public void setImproveLocProposed(Boolean improveLocProposed) {
    this.improveLocProposed = improveLocProposed;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("location")
  public List<Double> getLocation() {
    return location;
  }
  public void setLocation(List<Double> location) {
    this.location = location;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("timezone")
  public String getTimezone() {
    return timezone;
  }
  public void setTimezone(String timezone) {
    this.timezone = timezone;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("trust_location")
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
