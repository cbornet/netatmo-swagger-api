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
  public class NAPlace {
    
    /// <summary>
    /// Gets or Sets City
    /// </summary>
    [DataMember(Name="city", EmitDefaultValue=false)]
    public string City { get; set; }

    
    /// <summary>
    /// Gets or Sets Altitude
    /// </summary>
    [DataMember(Name="altitude", EmitDefaultValue=false)]
    public float? Altitude { get; set; }

    
    /// <summary>
    /// Gets or Sets Country
    /// </summary>
    [DataMember(Name="country", EmitDefaultValue=false)]
    public string Country { get; set; }

    
    /// <summary>
    /// Gets or Sets FromIp
    /// </summary>
    [DataMember(Name="from_ip", EmitDefaultValue=false)]
    public bool? FromIp { get; set; }

    
    /// <summary>
    /// Gets or Sets ImproveLocProposed
    /// </summary>
    [DataMember(Name="improveLocProposed", EmitDefaultValue=false)]
    public bool? ImproveLocProposed { get; set; }

    
    /// <summary>
    /// Gets or Sets Location
    /// </summary>
    [DataMember(Name="location", EmitDefaultValue=false)]
    public List<double?> Location { get; set; }

    
    /// <summary>
    /// Gets or Sets Timezone
    /// </summary>
    [DataMember(Name="timezone", EmitDefaultValue=false)]
    public string Timezone { get; set; }

    
    /// <summary>
    /// Gets or Sets TrustLocation
    /// </summary>
    [DataMember(Name="trust_location", EmitDefaultValue=false)]
    public bool? TrustLocation { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAPlace {\n");
      
      sb.Append("  City: ").Append(City).Append("\n");
      
      sb.Append("  Altitude: ").Append(Altitude).Append("\n");
      
      sb.Append("  Country: ").Append(Country).Append("\n");
      
      sb.Append("  FromIp: ").Append(FromIp).Append("\n");
      
      sb.Append("  ImproveLocProposed: ").Append(ImproveLocProposed).Append("\n");
      
      sb.Append("  Location: ").Append(Location).Append("\n");
      
      sb.Append("  Timezone: ").Append(Timezone).Append("\n");
      
      sb.Append("  TrustLocation: ").Append(TrustLocation).Append("\n");
      
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
