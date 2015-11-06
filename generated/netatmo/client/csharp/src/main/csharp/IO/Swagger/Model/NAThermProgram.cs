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
  public class NAThermProgram {
    
    /// <summary>
    /// Gets or Sets ProgramId
    /// </summary>
    [DataMember(Name="program_id", EmitDefaultValue=false)]
    public string ProgramId { get; set; }

    
    /// <summary>
    /// Gets or Sets Name
    /// </summary>
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string Name { get; set; }

    
    /// <summary>
    /// Gets or Sets Zones
    /// </summary>
    [DataMember(Name="zones", EmitDefaultValue=false)]
    public List<NAZone> Zones { get; set; }

    
    /// <summary>
    /// Gets or Sets Timetable
    /// </summary>
    [DataMember(Name="timetable", EmitDefaultValue=false)]
    public List<NATimeTableItem> Timetable { get; set; }

    
    /// <summary>
    /// Gets or Sets Selected
    /// </summary>
    [DataMember(Name="selected", EmitDefaultValue=false)]
    public bool? Selected { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAThermProgram {\n");
      
      sb.Append("  ProgramId: ").Append(ProgramId).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  Zones: ").Append(Zones).Append("\n");
      
      sb.Append("  Timetable: ").Append(Timetable).Append("\n");
      
      sb.Append("  Selected: ").Append(Selected).Append("\n");
      
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
