part of api;


@Entity()
class NAObject {
  
  String $Id = null;
  
  
  NAObject();

  @override
  String toString()  {
    return 'NAObject[$Id=$$Id, ]';
  }

}

