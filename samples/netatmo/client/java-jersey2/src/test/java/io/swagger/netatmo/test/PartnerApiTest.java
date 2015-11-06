package io.swagger.netatmo.test;

import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeTrue;

import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

import org.junit.Before;
import org.junit.Test;

import io.swagger.client.ApiException;
import io.swagger.client.api.OauthApi;
import io.swagger.client.api.PartnerApi;

public class PartnerApiTest {
    
    private PartnerApi api;
    
    private Properties props;
    
    private String accessToken;

    @Before
    public void setup() throws IOException, ApiException {
        props = new Properties();
        InputStream is = ClassLoader.getSystemResourceAsStream("unittest.properties");
        props.load(is);
        
        accessToken = new OauthApi().getToken("password", 
                props.getProperty("io.swagger.client.client_id"),
                props.getProperty("io.swagger.client.client_secret"),
                "read_thermostat write_thermostat",
                props.getProperty("io.swagger.client.username"),
                props.getProperty("io.swagger.client.password"),
                null, null, null).getAccessToken();
        
        api = new PartnerApi();
    }

    /*
     * To pass the test, there must be at least one device associated to the partner account
     */
    @Test
    public void testPartnerDevices() throws Exception {
        assumeTrue(Boolean.parseBoolean(props.getProperty("io.swagger.client.isPartner")));
        assertNotNull(api.partnerdevices(accessToken).getBody());
        assertTrue(api.partnerdevices(accessToken).getBody().size() != 0 );
    }
}