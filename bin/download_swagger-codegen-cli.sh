#!/bin/sh
VERSION=2.1.3
wget http://central.maven.org/maven2/io/swagger/swagger-codegen-cli/$VERSION/swagger-codegen-cli-$VERSION.jar -Pbin
chmod +x bin/swagger-codegen-cli-$VERSION.jar
ln -sf swagger-codegen-cli-$VERSION.jar bin/swagger-codegen-cli.jar
