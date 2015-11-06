#!/bin/sh

executable="bin/swagger-codegen-cli.jar"
if [ ! -f "$executable" ]
then
    sh bin/download_swagger-codegen-cli.sh
fi

echo "************"
echo "generating $2"
echo "************"
java -jar $executable generate -i $3 -l $2 -o generated/$4/$1/$2 $5 $6
