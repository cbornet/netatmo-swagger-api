# Netatmo-java-retrofit
This is a sample app to show usage of the retrofit generated SDK.

### Usage

First, edit /src/test/resources/unittest.properties and set your Netatmo OAuth2 credentials and the ids of the devices on which the tests will occur.

If you don't have one of the devices, comment the property so that the tests that need it will be skipped.

If you want to test the partner method, set isPartner to true (the account and app must be the ones that have partner access).

To launch the tests enter:
```
mvn test
```

### WARNING !

Some of the tests for the thermostat will temporarily change the temperatures and program so use only on test devices and not on a real installation. A program "sdk_test" will also be created. To delete it if needed, go to the Netatmo's webapp.
