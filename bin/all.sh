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
./bin/akka-scala.sh $@
./bin/android-java.sh $@
./bin/csharp.sh $@
./bin/dart.sh $@
./bin/dynamic-html.sh $@
./bin/flash.sh $@
./bin/html.sh $@
./bin/java.sh $@
./bin/java-jersey2.sh $@
./bin/java-okhttp-gson.sh $@
./bin/java-retrofit.sh $@
./bin/jaxrs-server.sh $@
./bin/nodejs-server.sh $@
./bin/objc.sh $@
./bin/perl.sh $@
./bin/php.sh $@
./bin/python.sh $@
./bin/qt5.sh $@
./bin/ruby.sh $@
./bin/scala-async.sh $@
./bin/scala.sh $@
./bin/scalatra-server.sh $@
./bin/silex-server.sh $@
./bin/spring-mvc-server.sh $@
./bin/swift.sh $@
./bin/tizen.sh $@
./bin/typescript-angular.sh $@
./bin/typescript-node.sh $@
