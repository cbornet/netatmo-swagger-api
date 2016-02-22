package io.swagger.client;

import java.security.SecureRandom;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;

import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSession;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;

import com.squareup.okhttp.OkHttpClient;

public class TrustingOkHttpClient extends OkHttpClient {
	final TrustManager[] certs = new TrustManager[] { new X509TrustManager() {

		@Override
		public X509Certificate[] getAcceptedIssuers() {
			return null;
		}

		@Override
		public void checkServerTrusted(final X509Certificate[] chain, final String authType)
				throws CertificateException {
		}

		@Override
		public void checkClientTrusted(final X509Certificate[] chain, final String authType)
				throws CertificateException {
		}
	}};
	
	public TrustingOkHttpClient() {
		SSLContext ctx = null;
		try {
			ctx = SSLContext.getInstance("SSL");
			ctx.init(null, certs, new SecureRandom());
			final HostnameVerifier hostnameVerifier = new HostnameVerifier() {
				@Override
				public boolean verify(final String hostname, final SSLSession session) {
					return true;
				}
			};
			
			this.setHostnameVerifier(hostnameVerifier);
			this.setSslSocketFactory(ctx.getSocketFactory());
		} catch (final java.security.GeneralSecurityException ex) {
		}
		
	}
}
