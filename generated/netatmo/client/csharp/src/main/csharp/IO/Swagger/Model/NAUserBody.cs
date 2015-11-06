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
  public class NAUserBody {
    
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    /// <summary>
    /// Contains administrative information related to the user
    /// </summary>
    /// <value>Contains administrative information related to the user</value>
    [DataMember(Name="administrative", EmitDefaultValue=false)]
    public NAUserAdministrative Administrative { get; set; }

    
    /// <summary>
    /// Gets or Sets DateCreation
    /// </summary>
    [DataMember(Name="date_creation", EmitDefaultValue=false)]
    public NADate DateCreation { get; set; }

    
    /// <summary>
    /// An array of string containing the ids of the devices owned by the user
    /// </summary>
    /// <value>An array of string containing the ids of the devices owned by the user</value>
    [DataMember(Name="devices", EmitDefaultValue=false)]
    public List<string> Devices { get; set; }

    
    /// <summary>
    /// An array of string containing the ids of the devices on which the user has a \"guest\" access
    /// </summary>
    /// <value>An array of string containing the ids of the devices on which the user has a \"guest\" access</value>
    [DataMember(Name="friend_devices", EmitDefaultValue=false)]
    public List<string> FriendDevices { get; set; }

    
    /// <summary>
    /// Gets or Sets Mail
    /// </summary>
    [DataMember(Name="mail", EmitDefaultValue=false)]
    public string Mail { get; set; }

    
    /// <summary>
    /// Gets or Sets TimelineNotRead
    /// </summary>
    [DataMember(Name="timeline_not_read", EmitDefaultValue=false)]
    public int? TimelineNotRead { get; set; }

    
    /// <summary>
    /// Gets or Sets TimelineSize
    /// </summary>
    [DataMember(Name="timeline_size", EmitDefaultValue=false)]
    public int? TimelineSize { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAUserBody {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Administrative: ").Append(Administrative).Append("\n");
      
      sb.Append("  DateCreation: ").Append(DateCreation).Append("\n");
      
      sb.Append("  Devices: ").Append(Devices).Append("\n");
      
      sb.Append("  FriendDevices: ").Append(FriendDevices).Append("\n");
      
      sb.Append("  Mail: ").Append(Mail).Append("\n");
      
      sb.Append("  TimelineNotRead: ").Append(TimelineNotRead).Append("\n");
      
      sb.Append("  TimelineSize: ").Append(TimelineSize).Append("\n");
      
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
