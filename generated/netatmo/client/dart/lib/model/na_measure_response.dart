part of api;


@Entity()
class NAMeasureResponse {
  
  int timeServer = null;
  
  
  num timeExec = null;
  
  
  List<NAMeasureBodyElem> body = [];
  
  
  String status = null;
  
  
  NAMeasureResponse();

  @override
  String toString()  {
    return 'NAMeasureResponse[timeServer=$timeServer, timeExec=$timeExec, body=$body, status=$status, ]';
  }

}

