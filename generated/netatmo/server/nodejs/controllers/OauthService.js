'use strict';

exports.getToken = function(grantType, clientId, clientSecret, scope, username, password, code, redirectUri, refreshToken) {

  var examples = {};
  
  examples['application/json'] = {
  "access_token" : "aeiou",
  "refresh_token" : "aeiou",
  "scope" : [ "aeiou" ],
  "expire_in" : 123,
  "expires_in" : 123
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
