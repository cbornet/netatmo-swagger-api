part of api;


@Entity()
class NAZone {
  
  int id = null;
  
  
  int type = null;
  
  
  String name = null;
  
  
  num temp = null;
  
  
  NAZone();

  @override
  String toString()  {
    return 'NAZone[id=$id, type=$type, name=$name, temp=$temp, ]';
  }

}

