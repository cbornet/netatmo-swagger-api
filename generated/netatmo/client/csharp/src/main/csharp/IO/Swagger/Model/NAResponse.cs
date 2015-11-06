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
  public class NAResponse {
    
    /// <summary>
    /// Gets or Sets Status
    /// </summary>
    [DataMember(Name="status", EmitDefaultValue=false)]
    public string Status { get; set; }

    
    /// <summary>
    /// Gets or Sets TimeExec
    /// </summary>
    [DataMember(Name="time_exec", EmitDefaultValue=false)]
    public double? TimeExec { get; set; }

    
    /// <summary>
    /// Gets or Sets TimeServer
    /// </summary>
    [DataMember(Name="time_server", EmitDefaultValue=false)]
    public int? TimeServer { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAResponse {\n");
      
      sb.Append("  Status: ").Append(Status).Append("\n");
      
      sb.Append("  TimeExec: ").Append(TimeExec).Append("\n");
      
      sb.Append("  TimeServer: ").Append(TimeServer).Append("\n");
      
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
