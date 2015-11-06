package com.wordnik.client.model

import com.wordnik.client.model.NALinkStation
import com.wordnik.client.model.NAStation
import com.wordnik.client.model.NAHouseModelCa
import com.wordnik.client.model.NAPidAlgo
import com.wordnik.client.model.NASimpleAlgo
import com.wordnik.client.model.NADate


case class NAHouseModel (
  algo_type: String,
  ca: NAHouseModelCa,
  ext_temps: Map[String, Int],
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
  time_algo_changed: Int,
  time_pid_computed: Int
)
