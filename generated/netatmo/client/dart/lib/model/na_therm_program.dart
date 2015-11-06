part of api;


@Entity()
class NAThermProgram {
  
  String programId = null;
  
  
  String name = null;
  
  
  List<NAZone> zones = [];
  
  
  List<NATimeTableItem> timetable = [];
  
  
  bool selected = null;
  
  
  NAThermProgram();

  @override
  String toString()  {
    return 'NAThermProgram[programId=$programId, name=$name, zones=$zones, timetable=$timetable, selected=$selected, ]';
  }

}

