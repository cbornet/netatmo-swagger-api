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
  public class NADate {
    
    /// <summary>
    /// Gets or Sets Sec
    /// </summary>
    [DataMember(Name="sec", EmitDefaultValue=false)]
    public int? Sec { get; set; }

    
    /// <summary>
    /// Gets or Sets Usec
    /// </summary>
    [DataMember(Name="usec", EmitDefaultValue=false)]
    public int? Usec { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NADate {\n");
      
      sb.Append("  Sec: ").Append(Sec).Append("\n");
      
      sb.Append("  Usec: ").Append(Usec).Append("\n");
      
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
