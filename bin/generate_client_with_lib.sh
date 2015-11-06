#!/bin/sh

executable="bin/swagger-codegen-cli.jar"
if [ ! -f "$executable" ]
then
    sh bin/download_swagger-codegen-cli.sh
fi

echo "************"
echo "generating $1-$2"
echo "************"
java -jar $executable generate -i $3 -l $1 -o generated/$4/client/$1-$2 --library $2 --artifact-id=$4-$1-$2 $5 $6
