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
  public class NAThermStateBody {
    
    /// <summary>
    /// Gets or Sets Setpoint
    /// </summary>
    [DataMember(Name="setpoint", EmitDefaultValue=false)]
    public NASetpoint Setpoint { get; set; }

    
    /// <summary>
    /// Gets or Sets SetpointOrder
    /// </summary>
    [DataMember(Name="setpoint_order", EmitDefaultValue=false)]
    public NASetpoint SetpointOrder { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermProgram
    /// </summary>
    [DataMember(Name="therm_program", EmitDefaultValue=false)]
    public NAThermProgram ThermProgram { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermProgramBackup
    /// </summary>
    [DataMember(Name="therm_program_backup", EmitDefaultValue=false)]
    public List<NAThermProgram> ThermProgramBackup { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermProgramOrder
    /// </summary>
    [DataMember(Name="therm_program_order", EmitDefaultValue=false)]
    public NAThermProgram ThermProgramOrder { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermOrientation
    /// </summary>
    [DataMember(Name="therm_orientation", EmitDefaultValue=false)]
    public int? ThermOrientation { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermRelayCmd
    /// </summary>
    [DataMember(Name="therm_relay_cmd", EmitDefaultValue=false)]
    public int? ThermRelayCmd { get; set; }

    
    /// <summary>
    /// Gets or Sets BatteryVp
    /// </summary>
    [DataMember(Name="battery_vp", EmitDefaultValue=false)]
    public int? BatteryVp { get; set; }

    
    /// <summary>
    /// Gets or Sets RfStatus
    /// </summary>
    [DataMember(Name="rf_status", EmitDefaultValue=false)]
    public int? RfStatus { get; set; }

    
    /// <summary>
    /// Gets or Sets PlugConnectedBoiler
    /// </summary>
    [DataMember(Name="plug_connected_boiler", EmitDefaultValue=false)]
    public bool? PlugConnectedBoiler { get; set; }

    
    /// <summary>
    /// Gets or Sets UdpConn
    /// </summary>
    [DataMember(Name="udp_conn", EmitDefaultValue=false)]
    public bool? UdpConn { get; set; }

    
    /// <summary>
    /// Gets or Sets LastThermSeen
    /// </summary>
    [DataMember(Name="last_therm_seen", EmitDefaultValue=false)]
    public int? LastThermSeen { get; set; }

    
    /// <summary>
    /// Gets or Sets LastPlugSeen
    /// </summary>
    [DataMember(Name="last_plug_seen", EmitDefaultValue=false)]
    public int? LastPlugSeen { get; set; }

    
    /// <summary>
    /// Gets or Sets WifiStatus
    /// </summary>
    [DataMember(Name="wifi_status", EmitDefaultValue=false)]
    public int? WifiStatus { get; set; }

    
    /// <summary>
    /// Gets or Sets Measured
    /// </summary>
    [DataMember(Name="measured", EmitDefaultValue=false)]
    public NAThermMeasure Measured { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAThermStateBody {\n");
      
      sb.Append("  Setpoint: ").Append(Setpoint).Append("\n");
      
      sb.Append("  SetpointOrder: ").Append(SetpointOrder).Append("\n");
      
      sb.Append("  ThermProgram: ").Append(ThermProgram).Append("\n");
      
      sb.Append("  ThermProgramBackup: ").Append(ThermProgramBackup).Append("\n");
      
      sb.Append("  ThermProgramOrder: ").Append(ThermProgramOrder).Append("\n");
      
      sb.Append("  ThermOrientation: ").Append(ThermOrientation).Append("\n");
      
      sb.Append("  ThermRelayCmd: ").Append(ThermRelayCmd).Append("\n");
      
      sb.Append("  BatteryVp: ").Append(BatteryVp).Append("\n");
      
      sb.Append("  RfStatus: ").Append(RfStatus).Append("\n");
      
      sb.Append("  PlugConnectedBoiler: ").Append(PlugConnectedBoiler).Append("\n");
      
      sb.Append("  UdpConn: ").Append(UdpConn).Append("\n");
      
      sb.Append("  LastThermSeen: ").Append(LastThermSeen).Append("\n");
      
      sb.Append("  LastPlugSeen: ").Append(LastPlugSeen).Append("\n");
      
      sb.Append("  WifiStatus: ").Append(WifiStatus).Append("\n");
      
      sb.Append("  Measured: ").Append(Measured).Append("\n");
      
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
