'use strict';

var url = require('url');


var Thermostat = require('./ThermostatService');


module.exports.createnewschedule = function createnewschedule (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  var deviceId = req.swagger.params['device_id'].value;
  var moduleId = req.swagger.params['module_id'].value;
  var thermProgram = req.swagger.params['therm_program'].value;
  

  var result = Thermostat.createnewschedule(accessToken, deviceId, moduleId, thermProgram);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.devicelist = function devicelist (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  var appType = req.swagger.params['app_type'].value;
  var deviceId = req.swagger.params['device_id'].value;
  var getFavorites = req.swagger.params['get_favorites'].value;
  

  var result = Thermostat.devicelist(accessToken, appType, deviceId, getFavorites);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getmeasure = function getmeasure (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  var deviceId = req.swagger.params['device_id'].value;
  var scale = req.swagger.params['scale'].value;
  var type = req.swagger.params['type'].value;
  var moduleId = req.swagger.params['module_id'].value;
  var dateBegin = req.swagger.params['date_begin'].value;
  var dateEnd = req.swagger.params['date_end'].value;
  var limit = req.swagger.params['limit'].value;
  var optimize = req.swagger.params['optimize'].value;
  var realTime = req.swagger.params['real_time'].value;
  

  var result = Thermostat.getmeasure(accessToken, deviceId, scale, type, moduleId, dateBegin, dateEnd, limit, optimize, realTime);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getthermstate = function getthermstate (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  var deviceId = req.swagger.params['device_id'].value;
  var moduleId = req.swagger.params['module_id'].value;
  

  var result = Thermostat.getthermstate(accessToken, deviceId, moduleId);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getuser = function getuser (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  

  var result = Thermostat.getuser(accessToken);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.setthermpoint = function setthermpoint (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  var deviceId = req.swagger.params['device_id'].value;
  var moduleId = req.swagger.params['module_id'].value;
  var setpointMode = req.swagger.params['setpoint_mode'].value;
  var setpointEndtime = req.swagger.params['setpoint_endtime'].value;
  var setpointTemp = req.swagger.params['setpoint_temp'].value;
  

  var result = Thermostat.setthermpoint(accessToken, deviceId, moduleId, setpointMode, setpointEndtime, setpointTemp);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.switchschedule = function switchschedule (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  var deviceId = req.swagger.params['device_id'].value;
  var moduleId = req.swagger.params['module_id'].value;
  var scheduleId = req.swagger.params['schedule_id'].value;
  

  var result = Thermostat.switchschedule(accessToken, deviceId, moduleId, scheduleId);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.syncschedule = function syncschedule (req, res, next) {
  var accessToken = req.swagger.params['access_token'].value;
  var deviceId = req.swagger.params['device_id'].value;
  var moduleId = req.swagger.params['module_id'].value;
  var thermProgram = req.swagger.params['therm_program'].value;
  

  var result = Thermostat.syncschedule(accessToken, deviceId, moduleId, thermProgram);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
