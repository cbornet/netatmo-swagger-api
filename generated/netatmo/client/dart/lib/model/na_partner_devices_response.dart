part of api;


@Entity()
class NAPartnerDevicesResponse {
  
  int timeServer = null;
  
  
  num timeExec = null;
  
  
  List<String> body = [];
  
  
  String status = null;
  
  
  NAPartnerDevicesResponse();

  @override
  String toString()  {
    return 'NAPartnerDevicesResponse[timeServer=$timeServer, timeExec=$timeExec, body=$body, status=$status, ]';
  }

}

