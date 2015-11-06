part of api;


@Entity()
class NAHeatingSystem {
  
  String heatingEnergy = null;
  
  
  bool heatingSystemWindowSeen = null;
  
  
  NAHeatingSystem();

  @override
  String toString()  {
    return 'NAHeatingSystem[heatingEnergy=$heatingEnergy, heatingSystemWindowSeen=$heatingSystemWindowSeen, ]';
  }

}

