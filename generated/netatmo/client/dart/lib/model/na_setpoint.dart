part of api;


@Entity()
class NASetpoint {
  
  num setpointTemp = null;
  
  
  int setpointEndtime = null;
  
  
  String setpointMode = null;
  
  
  NASetpoint();

  @override
  String toString()  {
    return 'NASetpoint[setpointTemp=$setpointTemp, setpointEndtime=$setpointEndtime, setpointMode=$setpointMode, ]';
  }

}

