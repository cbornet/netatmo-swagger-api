part of api;


@Entity()
class NAUserResponse {
  
  int timeServer = null;
  
  
  num timeExec = null;
  
  
  NAUserBody body = null;
  
  
  String status = null;
  
  
  NAUserResponse();

  @override
  String toString()  {
    return 'NAUserResponse[timeServer=$timeServer, timeExec=$timeExec, body=$body, status=$status, ]';
  }

}

