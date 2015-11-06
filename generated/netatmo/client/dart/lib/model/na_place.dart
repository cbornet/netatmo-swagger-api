part of api;


@Entity()
class NAPlace {
  
  String city = null;
  
  
  num altitude = null;
  
  
  String country = null;
  
  
  bool fromIp = null;
  
  
  bool improveLocProposed = null;
  
  
  List<num> location = [];
  
  
  String timezone = null;
  
  
  bool trustLocation = null;
  
  
  NAPlace();

  @override
  String toString()  {
    return 'NAPlace[city=$city, altitude=$altitude, country=$country, fromIp=$fromIp, improveLocProposed=$improveLocProposed, location=$location, timezone=$timezone, trustLocation=$trustLocation, ]';
  }

}

