package io.swagger.netatmo.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assume.assumeNotNull;

import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

import org.junit.Before;
import org.junit.Test;

import io.swagger.client.ApiClient;
import io.swagger.client.CollectionFormats.CSVParams;
import io.swagger.client.api.StationApi;
import io.swagger.client.model.NADevice;
import io.swagger.client.model.NADeviceListResponse;
import io.swagger.client.model.NAUserResponse;

public class StationApiTest {
    
    private StationApi api;
    
    private Properties props;
    
    private String stationId;

    private String rainId;

    private String windId;

    @Before
    public void setup() throws IOException {
        props = new Properties();
        InputStream is = ClassLoader.getSystemResourceAsStream("unittest.properties");
        props.load(is);
        
        stationId = props.getProperty("io.swagger.client.station");
        rainId = props.getProperty("io.swagger.client.rain");
        windId = props.getProperty("io.swagger.client.wind");
        
        ApiClient apiClient = new ApiClient("password_oauth",
                props.getProperty("io.swagger.client.client_id"),
                props.getProperty("io.swagger.client.client_secret"),
                props.getProperty("io.swagger.client.username"),
                props.getProperty("io.swagger.client.password"));
        apiClient.getTokenEndPoint().setScope("read_station");
        //apiClient.getAdapterBuilder().setLogLevel(LogLevel.FULL);
        
        api = apiClient.createService(StationApi.class);
    }

    @Test
    public void testGetUser() throws Exception {
        NAUserResponse user = api.getuser();
        assertNotNull(user);
        assertEquals(user.getBody().getMail(), props.getProperty("io.swagger.client.username"));
    }
    
    @Test
    public void testDeviceList() {
        assumeNotNull(stationId);
        NADeviceListResponse deviceList = api.devicelist("app_station", stationId, false);
        NADevice station = deviceList.getBody().getDevices().get(0);
        assertEquals(station.getId(), stationId);
    }
    
    @Test 
    public void testGetMeasureStation() {
        assumeNotNull(stationId);
        assertEquals(api.getmeasure(stationId, "max", 
                new CSVParams("Temperature","CO2","Humidity","Pressure","Noise"), 
                null, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 5);
    }
    
    @Test 
    public void testGetMeasureRainSensor() {
        assumeNotNull(stationId);
        assumeNotNull(rainId);
        assertEquals(api.getmeasure(stationId, "max",
                new CSVParams("Rain"),
                null, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 1);
    }
    
    @Test 
    public void testGetMeasureWindGauge() {
        assumeNotNull(stationId);
        assumeNotNull(windId);
        assertEquals(api.getmeasure(stationId, "max", 
                new CSVParams("WindStrength","WindAngle","GustStrength","GustAngle"), 
                null, null, null, 
                null, null, null)
            .getBody().get(0).getValue().get(0).size(), 4);
    }
}