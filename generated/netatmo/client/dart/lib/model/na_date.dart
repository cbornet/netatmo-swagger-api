part of api;


@Entity()
class NADate {
  
  int sec = null;
  
  
  int usec = null;
  
  
  NADate();

  @override
  String toString()  {
    return 'NADate[sec=$sec, usec=$usec, ]';
  }

}

