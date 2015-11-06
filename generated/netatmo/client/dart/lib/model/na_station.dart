part of api;


@Entity()
class NAStation {
  
  int lagDown = null;
  
  
  int lagUp = null;
  
  
  num offOvershoot = null;
  
  
  num onOvershoot = null;
  
  
  int pk = null;
  
  
  int tau = null;
  
  
  NAStation();

  @override
  String toString()  {
    return 'NAStation[lagDown=$lagDown, lagUp=$lagUp, offOvershoot=$offOvershoot, onOvershoot=$onOvershoot, pk=$pk, tau=$tau, ]';
  }

}

