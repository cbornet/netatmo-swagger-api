'use strict';

exports.createnewschedule = function(deviceId, moduleId, thermProgram) {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "body" : {
    "schedule_id" : "aeiou"
  },
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.devicelist = function(appType, deviceId, getFavorites) {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "body" : {
    "devices" : [ {
      "cipher_id" : "aeiou",
      "setpoint_default_duration" : 123,
      "last_fw_update" : 123,
      "therm_program" : {
        "key" : {
          "program_id" : "aeiou",
          "name" : "aeiou",
          "zones" : [ {
            "temp" : 1.3579000000000001069366817318950779736042022705078125,
            "name" : "aeiou",
            "id" : 123,
            "type" : 123
          } ],
          "selected" : true,
          "timetable" : [ {
            "m_offset" : 123,
            "id" : 123
          } ]
        }
      },
      "udp_conn" : true,
      "type" : "aeiou",
      "therm_program_order" : {
        "key" : [ "" ]
      },
      "last_upgrade" : 123,
      "wifi_status" : 123,
      "place" : {
        "altitude" : 1.3579000000000001069366817318950779736042022705078125,
        "country" : "aeiou",
        "city" : "aeiou",
        "timezone" : "aeiou",
        "improveLocProposed" : true,
        "location" : [ 1.3579000000000001069366817318950779736042022705078125 ],
        "trust_location" : true,
        "from_ip" : true
      },
      "new_feature_avail" : true,
      "behavior" : 123,
      "firmware" : 123,
      "house_model" : {
        "station_firsttime_anticipate" : true,
        "simple_algo" : {
          "high_deadband" : 123
        },
        "in_use" : "aeiou",
        "algo_type" : "aeiou",
        "first_anticipate_avail" : true,
        "link_station" : {
          "ext" : "aeiou",
          "Temperature" : 1.3579000000000001069366817318950779736042022705078125,
          "mac" : "aeiou"
        },
        "time_algo_changed" : 123,
        "time_pid_computed" : 123,
        "ext_temps" : {
          "key" : 123
        },
        "prefered_algo_type" : "aeiou",
        "pid_algo" : {
          "td" : 123,
          "period" : 123,
          "ti" : 123,
          "gain" : 123
        },
        "station" : "",
        "gefs" : {
          "lag_down" : 123,
          "off_overshoot" : 1.3579000000000001069366817318950779736042022705078125,
          "tau" : 123,
          "lag_up" : 123,
          "pk" : 123,
          "on_overshoot" : 1.3579000000000001069366817318950779736042022705078125
        },
        "last_compute_try" : "",
        "time" : "",
        "first_pid_avail" : true,
        "ca" : {
          "te" : 1.3579000000000001069366817318950779736042022705078125,
          "ti" : 123,
          "so" : "aeiou"
        }
      },
      "station_name" : "aeiou",
      "last_radio_store" : 123,
      "setpoint" : "{}",
      "user_owner" : [ "aeiou" ],
      "ip" : "aeiou",
      "modules" : [ "aeiou" ],
      "date_setup" : {
        "sec" : 123,
        "usec" : 123
      },
      "public_ext_data" : true,
      "heating_system" : {
        "heating_energy" : "aeiou"
      },
      "setpoint_order" : {
        "key" : [ {
          "$id" : "aeiou"
        } ]
      },
      "therm_program_backup" : {
        "key" : [ "" ]
      },
      "data_type" : [ "aeiou" ],
      "_id" : "aeiou",
      "module_name" : "aeiou",
      "last_status_store" : 123,
      "first_pid_avail" : true
    } ],
    "modules" : [ {
      "last_seen" : 123,
      "therm_orientation" : 123,
      "last_message" : 123,
      "type" : "aeiou",
      "date_setup" : "",
      "rf_status" : 123,
      "battery_vp" : 123,
      "public_ext_data" : true,
      "therm_relay_cmd" : 123,
      "data_type" : [ "aeiou" ],
      "_id" : "aeiou",
      "module_name" : "aeiou",
      "dashboard_data" : {
        "date_min_temp" : 123,
        "time_utc" : 123,
        "Temperature" : 1.3579000000000001069366817318950779736042022705078125,
        "device_id" : 123,
        "Noise" : 1.3579000000000001069366817318950779736042022705078125,
        "CO2" : 1.3579000000000001069366817318950779736042022705078125,
        "Pressure" : 1.3579000000000001069366817318950779736042022705078125,
        "date_max_temp" : 123,
        "Rain" : 123,
        "BoilerOn" : 123,
        "min_temp" : 1.3579000000000001069366817318950779736042022705078125,
        "BoilerOff" : 123,
        "Humidity" : 1.3579000000000001069366817318950779736042022705078125,
        "max_temp" : 1.3579000000000001069366817318950779736042022705078125,
        "AbsolutePressure" : 1.3579000000000001069366817318950779736042022705078125,
        "sum_rain_24" : 123,
        "sum_rain_1" : 123
      },
      "firmware" : 123,
      "main_device" : "aeiou"
    } ]
  },
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getmeasure = function(deviceId, scale, type, moduleId, dateBegin, dateEnd, limit, optimize, realTime) {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "body" : [ {
    "beg_time" : 123,
    "step_time" : 123,
    "value" : [ [ 1.3579000000000001069366817318950779736042022705078125 ] ]
  } ],
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getthermstate = function(deviceId, moduleId) {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "body" : {
    "last_plug_seen" : 123,
    "measured" : {
      "temperature" : 1.3579000000000001069366817318950779736042022705078125,
      "setpoint_temp" : 1.3579000000000001069366817318950779736042022705078125,
      "time" : 123
    },
    "last_therm_seen" : 123,
    "setpoint" : {
      "setpoint_endtime" : 123,
      "setpoint_temp" : 1.3579000000000001069366817318950779736042022705078125,
      "setpoint_mode" : "aeiou"
    },
    "therm_orientation" : 123,
    "plug_connected_boiler" : true,
    "therm_program" : {
      "program_id" : "aeiou",
      "name" : "aeiou",
      "zones" : [ {
        "temp" : 1.3579000000000001069366817318950779736042022705078125,
        "name" : "aeiou",
        "id" : 123,
        "type" : 123
      } ],
      "selected" : true,
      "timetable" : [ {
        "m_offset" : 123,
        "id" : 123
      } ]
    },
    "udp_conn" : true,
    "therm_program_order" : "",
    "battery_vp" : 123,
    "rf_status" : 123,
    "setpoint_order" : "",
    "therm_program_backup" : [ "" ],
    "wifi_status" : 123,
    "therm_relay_cmd" : 123
  },
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getuser = function() {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "body" : {
    "mail" : "aeiou",
    "devices" : [ "aeiou" ],
    "administrative" : {
      "country" : "aeiou",
      "unit" : "aeiou",
      "reg_locale" : "aeiou",
      "windunit" : "aeiou",
      "feel_like_algo" : "aeiou",
      "lang" : "aeiou",
      "pressureunit" : "aeiou"
    },
    "timeline_not_read" : 123,
    "timeline_size" : 123,
    "_id" : "aeiou",
    "friend_devices" : [ "aeiou" ],
    "date_creation" : {
      "sec" : 123,
      "usec" : 123
    }
  },
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.setthermpoint = function(deviceId, moduleId, setpointMode, setpointEndtime, setpointTemp) {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.switchschedule = function(deviceId, moduleId, scheduleId) {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.syncschedule = function(deviceId, moduleId, thermProgram) {

  var examples = {};
  
  examples['application/json'] = {
  "time_server" : 123,
  "time_exec" : 1.3579000000000001069366817318950779736042022705078125,
  "status" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
