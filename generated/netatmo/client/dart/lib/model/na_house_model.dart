part of api;


@Entity()
class NAHouseModel {
  
  String algoType = null;
  
  
  NAHouseModelCa ca = null;
  
  
  Map<String, int> extTemps = {};
  
  
  bool firstAnticipateAvail = null;
  
  
  bool firstPidAvail = null;
  
  
  NAStation gefs = null;
  
  
  String inUse = null;
  
  
  NADate lastComputeTry = null;
  
  
  NALinkStation linkStation = null;
  
  
  NAPidAlgo pidAlgo = null;
  
  
  NAStation station = null;
  
  
  String preferedAlgoType = null;
  
  
  NASimpleAlgo simpleAlgo = null;
  
  
  NADate time = null;
  
  
  bool stationFirsttimeAnticipate = null;
  
  
  int timeAlgoChanged = null;
  
  
  int timePidComputed = null;
  
  
  NAHouseModel();

  @override
  String toString()  {
    return 'NAHouseModel[algoType=$algoType, ca=$ca, extTemps=$extTemps, firstAnticipateAvail=$firstAnticipateAvail, firstPidAvail=$firstPidAvail, gefs=$gefs, inUse=$inUse, lastComputeTry=$lastComputeTry, linkStation=$linkStation, pidAlgo=$pidAlgo, station=$station, preferedAlgoType=$preferedAlgoType, simpleAlgo=$simpleAlgo, time=$time, stationFirsttimeAnticipate=$stationFirsttimeAnticipate, timeAlgoChanged=$timeAlgoChanged, timePidComputed=$timePidComputed, ]';
  }

}

