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
  public class NAUserAdministrative {
    
    /// <summary>
    /// user country
    /// </summary>
    /// <value>user country</value>
    [DataMember(Name="country", EmitDefaultValue=false)]
    public string Country { get; set; }

    
    /// <summary>
    /// user locale
    /// </summary>
    /// <value>user locale</value>
    [DataMember(Name="lang", EmitDefaultValue=false)]
    public string Lang { get; set; }

    
    /// <summary>
    /// user regional preferences (used for displaying date)
    /// </summary>
    /// <value>user regional preferences (used for displaying date)</value>
    [DataMember(Name="reg_locale", EmitDefaultValue=false)]
    public string RegLocale { get; set; }

    
    /// <summary>
    /// 0 -> metric system, 1 -> imperial system
    /// </summary>
    /// <value>0 -> metric system, 1 -> imperial system</value>
    [DataMember(Name="unit", EmitDefaultValue=false)]
    public string Unit { get; set; }

    
    /// <summary>
    /// 0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot
    /// </summary>
    /// <value>0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot</value>
    [DataMember(Name="windunit", EmitDefaultValue=false)]
    public string Windunit { get; set; }

    
    /// <summary>
    /// 0 -> mbar, 1 -> inHg, 2 -> mmHg
    /// </summary>
    /// <value>0 -> mbar, 1 -> inHg, 2 -> mmHg</value>
    [DataMember(Name="pressureunit", EmitDefaultValue=false)]
    public string Pressureunit { get; set; }

    
    /// <summary>
    /// algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index
    /// </summary>
    /// <value>algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index</value>
    [DataMember(Name="feel_like_algo", EmitDefaultValue=false)]
    public string FeelLikeAlgo { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAUserAdministrative {\n");
      
      sb.Append("  Country: ").Append(Country).Append("\n");
      
      sb.Append("  Lang: ").Append(Lang).Append("\n");
      
      sb.Append("  RegLocale: ").Append(RegLocale).Append("\n");
      
      sb.Append("  Unit: ").Append(Unit).Append("\n");
      
      sb.Append("  Windunit: ").Append(Windunit).Append("\n");
      
      sb.Append("  Pressureunit: ").Append(Pressureunit).Append("\n");
      
      sb.Append("  FeelLikeAlgo: ").Append(FeelLikeAlgo).Append("\n");
      
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
