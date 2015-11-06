part of api;


@Entity()
class NADeviceListResponse {
  
  int timeServer = null;
  
  
  num timeExec = null;
  
  
  NADeviceListBody body = null;
  
  
  String status = null;
  
  
  NADeviceListResponse();

  @override
  String toString()  {
    return 'NADeviceListResponse[timeServer=$timeServer, timeExec=$timeExec, body=$body, status=$status, ]';
  }

}

