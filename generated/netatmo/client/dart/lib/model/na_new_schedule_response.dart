part of api;


@Entity()
class NANewScheduleResponse {
  
  int timeServer = null;
  
  
  num timeExec = null;
  
  
  NANewScheduleBody body = null;
  
  
  String status = null;
  
  
  NANewScheduleResponse();

  @override
  String toString()  {
    return 'NANewScheduleResponse[timeServer=$timeServer, timeExec=$timeExec, body=$body, status=$status, ]';
  }

}

