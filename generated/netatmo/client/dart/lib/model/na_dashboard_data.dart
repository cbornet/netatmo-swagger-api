part of api;


@Entity()
class NADashboardData {
  
  int timeUtc = null;
  
  
  num deviceId = null;
  
  
  int boilerOn = null;
  
  
  int boilerOff = null;
  
  /* Last temperature measure @ time_utc (in °C) */
  num temperature = null;
  
  /* Timestamp when max temperature was measured */
  int dateMaxTemp = null;
  
  /* Timestamp when min temperature was measured */
  int dateMinTemp = null;
  
  /* Max temperature of the day (measured @ date_max_temp) */
  num minTemp = null;
  
  /* Min temperature of the day (measured @ date_min_temp) */
  num maxTemp = null;
  
  /* Real measured pressure @ time_utc (in mb) */
  num absolutePressure = null;
  
  /* Last Co2 measured @ time_utc (in ppm) */
  num cO2 = null;
  
  /* Last humidity measured @ time_utc (in %) */
  num humidity = null;
  
  /* Last noise measured @ time_utc (in db) */
  num noise = null;
  
  /* Last Sea level pressure measured @ time_utc (in mb) */
  num pressure = null;
  
  /* Last rain measured (in mm) */
  int rain = null;
  
  /* Amount of rain in last hour */
  int sumRain1 = null;
  
  /* Amount of rain today */
  int sumRain24 = null;
  
  
  NADashboardData();

  @override
  String toString()  {
    return 'NADashboardData[timeUtc=$timeUtc, deviceId=$deviceId, boilerOn=$boilerOn, boilerOff=$boilerOff, temperature=$temperature, dateMaxTemp=$dateMaxTemp, dateMinTemp=$dateMinTemp, minTemp=$minTemp, maxTemp=$maxTemp, absolutePressure=$absolutePressure, cO2=$cO2, humidity=$humidity, noise=$noise, pressure=$pressure, rain=$rain, sumRain1=$sumRain1, sumRain24=$sumRain24, ]';
  }

}

