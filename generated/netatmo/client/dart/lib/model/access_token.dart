part of api;


@Entity()
class AccessToken {
  
  String accessToken = null;
  
  
  String refreshToken = null;
  
  
  int expireIn = null;
  
  
  int expiresIn = null;
  
  
  List<String> scope = [];
  
  
  AccessToken();

  @override
  String toString()  {
    return 'AccessToken[accessToken=$accessToken, refreshToken=$refreshToken, expireIn=$expireIn, expiresIn=$expiresIn, scope=$scope, ]';
  }

}

