package io.swagger.client

import io.swagger.client.api._

import io.swagger.client._

import java.io.Closeable

class SwaggerClient(config: SwaggerConfig) extends Closeable {
  val locator = config.locator
  val name = config.name

  private[this] val client = transportClient

  protected def transportClient: TransportClient = new RestClient(config)
  
  val station = new StationApi(client, config)
  
  val oauth = new OauthApi(client, config)
  
  val thermostat = new ThermostatApi(client, config)
  
  val welcome = new WelcomeApi(client, config)
  
  val public = new PublicApi(client, config)
  
  val partner = new PartnerApi(client, config)
  

  def close() {
    client.close()
  }
}