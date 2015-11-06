package io.swagger.netatmo.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assume.assumeNotNull;

import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;
import java.util.Properties;

import org.junit.Before;
import org.junit.Test;

import io.swagger.client.ApiException;
import io.swagger.client.api.OauthApi;
import io.swagger.client.api.StationApi;
import io.swagger.client.api.ThermostatApi;
import io.swagger.client.model.NADevice;
import io.swagger.client.model.NADeviceListResponse;
import io.swagger.client.model.NAUserResponse;

public class StationApiTest {
    
    private StationApi api;
    
    private Properties props;
    
    private String stationId;

    private String rainId;

    private String windId;
    
    private String accessToken;

    @Before
    public void setup() throws IOException, ApiException {
        props = new Properties();
        InputStream is = ClassLoader.getSystemResourceAsStream("unittest.properties");
        props.load(is);
        
        stationId = props.getProperty("io.swagger.client.station");
        rainId = props.getProperty("io.swagger.client.rain");
        windId = props.getProperty("io.swagger.client.wind");
        
        accessToken = new OauthApi().getToken("password", 
                props.getProperty("io.swagger.client.client_id"),
                props.getProperty("io.swagger.client.client_secret"),
                "read_thermostat write_thermostat",
                props.getProperty("io.swagger.client.username"),
                props.getProperty("io.swagger.client.password"),
                null, null, null).getAccessToken();
        
        api = new StationApi();
    }

    @Test
    public void testGetUser() throws Exception {
        NAUserResponse user = api.getuser(accessToken);
        assertNotNull(user);
        assertEquals(user.getBody().getMail(), props.getProperty("io.swagger.client.username"));
    }
    
    @Test
    public void testDeviceList() throws ApiException {
        assumeNotNull(stationId);
        NADeviceListResponse deviceList = api.devicelist(accessToken, "app_station", stationId, false);
        NADevice station = deviceList.getBody().getDevices().get(0);
        assertEquals(station.getId(), stationId);
    }
    
    @Test 
    public void testGetMeasureStation() throws ApiException {
        assumeNotNull(stationId);
        assertEquals(api.getmeasure(accessToken, stationId, "max", 
                Arrays.asList(new String[]{"Temperature","CO2","Humidity","Pressure","Noise"}), 
                null, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 5);
    }
    
    @Test 
    public void testGetMeasureRainSensor() throws ApiException {
        assumeNotNull(stationId);
        assumeNotNull(rainId);
        assertEquals(api.getmeasure(accessToken, stationId, "max", 
                Arrays.asList(new String[]{"Rain"}),
                null, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 1);
    }
    
    @Test 
    public void testGetMeasureWindGauge() throws ApiException {
        assumeNotNull(stationId);
        assumeNotNull(windId);
        assertEquals(api.getmeasure(accessToken, stationId, "max",
                Arrays.asList(new String[]{"WindStrength","WindAngle","GustStrength","GustAngle"}), 
                null, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 4);
    }
}