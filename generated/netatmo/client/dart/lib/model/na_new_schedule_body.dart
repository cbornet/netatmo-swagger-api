part of api;


@Entity()
class NANewScheduleBody {
  /* Id of the schedule. It can be use with the method \"switchschedule\" */
  String scheduleId = null;
  
  
  NANewScheduleBody();

  @override
  String toString()  {
    return 'NANewScheduleBody[scheduleId=$scheduleId, ]';
  }

}

