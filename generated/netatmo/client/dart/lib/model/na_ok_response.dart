part of api;


@Entity()
class NAOkResponse {
  
  int timeServer = null;
  
  
  num timeExec = null;
  
  
  String body = null;
  
  
  String status = null;
  
  
  NAOkResponse();

  @override
  String toString()  {
    return 'NAOkResponse[timeServer=$timeServer, timeExec=$timeExec, body=$body, status=$status, ]';
  }

}

