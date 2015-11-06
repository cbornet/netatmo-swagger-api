part of api;


@Entity()
class NATimeTableItem {
  
  int id = null;
  
  
  int mOffset = null;
  
  
  NATimeTableItem();

  @override
  String toString()  {
    return 'NATimeTableItem[id=$id, mOffset=$mOffset, ]';
  }

}

