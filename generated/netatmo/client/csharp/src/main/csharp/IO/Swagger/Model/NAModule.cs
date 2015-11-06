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
  public class NAModule {
    
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    /// <summary>
    /// Gets or Sets DateSetup
    /// </summary>
    [DataMember(Name="date_setup", EmitDefaultValue=false)]
    public NADate DateSetup { get; set; }

    
    /// <summary>
    /// Gets or Sets Firmware
    /// </summary>
    [DataMember(Name="firmware", EmitDefaultValue=false)]
    public int? Firmware { get; set; }

    
    /// <summary>
    /// Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module
    /// </summary>
    /// <value>Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string Type { get; set; }

    
    /// <summary>
    /// Gets or Sets ModuleName
    /// </summary>
    [DataMember(Name="module_name", EmitDefaultValue=false)]
    public string ModuleName { get; set; }

    
    /// <summary>
    /// Gets or Sets MainDevice
    /// </summary>
    [DataMember(Name="main_device", EmitDefaultValue=false)]
    public string MainDevice { get; set; }

    
    /// <summary>
    /// Gets or Sets LastMessage
    /// </summary>
    [DataMember(Name="last_message", EmitDefaultValue=false)]
    public int? LastMessage { get; set; }

    
    /// <summary>
    /// Gets or Sets LastSeen
    /// </summary>
    [DataMember(Name="last_seen", EmitDefaultValue=false)]
    public int? LastSeen { get; set; }

    
    /// <summary>
    /// Gets or Sets PublicExtData
    /// </summary>
    [DataMember(Name="public_ext_data", EmitDefaultValue=false)]
    public bool? PublicExtData { get; set; }

    
    /// <summary>
    /// \"It contains the current radio status. The different thresholds to take into account are :\" |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60
    /// </summary>
    /// <value>\"It contains the current radio status. The different thresholds to take into account are :\" |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60</value>
    [DataMember(Name="rf_status", EmitDefaultValue=false)]
    public int? RfStatus { get; set; }

    
    /// <summary>
    /// It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\"Indoor module Battery range: 6000 ... 4200\" |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\"Below 4560: very low\" |\n  \n\"Raingauge and outdoor module Battery range: 6000 ... 3600\" |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\"Below 4000: very low\" |\n  \n\"Thermostat Battery range: 4500 ... 3000\" |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\"Below 3000: very low\"
    /// </summary>
    /// <value>It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\"Indoor module Battery range: 6000 ... 4200\" |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\"Below 4560: very low\" |\n  \n\"Raingauge and outdoor module Battery range: 6000 ... 3600\" |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\"Below 4000: very low\" |\n  \n\"Thermostat Battery range: 4500 ... 3000\" |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\"Below 3000: very low\"</value>
    [DataMember(Name="battery_vp", EmitDefaultValue=false)]
    public int? BatteryVp { get; set; }

    
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
    /// It contains all the measurements that can be displayed on the dashboard
    /// </summary>
    /// <value>It contains all the measurements that can be displayed on the dashboard</value>
    [DataMember(Name="dashboard_data", EmitDefaultValue=false)]
    public NADashboardData DashboardData { get; set; }

    
    /// <summary>
    /// Gets or Sets DataType
    /// </summary>
    [DataMember(Name="data_type", EmitDefaultValue=false)]
    public List<string> DataType { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAModule {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  DateSetup: ").Append(DateSetup).Append("\n");
      
      sb.Append("  Firmware: ").Append(Firmware).Append("\n");
      
      sb.Append("  Type: ").Append(Type).Append("\n");
      
      sb.Append("  ModuleName: ").Append(ModuleName).Append("\n");
      
      sb.Append("  MainDevice: ").Append(MainDevice).Append("\n");
      
      sb.Append("  LastMessage: ").Append(LastMessage).Append("\n");
      
      sb.Append("  LastSeen: ").Append(LastSeen).Append("\n");
      
      sb.Append("  PublicExtData: ").Append(PublicExtData).Append("\n");
      
      sb.Append("  RfStatus: ").Append(RfStatus).Append("\n");
      
      sb.Append("  BatteryVp: ").Append(BatteryVp).Append("\n");
      
      sb.Append("  ThermOrientation: ").Append(ThermOrientation).Append("\n");
      
      sb.Append("  ThermRelayCmd: ").Append(ThermRelayCmd).Append("\n");
      
      sb.Append("  DashboardData: ").Append(DashboardData).Append("\n");
      
      sb.Append("  DataType: ").Append(DataType).Append("\n");
      
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
