package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-12T09:33:30.687+02:00")
public class NADashboardData  {
  
  private Integer timeUtc = null;
  private Float deviceId = null;
  private Integer boilerOn = null;
  private Integer boilerOff = null;
  private Float temperature = null;
  private Integer dateMaxTemp = null;
  private Integer dateMinTemp = null;
  private Float minTemp = null;
  private Float maxTemp = null;
  private Float absolutePressure = null;
  private Float cO2 = null;
  private Float humidity = null;
  private Float noise = null;
  private Float pressure = null;
  private Integer rain = null;
  private Integer sumRain1 = null;
  private Integer sumRain24 = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("time_utc")
  public Integer getTimeUtc() {
    return timeUtc;
  }
  public void setTimeUtc(Integer timeUtc) {
    this.timeUtc = timeUtc;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("device_id")
  public Float getDeviceId() {
    return deviceId;
  }
  public void setDeviceId(Float deviceId) {
    this.deviceId = deviceId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("BoilerOn")
  public Integer getBoilerOn() {
    return boilerOn;
  }
  public void setBoilerOn(Integer boilerOn) {
    this.boilerOn = boilerOn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("BoilerOff")
  public Integer getBoilerOff() {
    return boilerOff;
  }
  public void setBoilerOff(Integer boilerOff) {
    this.boilerOff = boilerOff;
  }

  
  /**
   * Last temperature measure @ time_utc (in °C)
   **/
  @ApiModelProperty(value = "Last temperature measure @ time_utc (in °C)")
  @JsonProperty("Temperature")
  public Float getTemperature() {
    return temperature;
  }
  public void setTemperature(Float temperature) {
    this.temperature = temperature;
  }

  
  /**
   * Timestamp when max temperature was measured
   **/
  @ApiModelProperty(value = "Timestamp when max temperature was measured")
  @JsonProperty("date_max_temp")
  public Integer getDateMaxTemp() {
    return dateMaxTemp;
  }
  public void setDateMaxTemp(Integer dateMaxTemp) {
    this.dateMaxTemp = dateMaxTemp;
  }

  
  /**
   * Timestamp when min temperature was measured
   **/
  @ApiModelProperty(value = "Timestamp when min temperature was measured")
  @JsonProperty("date_min_temp")
  public Integer getDateMinTemp() {
    return dateMinTemp;
  }
  public void setDateMinTemp(Integer dateMinTemp) {
    this.dateMinTemp = dateMinTemp;
  }

  
  /**
   * Max temperature of the day (measured @ date_max_temp)
   **/
  @ApiModelProperty(value = "Max temperature of the day (measured @ date_max_temp)")
  @JsonProperty("min_temp")
  public Float getMinTemp() {
    return minTemp;
  }
  public void setMinTemp(Float minTemp) {
    this.minTemp = minTemp;
  }

  
  /**
   * Min temperature of the day (measured @ date_min_temp)
   **/
  @ApiModelProperty(value = "Min temperature of the day (measured @ date_min_temp)")
  @JsonProperty("max_temp")
  public Float getMaxTemp() {
    return maxTemp;
  }
  public void setMaxTemp(Float maxTemp) {
    this.maxTemp = maxTemp;
  }

  
  /**
   * Real measured pressure @ time_utc (in mb)
   **/
  @ApiModelProperty(value = "Real measured pressure @ time_utc (in mb)")
  @JsonProperty("AbsolutePressure")
  public Float getAbsolutePressure() {
    return absolutePressure;
  }
  public void setAbsolutePressure(Float absolutePressure) {
    this.absolutePressure = absolutePressure;
  }

  
  /**
   * Last Co2 measured @ time_utc (in ppm)
   **/
  @ApiModelProperty(value = "Last Co2 measured @ time_utc (in ppm)")
  @JsonProperty("CO2")
  public Float getCO2() {
    return cO2;
  }
  public void setCO2(Float cO2) {
    this.cO2 = cO2;
  }

  
  /**
   * Last humidity measured @ time_utc (in %)
   **/
  @ApiModelProperty(value = "Last humidity measured @ time_utc (in %)")
  @JsonProperty("Humidity")
  public Float getHumidity() {
    return humidity;
  }
  public void setHumidity(Float humidity) {
    this.humidity = humidity;
  }

  
  /**
   * Last noise measured @ time_utc (in db)
   **/
  @ApiModelProperty(value = "Last noise measured @ time_utc (in db)")
  @JsonProperty("Noise")
  public Float getNoise() {
    return noise;
  }
  public void setNoise(Float noise) {
    this.noise = noise;
  }

  
  /**
   * Last Sea level pressure measured @ time_utc (in mb)
   **/
  @ApiModelProperty(value = "Last Sea level pressure measured @ time_utc (in mb)")
  @JsonProperty("Pressure")
  public Float getPressure() {
    return pressure;
  }
  public void setPressure(Float pressure) {
    this.pressure = pressure;
  }

  
  /**
   * Last rain measured (in mm)
   **/
  @ApiModelProperty(value = "Last rain measured (in mm)")
  @JsonProperty("Rain")
  public Integer getRain() {
    return rain;
  }
  public void setRain(Integer rain) {
    this.rain = rain;
  }

  
  /**
   * Amount of rain in last hour
   **/
  @ApiModelProperty(value = "Amount of rain in last hour")
  @JsonProperty("sum_rain_1")
  public Integer getSumRain1() {
    return sumRain1;
  }
  public void setSumRain1(Integer sumRain1) {
    this.sumRain1 = sumRain1;
  }

  
  /**
   * Amount of rain today
   **/
  @ApiModelProperty(value = "Amount of rain today")
  @JsonProperty("sum_rain_24")
  public Integer getSumRain24() {
    return sumRain24;
  }
  public void setSumRain24(Integer sumRain24) {
    this.sumRain24 = sumRain24;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NADashboardData {\n");
    
    sb.append("    timeUtc: ").append(StringUtil.toIndentedString(timeUtc)).append("\n");
    sb.append("    deviceId: ").append(StringUtil.toIndentedString(deviceId)).append("\n");
    sb.append("    boilerOn: ").append(StringUtil.toIndentedString(boilerOn)).append("\n");
    sb.append("    boilerOff: ").append(StringUtil.toIndentedString(boilerOff)).append("\n");
    sb.append("    temperature: ").append(StringUtil.toIndentedString(temperature)).append("\n");
    sb.append("    dateMaxTemp: ").append(StringUtil.toIndentedString(dateMaxTemp)).append("\n");
    sb.append("    dateMinTemp: ").append(StringUtil.toIndentedString(dateMinTemp)).append("\n");
    sb.append("    minTemp: ").append(StringUtil.toIndentedString(minTemp)).append("\n");
    sb.append("    maxTemp: ").append(StringUtil.toIndentedString(maxTemp)).append("\n");
    sb.append("    absolutePressure: ").append(StringUtil.toIndentedString(absolutePressure)).append("\n");
    sb.append("    cO2: ").append(StringUtil.toIndentedString(cO2)).append("\n");
    sb.append("    humidity: ").append(StringUtil.toIndentedString(humidity)).append("\n");
    sb.append("    noise: ").append(StringUtil.toIndentedString(noise)).append("\n");
    sb.append("    pressure: ").append(StringUtil.toIndentedString(pressure)).append("\n");
    sb.append("    rain: ").append(StringUtil.toIndentedString(rain)).append("\n");
    sb.append("    sumRain1: ").append(StringUtil.toIndentedString(sumRain1)).append("\n");
    sb.append("    sumRain24: ").append(StringUtil.toIndentedString(sumRain24)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
