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
  public class NAThermMeasure {
    
    /// <summary>
    /// Gets or Sets Time
    /// </summary>
    [DataMember(Name="time", EmitDefaultValue=false)]
    public int? Time { get; set; }

    
    /// <summary>
    /// Gets or Sets Temperature
    /// </summary>
    [DataMember(Name="temperature", EmitDefaultValue=false)]
    public float? Temperature { get; set; }

    
    /// <summary>
    /// Gets or Sets SetpointTemp
    /// </summary>
    [DataMember(Name="setpoint_temp", EmitDefaultValue=false)]
    public float? SetpointTemp { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAThermMeasure {\n");
      
      sb.Append("  Time: ").Append(Time).Append("\n");
      
      sb.Append("  Temperature: ").Append(Temperature).Append("\n");
      
      sb.Append("  SetpointTemp: ").Append(SetpointTemp).Append("\n");
      
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
