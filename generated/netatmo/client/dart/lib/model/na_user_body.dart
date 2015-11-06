part of api;


@Entity()
class NAUserBody {
  
  String id = null;
  
  /* Contains administrative information related to the user */
  NAUserAdministrative administrative = null;
  
  
  NADate dateCreation = null;
  
  /* An array of string containing the ids of the devices owned by the user */
  List<String> devices = [];
  
  /* An array of string containing the ids of the devices on which the user has a \"guest\" access */
  List<String> friendDevices = [];
  
  
  String mail = null;
  
  
  int timelineNotRead = null;
  
  
  int timelineSize = null;
  
  
  NAUserBody();

  @override
  String toString()  {
    return 'NAUserBody[id=$id, administrative=$administrative, dateCreation=$dateCreation, devices=$devices, friendDevices=$friendDevices, mail=$mail, timelineNotRead=$timelineNotRead, timelineSize=$timelineSize, ]';
  }

}

