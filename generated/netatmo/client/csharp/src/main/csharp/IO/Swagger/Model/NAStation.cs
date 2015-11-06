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
  public class NAStation {
    
    /// <summary>
    /// Gets or Sets LagDown
    /// </summary>
    [DataMember(Name="lag_down", EmitDefaultValue=false)]
    public int? LagDown { get; set; }

    
    /// <summary>
    /// Gets or Sets LagUp
    /// </summary>
    [DataMember(Name="lag_up", EmitDefaultValue=false)]
    public int? LagUp { get; set; }

    
    /// <summary>
    /// Gets or Sets OffOvershoot
    /// </summary>
    [DataMember(Name="off_overshoot", EmitDefaultValue=false)]
    public float? OffOvershoot { get; set; }

    
    /// <summary>
    /// Gets or Sets OnOvershoot
    /// </summary>
    [DataMember(Name="on_overshoot", EmitDefaultValue=false)]
    public float? OnOvershoot { get; set; }

    
    /// <summary>
    /// Gets or Sets Pk
    /// </summary>
    [DataMember(Name="pk", EmitDefaultValue=false)]
    public int? Pk { get; set; }

    
    /// <summary>
    /// Gets or Sets Tau
    /// </summary>
    [DataMember(Name="tau", EmitDefaultValue=false)]
    public int? Tau { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAStation {\n");
      
      sb.Append("  LagDown: ").Append(LagDown).Append("\n");
      
      sb.Append("  LagUp: ").Append(LagUp).Append("\n");
      
      sb.Append("  OffOvershoot: ").Append(OffOvershoot).Append("\n");
      
      sb.Append("  OnOvershoot: ").Append(OnOvershoot).Append("\n");
      
      sb.Append("  Pk: ").Append(Pk).Append("\n");
      
      sb.Append("  Tau: ").Append(Tau).Append("\n");
      
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
