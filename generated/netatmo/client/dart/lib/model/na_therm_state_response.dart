part of api;


@Entity()
class NAThermStateResponse {
  
  int timeServer = null;
  
  
  num timeExec = null;
  
  
  NAThermStateBody body = null;
  
  
  String status = null;
  
  
  NAThermStateResponse();

  @override
  String toString()  {
    return 'NAThermStateResponse[timeServer=$timeServer, timeExec=$timeExec, body=$body, status=$status, ]';
  }

}

