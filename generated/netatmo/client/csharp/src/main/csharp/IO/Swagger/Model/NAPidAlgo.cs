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
  public class NAPidAlgo {
    
    /// <summary>
    /// Gets or Sets Gain
    /// </summary>
    [DataMember(Name="gain", EmitDefaultValue=false)]
    public int? Gain { get; set; }

    
    /// <summary>
    /// Gets or Sets Period
    /// </summary>
    [DataMember(Name="period", EmitDefaultValue=false)]
    public int? Period { get; set; }

    
    /// <summary>
    /// Gets or Sets Td
    /// </summary>
    [DataMember(Name="td", EmitDefaultValue=false)]
    public int? Td { get; set; }

    
    /// <summary>
    /// Gets or Sets Ti
    /// </summary>
    [DataMember(Name="ti", EmitDefaultValue=false)]
    public int? Ti { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAPidAlgo {\n");
      
      sb.Append("  Gain: ").Append(Gain).Append("\n");
      
      sb.Append("  Period: ").Append(Period).Append("\n");
      
      sb.Append("  Td: ").Append(Td).Append("\n");
      
      sb.Append("  Ti: ").Append(Ti).Append("\n");
      
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
