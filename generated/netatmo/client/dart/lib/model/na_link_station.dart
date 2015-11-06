part of api;


@Entity()
class NALinkStation {
  
  String mac = null;
  
  
  String ext = null;
  
  
  num temperature = null;
  
  
  NALinkStation();

  @override
  String toString()  {
    return 'NALinkStation[mac=$mac, ext=$ext, temperature=$temperature, ]';
  }

}

