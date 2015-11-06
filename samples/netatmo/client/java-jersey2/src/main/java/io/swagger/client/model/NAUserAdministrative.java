package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-12T09:33:30.687+02:00")
public class NAUserAdministrative  {
  
  private String country = null;
  private String lang = null;
  private String regLocale = null;
  private String unit = null;
  private String windunit = null;
  private String pressureunit = null;
  private String feelLikeAlgo = null;

  
  /**
   * user country
   **/
  @ApiModelProperty(value = "user country")
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  
  /**
   * user locale
   **/
  @ApiModelProperty(value = "user locale")
  @JsonProperty("lang")
  public String getLang() {
    return lang;
  }
  public void setLang(String lang) {
    this.lang = lang;
  }

  
  /**
   * user regional preferences (used for displaying date)
   **/
  @ApiModelProperty(value = "user regional preferences (used for displaying date)")
  @JsonProperty("reg_locale")
  public String getRegLocale() {
    return regLocale;
  }
  public void setRegLocale(String regLocale) {
    this.regLocale = regLocale;
  }

  
  /**
   * 0 -> metric system, 1 -> imperial system
   **/
  @ApiModelProperty(value = "0 -> metric system, 1 -> imperial system")
  @JsonProperty("unit")
  public String getUnit() {
    return unit;
  }
  public void setUnit(String unit) {
    this.unit = unit;
  }

  
  /**
   * 0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot
   **/
  @ApiModelProperty(value = "0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot")
  @JsonProperty("windunit")
  public String getWindunit() {
    return windunit;
  }
  public void setWindunit(String windunit) {
    this.windunit = windunit;
  }

  
  /**
   * 0 -> mbar, 1 -> inHg, 2 -> mmHg
   **/
  @ApiModelProperty(value = "0 -> mbar, 1 -> inHg, 2 -> mmHg")
  @JsonProperty("pressureunit")
  public String getPressureunit() {
    return pressureunit;
  }
  public void setPressureunit(String pressureunit) {
    this.pressureunit = pressureunit;
  }

  
  /**
   * algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index
   **/
  @ApiModelProperty(value = "algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index")
  @JsonProperty("feel_like_algo")
  public String getFeelLikeAlgo() {
    return feelLikeAlgo;
  }
  public void setFeelLikeAlgo(String feelLikeAlgo) {
    this.feelLikeAlgo = feelLikeAlgo;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAUserAdministrative {\n");
    
    sb.append("    country: ").append(StringUtil.toIndentedString(country)).append("\n");
    sb.append("    lang: ").append(StringUtil.toIndentedString(lang)).append("\n");
    sb.append("    regLocale: ").append(StringUtil.toIndentedString(regLocale)).append("\n");
    sb.append("    unit: ").append(StringUtil.toIndentedString(unit)).append("\n");
    sb.append("    windunit: ").append(StringUtil.toIndentedString(windunit)).append("\n");
    sb.append("    pressureunit: ").append(StringUtil.toIndentedString(pressureunit)).append("\n");
    sb.append("    feelLikeAlgo: ").append(StringUtil.toIndentedString(feelLikeAlgo)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
