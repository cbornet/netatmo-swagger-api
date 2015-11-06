part of api;


@Entity()
class NAMeasureBodyElem {
  
  int begTime = null;
  
  
  int stepTime = null;
  
  
  List<List<num>> value = [];
  
  
  NAMeasureBodyElem();

  @override
  String toString()  {
    return 'NAMeasureBodyElem[begTime=$begTime, stepTime=$stepTime, value=$value, ]';
  }

}

