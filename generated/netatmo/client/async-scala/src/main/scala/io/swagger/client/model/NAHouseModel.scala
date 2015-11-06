package io.swagger.client.model

import org.joda.time.DateTime


case class NAHouseModel (
  algo_type: String,
  ca: NAHouseModelCa,
  ext_temps: Map[String, Integer],
  first_anticipate_avail: Boolean,
  first_pid_avail: Boolean,
  gefs: NAStation,
  in_use: String,
  last_compute_try: NADate,
  link_station: NALinkStation,
  pid_algo: NAPidAlgo,
  station: NAStation,
  prefered_algo_type: String,
  simple_algo: NASimpleAlgo,
  time: NADate,
  station_firsttime_anticipate: Boolean,
  time_algo_changed: Integer,
  time_pid_computed: Integer
  
)
