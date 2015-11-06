part of api;


@Entity()
class NAResponse {
  
  String status = null;
  
  
  num timeExec = null;
  
  
  int timeServer = null;
  
  
  NAResponse();

  @override
  String toString()  {
    return 'NAResponse[status=$status, timeExec=$timeExec, timeServer=$timeServer, ]';
  }

}

