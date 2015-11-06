package io.swagger.netatmo.test;

import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeTrue;

import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

import org.junit.Before;
import org.junit.Test;

import io.swagger.client.ApiClient;
import io.swagger.client.api.PartnerApi;
import retrofit.RestAdapter.LogLevel;

public class PartnerApiTest {
    
    private PartnerApi api;
    
    private Properties props;

    @Before
    public void setup() throws IOException {
        props = new Properties();
        InputStream is = ClassLoader.getSystemResourceAsStream("unittest.properties");
        props.load(is);
        
        ApiClient apiClient = new ApiClient("password_oauth",
                props.getProperty("io.swagger.client.client_id"),
                props.getProperty("io.swagger.client.client_secret"),
                props.getProperty("io.swagger.client.username"),
                props.getProperty("io.swagger.client.password"));
        apiClient.getTokenEndPoint().setScope("read_station");
        apiClient.getAdapterBuilder().setLogLevel(LogLevel.FULL);
        
        api = apiClient.createService(PartnerApi.class);
    }

    /*
     * To pass the test, there must be at least one device associated to the partner account
     */
    @Test
    public void testPartnerDevices() throws Exception {
        assumeTrue(Boolean.parseBoolean(props.getProperty("io.swagger.client.isPartner")));
        assertNotNull(api.partnerdevices().getBody());
        assertTrue(api.partnerdevices().getBody().size() != 0 );
    }
}