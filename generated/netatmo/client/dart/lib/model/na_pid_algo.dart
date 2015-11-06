part of api;


@Entity()
class NAPidAlgo {
  
  int gain = null;
  
  
  int period = null;
  
  
  int td = null;
  
  
  int ti = null;
  
  
  NAPidAlgo();

  @override
  String toString()  {
    return 'NAPidAlgo[gain=$gain, period=$period, td=$td, ti=$ti, ]';
  }

}

