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
  public class NAHouseModelCa {
    
    /// <summary>
    /// Gets or Sets Te
    /// </summary>
    [DataMember(Name="te", EmitDefaultValue=false)]
    public double? Te { get; set; }

    
    /// <summary>
    /// Gets or Sets Ti
    /// </summary>
    [DataMember(Name="ti", EmitDefaultValue=false)]
    public int? Ti { get; set; }

    
    /// <summary>
    /// Gets or Sets So
    /// </summary>
    [DataMember(Name="so", EmitDefaultValue=false)]
    public string So { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAHouseModelCa {\n");
      
      sb.Append("  Te: ").Append(Te).Append("\n");
      
      sb.Append("  Ti: ").Append(Ti).Append("\n");
      
      sb.Append("  So: ").Append(So).Append("\n");
      
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
