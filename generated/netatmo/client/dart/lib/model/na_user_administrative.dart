part of api;


@Entity()
class NAUserAdministrative {
  /* user country */
  String country = null;
  
  /* user locale */
  String lang = null;
  
  /* user regional preferences (used for displaying date) */
  String regLocale = null;
  
  /* 0 -> metric system, 1 -> imperial system */
  String unit = null;
  
  /* 0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot */
  String windunit = null;
  
  /* 0 -> mbar, 1 -> inHg, 2 -> mmHg */
  String pressureunit = null;
  
  /* algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index */
  String feelLikeAlgo = null;
  
  
  NAUserAdministrative();

  @override
  String toString()  {
    return 'NAUserAdministrative[country=$country, lang=$lang, regLocale=$regLocale, unit=$unit, windunit=$windunit, pressureunit=$pressureunit, feelLikeAlgo=$feelLikeAlgo, ]';
  }

}

