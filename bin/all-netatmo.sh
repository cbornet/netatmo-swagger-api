#!/bin/sh

SCRIPT="$0"

while [ -h "$SCRIPT" ] ; do
  ls=`ls -ld "$SCRIPT"`
  link=`expr "$ls" : '.*-> \(.*\)$'`
  if expr "$link" : '/.*' > /dev/null; then
    SCRIPT="$link"
  else
    SCRIPT=`dirname "$SCRIPT"`/"$link"
  fi
done

if [ ! -d "${APP_DIR}" ]; then
  APP_DIR=`dirname "$SCRIPT"`/..
  APP_DIR=`cd "${APP_DIR}"; pwd`
fi

cd $APP_DIR
./bin/java-retrofit.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger.json netatmo
./bin/dynamic-html.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger.json netatmo
./bin/html.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger.json netatmo

./bin/akka-scala.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/android-java.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/csharp.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/dart.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/flash.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/java.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/java-jersey2.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/java-okhttp-gson.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/jaxrs-server.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/nodejs-server.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/objc.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/perl.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/php.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/python.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/qt5.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/ruby.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/scala-async.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/scala.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/scalatra-server.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/silex-server.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/spring-mvc-server.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/swift.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/tizen.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/typescript-angular.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
./bin/typescript-node.sh https://raw.githubusercontent.com/cbornet/netatmo-swagger-decl/master/swagger_access_token.json netatmo
