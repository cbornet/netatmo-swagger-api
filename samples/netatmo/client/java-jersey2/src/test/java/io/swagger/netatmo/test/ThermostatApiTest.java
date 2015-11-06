package io.swagger.netatmo.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeNotNull;

import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;
import java.util.Properties;

import org.junit.Before;
import org.junit.Test;

import io.swagger.client.ApiClient;
import io.swagger.client.ApiException;
import io.swagger.client.api.OauthApi;
import io.swagger.client.api.ThermostatApi;
import io.swagger.client.model.NADevice;
import io.swagger.client.model.NADeviceListResponse;
import io.swagger.client.model.NANewScheduleResponse;
import io.swagger.client.model.NAOkResponse;
import io.swagger.client.model.NASetpoint;
import io.swagger.client.model.NAThermProgram;
import io.swagger.client.model.NAThermStateBody;
import io.swagger.client.model.NAUserResponse;
import io.swagger.client.model.NAZone;

public class ThermostatApiTest {
    
    private ThermostatApi api;
    
    private Properties props;
    
    private String relayId;
    
    private String thermostatId;
    
    private static final String TEST_PROGRAM_NAME = "sdk_test";
    
    private String accessToken;

    @Before
    public void setup() throws IOException, ApiException {
        props = new Properties();
        InputStream is = ClassLoader.getSystemResourceAsStream("unittest.properties");
        props.load(is);
        
        relayId = props.getProperty("io.swagger.client.relay");
        thermostatId = props.getProperty("io.swagger.client.thermostat");
        
        accessToken = new OauthApi().getToken("password", 
                props.getProperty("io.swagger.client.client_id"),
                props.getProperty("io.swagger.client.client_secret"),
                "read_thermostat write_thermostat",
                props.getProperty("io.swagger.client.username"),
                props.getProperty("io.swagger.client.password"),
                null, null, null).getAccessToken();
        
        api = new ThermostatApi();
    }

    @Test
    public void testGetUser() throws ApiException {
        NAUserResponse user = api.getuser(accessToken);
        assertNotNull(user);
        assertEquals(user.getBody().getMail(), props.getProperty("io.swagger.client.username"));
    }
    
    @Test
    public void testDeviceList() throws ApiException {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        NADeviceListResponse deviceList = api.devicelist(accessToken, "app_thermostat", relayId, false);
        NADevice relay = deviceList.getBody().getDevices().get(0);
        assertEquals(relay.getId(), relayId);
        assertTrue( relay.getModules().contains(new String(thermostatId)));
    }
    
    @Test 
    public void testGetMeasure() throws ApiException {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        assertEquals(api.getmeasure(accessToken, relayId, "max",
                Arrays.asList(new String[]{"Temperature","Sp_Temperature","BoilerOn","BoilerOff"}),
                thermostatId, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 4);
    }
    
    @Test
    public void testSetpoint() throws ApiException {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        Float setpointTemp = Float.valueOf(20);

        NAThermStateBody thermState = api.getthermstate(accessToken, relayId, thermostatId).getBody();
        NASetpoint setpoint = thermState.getSetpointOrder();
        if(setpoint == null) {
            setpoint = thermState.getSetpoint();
        }
        
        //If already in manual mode, ensure that the temp will be changed
        if(setpoint.getSetpointMode() == "manual") {
            setpointTemp = setpoint.getSetpointTemp() + Float.valueOf(0.5f);
        }
        
        //Send order
        api.setthermpoint(accessToken, relayId, thermostatId, "manual", (int)(System.currentTimeMillis()/1000 + 30), setpointTemp);
        
        //Verify order
        thermState = api.getthermstate(accessToken, relayId, thermostatId).getBody();
        if(thermState.getSetpointOrder() != null) {
            assertEquals(thermState.getSetpointOrder().getSetpointTemp(), setpointTemp);
        } else {
            assertEquals(thermState.getSetpoint().getSetpointTemp(), setpointTemp);
        }

        //Rollback previous mode
        api.setthermpoint(accessToken, relayId, thermostatId, setpoint.getSetpointMode(), setpoint.getSetpointEndtime(), setpoint.getSetpointTemp());
    }
    
    @Test
    public void testSchedule() throws ApiException {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        NAThermStateBody thermState = api.getthermstate(accessToken, relayId, thermostatId).getBody();
        
        if(thermState.getThermProgram().getName().equals(TEST_PROGRAM_NAME)
                || (thermState.getThermProgramOrder() != null && thermState.getThermProgramOrder().getName().equals(TEST_PROGRAM_NAME))) {
            throw new RuntimeException("The test program should not be the one in use at the beginning of the test !");
        }
        
        //Get program
        NAThermProgram program = thermState.getThermProgramOrder();
        if(program == null) {
            program = thermState.getThermProgram();
        }
        String previousProgramId = program.getProgramId();

        // Do we need to create a test program ? 
        // Note : if you want to test the program creation, you need to delete the test program manually on Netatmo'site since it cannot be done by API.
        NAThermProgram testProgram = getExitingTestProgram(thermState);
        if( testProgram == null) {
            testProgram = program;
            testProgram.setProgramId(null);
            testProgram.setName(TEST_PROGRAM_NAME);
            NANewScheduleResponse newscheduleResponse = api.createnewschedule(accessToken, relayId, thermostatId, testProgram);
            assertEquals(newscheduleResponse.getStatus(), "ok");
            testProgram.setProgramId( newscheduleResponse.getBody().getScheduleId());
        }

        //Switch to test schedule
        NAOkResponse naOkResponse = api.switchschedule(accessToken, relayId, thermostatId, testProgram.getProgramId());
        assertEquals(naOkResponse.getStatus(), "ok");

        //Modify schedule
        Float nightTempBefore = null;
        for (NAZone zone : testProgram.getZones()) {
            if(zone.getType() == 1) {
                nightTempBefore = zone.getTemp();
                zone.setTemp(nightTempBefore + Float.valueOf(0.5f));
                break;
            }
        }
        
        if(nightTempBefore == null) {
            throw new RuntimeException("The current program doesn't have a night zone. This is unexpected by this test !");
        }
        naOkResponse = api.syncschedule(accessToken, relayId, thermostatId, testProgram);
        assertEquals(naOkResponse.getStatus(), "ok");
        
        //Verify the change of temperature
        thermState = api.getthermstate(accessToken, relayId, thermostatId).getBody();
        testProgram = thermState.getThermProgramOrder();
        if(testProgram == null) {
            testProgram = thermState.getThermProgram();
        }
        
        for (NAZone zone : testProgram.getZones()) {
            if(zone.getType() == 1) {
                assertEquals(nightTempBefore + Float.valueOf(0.5f), zone.getTemp(), 0.0001);
                zone.setTemp(nightTempBefore);
                break;
            }
        }
        
        //Rollback changes
        api.syncschedule(accessToken, relayId, thermostatId, testProgram);
        api.switchschedule(accessToken, relayId, thermostatId, previousProgramId);
    }
    
    private NAThermProgram getExitingTestProgram( NAThermStateBody thermState ) {
        if (thermState.getThermProgramBackup() != null) {
            for(NAThermProgram thermProgram : thermState.getThermProgramBackup()) {
                if(thermProgram.getName().equals(TEST_PROGRAM_NAME)) {
                    return thermProgram;
                }
            }
        }
        return null;
    }
}