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
  public class NADevice {
    
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    /// <summary>
    /// Gets or Sets Behavior
    /// </summary>
    [DataMember(Name="behavior", EmitDefaultValue=false)]
    public int? Behavior { get; set; }

    
    /// <summary>
    /// Gets or Sets CipherId
    /// </summary>
    [DataMember(Name="cipher_id", EmitDefaultValue=false)]
    public string CipherId { get; set; }

    
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
    /// Gets or Sets HwVersion
    /// </summary>
    [DataMember(Name="hw_version", EmitDefaultValue=false)]
    public int? HwVersion { get; set; }

    
    /// <summary>
    /// Gets or Sets HeatingSystem
    /// </summary>
    [DataMember(Name="heating_system", EmitDefaultValue=false)]
    public NAHeatingSystem HeatingSystem { get; set; }

    
    /// <summary>
    /// Gets or Sets HouseModel
    /// </summary>
    [DataMember(Name="house_model", EmitDefaultValue=false)]
    public NAHouseModel HouseModel { get; set; }

    
    /// <summary>
    /// Gets or Sets Ip
    /// </summary>
    [DataMember(Name="ip", EmitDefaultValue=false)]
    public string Ip { get; set; }

    
    /// <summary>
    /// Gets or Sets LastFwUpdate
    /// </summary>
    [DataMember(Name="last_fw_update", EmitDefaultValue=false)]
    public int? LastFwUpdate { get; set; }

    
    /// <summary>
    /// Gets or Sets LastRadioStore
    /// </summary>
    [DataMember(Name="last_radio_store", EmitDefaultValue=false)]
    public int? LastRadioStore { get; set; }

    
    /// <summary>
    /// Gets or Sets LastStatusStore
    /// </summary>
    [DataMember(Name="last_status_store", EmitDefaultValue=false)]
    public int? LastStatusStore { get; set; }

    
    /// <summary>
    /// Gets or Sets LastUpgrade
    /// </summary>
    [DataMember(Name="last_upgrade", EmitDefaultValue=false)]
    public int? LastUpgrade { get; set; }

    
    /// <summary>
    /// Gets or Sets ModuleName
    /// </summary>
    [DataMember(Name="module_name", EmitDefaultValue=false)]
    public string ModuleName { get; set; }

    
    /// <summary>
    /// It lists which modules are linked with this device
    /// </summary>
    /// <value>It lists which modules are linked with this device</value>
    [DataMember(Name="modules", EmitDefaultValue=false)]
    public List<string> Modules { get; set; }

    
    /// <summary>
    /// Gets or Sets Place
    /// </summary>
    [DataMember(Name="place", EmitDefaultValue=false)]
    public NAPlace Place { get; set; }

    
    /// <summary>
    /// Gets or Sets Setpoint
    /// </summary>
    [DataMember(Name="setpoint", EmitDefaultValue=false)]
    public Object Setpoint { get; set; }

    
    /// <summary>
    /// Gets or Sets SetpointDefaultDuration
    /// </summary>
    [DataMember(Name="setpoint_default_duration", EmitDefaultValue=false)]
    public int? SetpointDefaultDuration { get; set; }

    
    /// <summary>
    /// Gets or Sets SetpointOrder
    /// </summary>
    [DataMember(Name="setpoint_order", EmitDefaultValue=false)]
    public Dictionary<string, List<NAObject>> SetpointOrder { get; set; }

    
    /// <summary>
    /// Gets or Sets PublicExtData
    /// </summary>
    [DataMember(Name="public_ext_data", EmitDefaultValue=false)]
    public bool? PublicExtData { get; set; }

    
    /// <summary>
    /// Gets or Sets StationName
    /// </summary>
    [DataMember(Name="station_name", EmitDefaultValue=false)]
    public string StationName { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermProgram
    /// </summary>
    [DataMember(Name="therm_program", EmitDefaultValue=false)]
    public Dictionary<string, NAThermProgram> ThermProgram { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermProgramBackup
    /// </summary>
    [DataMember(Name="therm_program_backup", EmitDefaultValue=false)]
    public Dictionary<string, List<NAThermProgram>> ThermProgramBackup { get; set; }

    
    /// <summary>
    /// Gets or Sets ThermProgramOrder
    /// </summary>
    [DataMember(Name="therm_program_order", EmitDefaultValue=false)]
    public Dictionary<string, List<NAObject>> ThermProgramOrder { get; set; }

    
    /// <summary>
    /// Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module
    /// </summary>
    /// <value>Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string Type { get; set; }

    
    /// <summary>
    /// Gets or Sets UserOwner
    /// </summary>
    [DataMember(Name="user_owner", EmitDefaultValue=false)]
    public List<string> UserOwner { get; set; }

    
    /// <summary>
    /// Gets or Sets UdpConn
    /// </summary>
    [DataMember(Name="udp_conn", EmitDefaultValue=false)]
    public bool? UdpConn { get; set; }

    
    /// <summary>
    /// It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal
    /// </summary>
    /// <value>It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal</value>
    [DataMember(Name="wifi_status", EmitDefaultValue=false)]
    public int? WifiStatus { get; set; }

    
    /// <summary>
    /// Gets or Sets NewFeatureAvail
    /// </summary>
    [DataMember(Name="new_feature_avail", EmitDefaultValue=false)]
    public bool? NewFeatureAvail { get; set; }

    
    /// <summary>
    /// Gets or Sets FirstPidAvail
    /// </summary>
    [DataMember(Name="first_pid_avail", EmitDefaultValue=false)]
    public bool? FirstPidAvail { get; set; }

    
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
      sb.Append("class NADevice {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Behavior: ").Append(Behavior).Append("\n");
      
      sb.Append("  CipherId: ").Append(CipherId).Append("\n");
      
      sb.Append("  DateSetup: ").Append(DateSetup).Append("\n");
      
      sb.Append("  Firmware: ").Append(Firmware).Append("\n");
      
      sb.Append("  HwVersion: ").Append(HwVersion).Append("\n");
      
      sb.Append("  HeatingSystem: ").Append(HeatingSystem).Append("\n");
      
      sb.Append("  HouseModel: ").Append(HouseModel).Append("\n");
      
      sb.Append("  Ip: ").Append(Ip).Append("\n");
      
      sb.Append("  LastFwUpdate: ").Append(LastFwUpdate).Append("\n");
      
      sb.Append("  LastRadioStore: ").Append(LastRadioStore).Append("\n");
      
      sb.Append("  LastStatusStore: ").Append(LastStatusStore).Append("\n");
      
      sb.Append("  LastUpgrade: ").Append(LastUpgrade).Append("\n");
      
      sb.Append("  ModuleName: ").Append(ModuleName).Append("\n");
      
      sb.Append("  Modules: ").Append(Modules).Append("\n");
      
      sb.Append("  Place: ").Append(Place).Append("\n");
      
      sb.Append("  Setpoint: ").Append(Setpoint).Append("\n");
      
      sb.Append("  SetpointDefaultDuration: ").Append(SetpointDefaultDuration).Append("\n");
      
      sb.Append("  SetpointOrder: ").Append(SetpointOrder).Append("\n");
      
      sb.Append("  PublicExtData: ").Append(PublicExtData).Append("\n");
      
      sb.Append("  StationName: ").Append(StationName).Append("\n");
      
      sb.Append("  ThermProgram: ").Append(ThermProgram).Append("\n");
      
      sb.Append("  ThermProgramBackup: ").Append(ThermProgramBackup).Append("\n");
      
      sb.Append("  ThermProgramOrder: ").Append(ThermProgramOrder).Append("\n");
      
      sb.Append("  Type: ").Append(Type).Append("\n");
      
      sb.Append("  UserOwner: ").Append(UserOwner).Append("\n");
      
      sb.Append("  UdpConn: ").Append(UdpConn).Append("\n");
      
      sb.Append("  WifiStatus: ").Append(WifiStatus).Append("\n");
      
      sb.Append("  NewFeatureAvail: ").Append(NewFeatureAvail).Append("\n");
      
      sb.Append("  FirstPidAvail: ").Append(FirstPidAvail).Append("\n");
      
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
