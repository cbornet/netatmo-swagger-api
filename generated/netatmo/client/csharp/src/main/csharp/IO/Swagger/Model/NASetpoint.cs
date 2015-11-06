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
  public class NASetpoint {
    
    /// <summary>
    /// Gets or Sets SetpointTemp
    /// </summary>
    [DataMember(Name="setpoint_temp", EmitDefaultValue=false)]
    public float? SetpointTemp { get; set; }

    
    /// <summary>
    /// Gets or Sets SetpointEndtime
    /// </summary>
    [DataMember(Name="setpoint_endtime", EmitDefaultValue=false)]
    public int? SetpointEndtime { get; set; }

    
    /// <summary>
    /// Gets or Sets SetpointMode
    /// </summary>
    [DataMember(Name="setpoint_mode", EmitDefaultValue=false)]
    public string SetpointMode { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NASetpoint {\n");
      
      sb.Append("  SetpointTemp: ").Append(SetpointTemp).Append("\n");
      
      sb.Append("  SetpointEndtime: ").Append(SetpointEndtime).Append("\n");
      
      sb.Append("  SetpointMode: ").Append(SetpointMode).Append("\n");
      
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
