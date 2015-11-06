'use strict';

var url = require('url');


var Oauth = require('./OauthService');


module.exports.getToken = function getToken (req, res, next) {
  var grantType = req.swagger.params['grant_type'].value;
  var clientId = req.swagger.params['client_id'].value;
  var clientSecret = req.swagger.params['client_secret'].value;
  var scope = req.swagger.params['scope'].value;
  var username = req.swagger.params['username'].value;
  var password = req.swagger.params['password'].value;
  var code = req.swagger.params['code'].value;
  var redirectUri = req.swagger.params['redirect_uri'].value;
  var refreshToken = req.swagger.params['refresh_token'].value;
  

  var result = Oauth.getToken(grantType, clientId, clientSecret, scope, username, password, code, redirectUri, refreshToken);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
