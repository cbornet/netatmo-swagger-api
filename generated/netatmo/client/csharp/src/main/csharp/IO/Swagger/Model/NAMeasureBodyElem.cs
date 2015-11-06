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
  public class NAMeasureBodyElem {
    
    /// <summary>
    /// Gets or Sets BegTime
    /// </summary>
    [DataMember(Name="beg_time", EmitDefaultValue=false)]
    public int? BegTime { get; set; }

    
    /// <summary>
    /// Gets or Sets StepTime
    /// </summary>
    [DataMember(Name="step_time", EmitDefaultValue=false)]
    public int? StepTime { get; set; }

    
    /// <summary>
    /// Gets or Sets Value
    /// </summary>
    [DataMember(Name="value", EmitDefaultValue=false)]
    public List<List<float?>> Value { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAMeasureBodyElem {\n");
      
      sb.Append("  BegTime: ").Append(BegTime).Append("\n");
      
      sb.Append("  StepTime: ").Append(StepTime).Append("\n");
      
      sb.Append("  Value: ").Append(Value).Append("\n");
      
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
