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
  public class NALinkStation {
    
    /// <summary>
    /// Gets or Sets Mac
    /// </summary>
    [DataMember(Name="mac", EmitDefaultValue=false)]
    public string Mac { get; set; }

    
    /// <summary>
    /// Gets or Sets Ext
    /// </summary>
    [DataMember(Name="ext", EmitDefaultValue=false)]
    public string Ext { get; set; }

    
    /// <summary>
    /// Gets or Sets Temperature
    /// </summary>
    [DataMember(Name="Temperature", EmitDefaultValue=false)]
    public float? Temperature { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NALinkStation {\n");
      
      sb.Append("  Mac: ").Append(Mac).Append("\n");
      
      sb.Append("  Ext: ").Append(Ext).Append("\n");
      
      sb.Append("  Temperature: ").Append(Temperature).Append("\n");
      
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
