part of api;


@Entity()
class NADevice {
  
  String id = null;
  
  
  int behavior = null;
  
  
  String cipherId = null;
  
  
  NADate dateSetup = null;
  
  
  int firmware = null;
  
  
  int hwVersion = null;
  
  
  NAHeatingSystem heatingSystem = null;
  
  
  NAHouseModel houseModel = null;
  
  
  String ip = null;
  
  
  int lastFwUpdate = null;
  
  
  int lastRadioStore = null;
  
  
  int lastStatusStore = null;
  
  
  int lastUpgrade = null;
  
  
  String moduleName = null;
  
  /* It lists which modules are linked with this device */
  List<String> modules = [];
  
  
  NAPlace place = null;
  
  
  Object setpoint = null;
  
  
  int setpointDefaultDuration = null;
  
  
  Map<String, List<NAObject>> setpointOrder = {};
  
  
  bool publicExtData = null;
  
  
  String stationName = null;
  
  
  Map<String, NAThermProgram> thermProgram = {};
  
  
  Map<String, List<NAThermProgram>> thermProgramBackup = {};
  
  
  Map<String, List<NAObject>> thermProgramOrder = {};
  
  /* Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module */
  String type = null;
  
  
  List<String> userOwner = [];
  
  
  bool udpConn = null;
  
  /* It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal */
  int wifiStatus = null;
  
  
  bool newFeatureAvail = null;
  
  
  bool firstPidAvail = null;
  
  
  List<String> dataType = [];
  
  
  NADevice();

  @override
  String toString()  {
    return 'NADevice[id=$id, behavior=$behavior, cipherId=$cipherId, dateSetup=$dateSetup, firmware=$firmware, hwVersion=$hwVersion, heatingSystem=$heatingSystem, houseModel=$houseModel, ip=$ip, lastFwUpdate=$lastFwUpdate, lastRadioStore=$lastRadioStore, lastStatusStore=$lastStatusStore, lastUpgrade=$lastUpgrade, moduleName=$moduleName, modules=$modules, place=$place, setpoint=$setpoint, setpointDefaultDuration=$setpointDefaultDuration, setpointOrder=$setpointOrder, publicExtData=$publicExtData, stationName=$stationName, thermProgram=$thermProgram, thermProgramBackup=$thermProgramBackup, thermProgramOrder=$thermProgramOrder, type=$type, userOwner=$userOwner, udpConn=$udpConn, wifiStatus=$wifiStatus, newFeatureAvail=$newFeatureAvail, firstPidAvail=$firstPidAvail, dataType=$dataType, ]';
  }

}

