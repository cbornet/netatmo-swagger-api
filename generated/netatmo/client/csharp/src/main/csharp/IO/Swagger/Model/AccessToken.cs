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
  public class AccessToken {
    
    /// <summary>
    /// Gets or Sets AccessToken
    /// </summary>
    [DataMember(Name="access_token", EmitDefaultValue=false)]
    public string AccessToken { get; set; }

    
    /// <summary>
    /// Gets or Sets RefreshToken
    /// </summary>
    [DataMember(Name="refresh_token", EmitDefaultValue=false)]
    public string RefreshToken { get; set; }

    
    /// <summary>
    /// Gets or Sets ExpireIn
    /// </summary>
    [DataMember(Name="expire_in", EmitDefaultValue=false)]
    public int? ExpireIn { get; set; }

    
    /// <summary>
    /// Gets or Sets ExpiresIn
    /// </summary>
    [DataMember(Name="expires_in", EmitDefaultValue=false)]
    public int? ExpiresIn { get; set; }

    
    /// <summary>
    /// Gets or Sets Scope
    /// </summary>
    [DataMember(Name="scope", EmitDefaultValue=false)]
    public List<string> Scope { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccessToken {\n");
      
      sb.Append("  AccessToken: ").Append(AccessToken).Append("\n");
      
      sb.Append("  RefreshToken: ").Append(RefreshToken).Append("\n");
      
      sb.Append("  ExpireIn: ").Append(ExpireIn).Append("\n");
      
      sb.Append("  ExpiresIn: ").Append(ExpiresIn).Append("\n");
      
      sb.Append("  Scope: ").Append(Scope).Append("\n");
      
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
