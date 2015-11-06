'use strict';

var url = require('url');


var Public = require('./PublicService');


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
  

  var result = Public.getmeasure(accessToken, deviceId, scale, type, moduleId, dateBegin, dateEnd, limit, optimize, realTime);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
