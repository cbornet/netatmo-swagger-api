part of api;


@Entity()
class NADeviceListBody {
  
  List<NADevice> devices = [];
  
  
  List<NAModule> modules = [];
  
  
  NADeviceListBody();

  @override
  String toString()  {
    return 'NADeviceListBody[devices=$devices, modules=$modules, ]';
  }

}

