part of api;


@Entity()
class NAThermMeasure {
  
  int time = null;
  
  
  num temperature = null;
  
  
  num setpointTemp = null;
  
  
  NAThermMeasure();

  @override
  String toString()  {
    return 'NAThermMeasure[time=$time, temperature=$temperature, setpointTemp=$setpointTemp, ]';
  }

}

