using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class NADashboardData {
    
    /// <summary>
    /// Gets or Sets TimeUtc
    /// </summary>
    [DataMember(Name="time_utc", EmitDefaultValue=false)]
    public int? TimeUtc { get; set; }

    
    /// <summary>
    /// Gets or Sets DeviceId
    /// </summary>
    [DataMember(Name="device_id", EmitDefaultValue=false)]
    public float? DeviceId { get; set; }

    
    /// <summary>
    /// Gets or Sets BoilerOn
    /// </summary>
    [DataMember(Name="BoilerOn", EmitDefaultValue=false)]
    public int? BoilerOn { get; set; }

    
    /// <summary>
    /// Gets or Sets BoilerOff
    /// </summary>
    [DataMember(Name="BoilerOff", EmitDefaultValue=false)]
    public int? BoilerOff { get; set; }

    
    /// <summary>
    /// Last temperature measure @ time_utc (in °C)
    /// </summary>
    /// <value>Last temperature measure @ time_utc (in °C)</value>
    [DataMember(Name="Temperature", EmitDefaultValue=false)]
    public float? Temperature { get; set; }

    
    /// <summary>
    /// Timestamp when max temperature was measured
    /// </summary>
    /// <value>Timestamp when max temperature was measured</value>
    [DataMember(Name="date_max_temp", EmitDefaultValue=false)]
    public int? DateMaxTemp { get; set; }

    
    /// <summary>
    /// Timestamp when min temperature was measured
    /// </summary>
    /// <value>Timestamp when min temperature was measured</value>
    [DataMember(Name="date_min_temp", EmitDefaultValue=false)]
    public int? DateMinTemp { get; set; }

    
    /// <summary>
    /// Max temperature of the day (measured @ date_max_temp)
    /// </summary>
    /// <value>Max temperature of the day (measured @ date_max_temp)</value>
    [DataMember(Name="min_temp", EmitDefaultValue=false)]
    public float? MinTemp { get; set; }

    
    /// <summary>
    /// Min temperature of the day (measured @ date_min_temp)
    /// </summary>
    /// <value>Min temperature of the day (measured @ date_min_temp)</value>
    [DataMember(Name="max_temp", EmitDefaultValue=false)]
    public float? MaxTemp { get; set; }

    
    /// <summary>
    /// Real measured pressure @ time_utc (in mb)
    /// </summary>
    /// <value>Real measured pressure @ time_utc (in mb)</value>
    [DataMember(Name="AbsolutePressure", EmitDefaultValue=false)]
    public float? AbsolutePressure { get; set; }

    
    /// <summary>
    /// Last Co2 measured @ time_utc (in ppm)
    /// </summary>
    /// <value>Last Co2 measured @ time_utc (in ppm)</value>
    [DataMember(Name="CO2", EmitDefaultValue=false)]
    public float? CO2 { get; set; }

    
    /// <summary>
    /// Last humidity measured @ time_utc (in %)
    /// </summary>
    /// <value>Last humidity measured @ time_utc (in %)</value>
    [DataMember(Name="Humidity", EmitDefaultValue=false)]
    public float? Humidity { get; set; }

    
    /// <summary>
    /// Last noise measured @ time_utc (in db)
    /// </summary>
    /// <value>Last noise measured @ time_utc (in db)</value>
    [DataMember(Name="Noise", EmitDefaultValue=false)]
    public float? Noise { get; set; }

    
    /// <summary>
    /// Last Sea level pressure measured @ time_utc (in mb)
    /// </summary>
    /// <value>Last Sea level pressure measured @ time_utc (in mb)</value>
    [DataMember(Name="Pressure", EmitDefaultValue=false)]
    public float? Pressure { get; set; }

    
    /// <summary>
    /// Last rain measured (in mm)
    /// </summary>
    /// <value>Last rain measured (in mm)</value>
    [DataMember(Name="Rain", EmitDefaultValue=false)]
    public int? Rain { get; set; }

    
    /// <summary>
    /// Amount of rain in last hour
    /// </summary>
    /// <value>Amount of rain in last hour</value>
    [DataMember(Name="sum_rain_1", EmitDefaultValue=false)]
    public int? SumRain1 { get; set; }

    
    /// <summary>
    /// Amount of rain today
    /// </summary>
    /// <value>Amount of rain today</value>
    [DataMember(Name="sum_rain_24", EmitDefaultValue=false)]
    public int? SumRain24 { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NADashboardData {\n");
      
      sb.Append("  TimeUtc: ").Append(TimeUtc).Append("\n");
      
      sb.Append("  DeviceId: ").Append(DeviceId).Append("\n");
      
      sb.Append("  BoilerOn: ").Append(BoilerOn).Append("\n");
      
      sb.Append("  BoilerOff: ").Append(BoilerOff).Append("\n");
      
      sb.Append("  Temperature: ").Append(Temperature).Append("\n");
      
      sb.Append("  DateMaxTemp: ").Append(DateMaxTemp).Append("\n");
      
      sb.Append("  DateMinTemp: ").Append(DateMinTemp).Append("\n");
      
      sb.Append("  MinTemp: ").Append(MinTemp).Append("\n");
      
      sb.Append("  MaxTemp: ").Append(MaxTemp).Append("\n");
      
      sb.Append("  AbsolutePressure: ").Append(AbsolutePressure).Append("\n");
      
      sb.Append("  CO2: ").Append(CO2).Append("\n");
      
      sb.Append("  Humidity: ").Append(Humidity).Append("\n");
      
      sb.Append("  Noise: ").Append(Noise).Append("\n");
      
      sb.Append("  Pressure: ").Append(Pressure).Append("\n");
      
      sb.Append("  Rain: ").Append(Rain).Append("\n");
      
      sb.Append("  SumRain1: ").Append(SumRain1).Append("\n");
      
      sb.Append("  SumRain24: ").Append(SumRain24).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
