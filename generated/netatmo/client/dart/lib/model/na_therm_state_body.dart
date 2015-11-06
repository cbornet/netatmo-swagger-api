part of api;


@Entity()
class NAThermStateBody {
  
  NASetpoint setpoint = null;
  
  
  NASetpoint setpointOrder = null;
  
  
  NAThermProgram thermProgram = null;
  
  
  List<NAThermProgram> thermProgramBackup = [];
  
  
  NAThermProgram thermProgramOrder = null;
  
  
  int thermOrientation = null;
  
  
  int thermRelayCmd = null;
  
  
  int batteryVp = null;
  
  
  int rfStatus = null;
  
  
  bool plugConnectedBoiler = null;
  
  
  bool udpConn = null;
  
  
  int lastThermSeen = null;
  
  
  int lastPlugSeen = null;
  
  
  int wifiStatus = null;
  
  
  NAThermMeasure measured = null;
  
  
  NAThermStateBody();

  @override
  String toString()  {
    return 'NAThermStateBody[setpoint=$setpoint, setpointOrder=$setpointOrder, thermProgram=$thermProgram, thermProgramBackup=$thermProgramBackup, thermProgramOrder=$thermProgramOrder, thermOrientation=$thermOrientation, thermRelayCmd=$thermRelayCmd, batteryVp=$batteryVp, rfStatus=$rfStatus, plugConnectedBoiler=$plugConnectedBoiler, udpConn=$udpConn, lastThermSeen=$lastThermSeen, lastPlugSeen=$lastPlugSeen, wifiStatus=$wifiStatus, measured=$measured, ]';
  }

}

