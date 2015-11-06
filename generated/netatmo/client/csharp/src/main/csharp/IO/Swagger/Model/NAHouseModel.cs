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
  public class NAHouseModel {
    
    /// <summary>
    /// Gets or Sets AlgoType
    /// </summary>
    [DataMember(Name="algo_type", EmitDefaultValue=false)]
    public string AlgoType { get; set; }

    
    /// <summary>
    /// Gets or Sets Ca
    /// </summary>
    [DataMember(Name="ca", EmitDefaultValue=false)]
    public NAHouseModelCa Ca { get; set; }

    
    /// <summary>
    /// Gets or Sets ExtTemps
    /// </summary>
    [DataMember(Name="ext_temps", EmitDefaultValue=false)]
    public Dictionary<string, int?> ExtTemps { get; set; }

    
    /// <summary>
    /// Gets or Sets FirstAnticipateAvail
    /// </summary>
    [DataMember(Name="first_anticipate_avail", EmitDefaultValue=false)]
    public bool? FirstAnticipateAvail { get; set; }

    
    /// <summary>
    /// Gets or Sets FirstPidAvail
    /// </summary>
    [DataMember(Name="first_pid_avail", EmitDefaultValue=false)]
    public bool? FirstPidAvail { get; set; }

    
    /// <summary>
    /// Gets or Sets Gefs
    /// </summary>
    [DataMember(Name="gefs", EmitDefaultValue=false)]
    public NAStation Gefs { get; set; }

    
    /// <summary>
    /// Gets or Sets InUse
    /// </summary>
    [DataMember(Name="in_use", EmitDefaultValue=false)]
    public string InUse { get; set; }

    
    /// <summary>
    /// Gets or Sets LastComputeTry
    /// </summary>
    [DataMember(Name="last_compute_try", EmitDefaultValue=false)]
    public NADate LastComputeTry { get; set; }

    
    /// <summary>
    /// Gets or Sets LinkStation
    /// </summary>
    [DataMember(Name="link_station", EmitDefaultValue=false)]
    public NALinkStation LinkStation { get; set; }

    
    /// <summary>
    /// Gets or Sets PidAlgo
    /// </summary>
    [DataMember(Name="pid_algo", EmitDefaultValue=false)]
    public NAPidAlgo PidAlgo { get; set; }

    
    /// <summary>
    /// Gets or Sets Station
    /// </summary>
    [DataMember(Name="station", EmitDefaultValue=false)]
    public NAStation Station { get; set; }

    
    /// <summary>
    /// Gets or Sets PreferedAlgoType
    /// </summary>
    [DataMember(Name="prefered_algo_type", EmitDefaultValue=false)]
    public string PreferedAlgoType { get; set; }

    
    /// <summary>
    /// Gets or Sets SimpleAlgo
    /// </summary>
    [DataMember(Name="simple_algo", EmitDefaultValue=false)]
    public NASimpleAlgo SimpleAlgo { get; set; }

    
    /// <summary>
    /// Gets or Sets Time
    /// </summary>
    [DataMember(Name="time", EmitDefaultValue=false)]
    public NADate Time { get; set; }

    
    /// <summary>
    /// Gets or Sets StationFirsttimeAnticipate
    /// </summary>
    [DataMember(Name="station_firsttime_anticipate", EmitDefaultValue=false)]
    public bool? StationFirsttimeAnticipate { get; set; }

    
    /// <summary>
    /// Gets or Sets TimeAlgoChanged
    /// </summary>
    [DataMember(Name="time_algo_changed", EmitDefaultValue=false)]
    public int? TimeAlgoChanged { get; set; }

    
    /// <summary>
    /// Gets or Sets TimePidComputed
    /// </summary>
    [DataMember(Name="time_pid_computed", EmitDefaultValue=false)]
    public int? TimePidComputed { get; set; }

    

    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class NAHouseModel {\n");
      
      sb.Append("  AlgoType: ").Append(AlgoType).Append("\n");
      
      sb.Append("  Ca: ").Append(Ca).Append("\n");
      
      sb.Append("  ExtTemps: ").Append(ExtTemps).Append("\n");
      
      sb.Append("  FirstAnticipateAvail: ").Append(FirstAnticipateAvail).Append("\n");
      
      sb.Append("  FirstPidAvail: ").Append(FirstPidAvail).Append("\n");
      
      sb.Append("  Gefs: ").Append(Gefs).Append("\n");
      
      sb.Append("  InUse: ").Append(InUse).Append("\n");
      
      sb.Append("  LastComputeTry: ").Append(LastComputeTry).Append("\n");
      
      sb.Append("  LinkStation: ").Append(LinkStation).Append("\n");
      
      sb.Append("  PidAlgo: ").Append(PidAlgo).Append("\n");
      
      sb.Append("  Station: ").Append(Station).Append("\n");
      
      sb.Append("  PreferedAlgoType: ").Append(PreferedAlgoType).Append("\n");
      
      sb.Append("  SimpleAlgo: ").Append(SimpleAlgo).Append("\n");
      
      sb.Append("  Time: ").Append(Time).Append("\n");
      
      sb.Append("  StationFirsttimeAnticipate: ").Append(StationFirsttimeAnticipate).Append("\n");
      
      sb.Append("  TimeAlgoChanged: ").Append(TimeAlgoChanged).Append("\n");
      
      sb.Append("  TimePidComputed: ").Append(TimePidComputed).Append("\n");
      
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
