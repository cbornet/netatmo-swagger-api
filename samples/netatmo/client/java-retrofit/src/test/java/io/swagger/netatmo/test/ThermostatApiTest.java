package io.swagger.netatmo.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeNotNull;

import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

import org.junit.Before;
import org.junit.Test;

import io.swagger.client.ApiClient;
import io.swagger.client.CollectionFormats;
import io.swagger.client.CollectionFormats.CSVParams;
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

    @Before
    public void setup() throws IOException {
        props = new Properties();
        InputStream is = ClassLoader.getSystemResourceAsStream("unittest.properties");
        props.load(is);
        
        relayId = props.getProperty("io.swagger.client.relay");
        thermostatId = props.getProperty("io.swagger.client.thermostat");
        
        ApiClient apiClient = new ApiClient(props.getProperty("io.swagger.client.bypasscert").equals("true"), 
        		"password_oauth",
                props.getProperty("io.swagger.client.client_id"),
                props.getProperty("io.swagger.client.client_secret"),
                props.getProperty("io.swagger.client.username"),
                props.getProperty("io.swagger.client.password"));
        apiClient.getTokenEndPoint().setScope("read_thermostat write_thermostat");
        //apiClient.getAdapterBuilder().setLogLevel(LogLevel.FULL);
        
        api = apiClient.createService(ThermostatApi.class);
    }

    @Test
    public void testGetUser() throws Exception {
        NAUserResponse user = api.getuser();
        assertNotNull(user);
        assertEquals(user.getBody().getMail(), props.getProperty("io.swagger.client.username"));
    }
    
    @Test
    public void testDeviceList() {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        NADeviceListResponse deviceList = api.devicelist("app_thermostat", relayId, false);
        NADevice relay = deviceList.getBody().getDevices().get(0);
        assertEquals(relay.getId(), relayId);
        assertTrue( relay.getModules().contains(new String(thermostatId)));
    }
    
    @Test 
    public void testGetMeasure() {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        CSVParams params = new CSVParams("Temperature","Sp_Temperature","BoilerOn","BoilerOff");
        assertEquals(api.getmeasure(relayId, "max", params, 
                thermostatId, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 4);
    }
    
    @Test
    public void testSetpoint() {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        Float setpointTemp = Float.valueOf(20);

        NAThermStateBody thermState = api.getthermstate(relayId, thermostatId).getBody();
        NASetpoint setpoint = thermState.getSetpointOrder();
        if(setpoint == null) {
            setpoint = thermState.getSetpoint();
        }
        
        //If already in manual mode, ensure that the temp will be changed
        if(setpoint.getSetpointMode() == "manual") {
            setpointTemp = setpoint.getSetpointTemp() + Float.valueOf(0.5f);
        }
        
        //Send order
        api.setthermpoint(relayId, thermostatId, "manual", (int)(System.currentTimeMillis()/1000 + 30), setpointTemp);
        
        //Verify order
        thermState = api.getthermstate(relayId, thermostatId).getBody();
        if(thermState.getSetpointOrder() != null) {
            assertEquals(thermState.getSetpointOrder().getSetpointTemp(), setpointTemp);
        } else {
            assertEquals(thermState.getSetpoint().getSetpointTemp(), setpointTemp);
        }

        //Rollback previous mode
        api.setthermpoint(relayId, thermostatId, setpoint.getSetpointMode(), setpoint.getSetpointEndtime(), setpoint.getSetpointTemp());
    }
    
    @Test
    public void testSchedule() {
        assumeNotNull(relayId);
        assumeNotNull(thermostatId);
        NAThermStateBody thermState = api.getthermstate(relayId, thermostatId).getBody();
        
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
            NANewScheduleResponse newscheduleResponse = api.createnewschedule(relayId, thermostatId, testProgram);
            assertEquals(newscheduleResponse.getStatus(), "ok");
            testProgram.setProgramId( newscheduleResponse.getBody().getScheduleId());
        }

        //Switch to test schedule
        NAOkResponse naOkResponse = api.switchschedule(relayId, thermostatId, testProgram.getProgramId());
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
        naOkResponse = api.syncschedule(relayId, thermostatId, testProgram);
        assertEquals(naOkResponse.getStatus(), "ok");
        
        //Verify the change of temperature
        thermState = api.getthermstate(relayId, thermostatId).getBody();
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
        api.syncschedule(relayId, thermostatId, testProgram);
        api.switchschedule(relayId, thermostatId, previousProgramId);
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