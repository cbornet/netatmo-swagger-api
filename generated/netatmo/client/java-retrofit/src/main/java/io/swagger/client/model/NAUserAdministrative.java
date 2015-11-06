package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAUserAdministrative  {
  
  @SerializedName("country")
  private String country = null;
  
  @SerializedName("lang")
  private String lang = null;
  
  @SerializedName("reg_locale")
  private String regLocale = null;
  
  @SerializedName("unit")
  private String unit = null;
  
  @SerializedName("windunit")
  private String windunit = null;
  
  @SerializedName("pressureunit")
  private String pressureunit = null;
  
  @SerializedName("feel_like_algo")
  private String feelLikeAlgo = null;
  

  
  /**
   * user country
   **/
  @ApiModelProperty(value = "user country")
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
