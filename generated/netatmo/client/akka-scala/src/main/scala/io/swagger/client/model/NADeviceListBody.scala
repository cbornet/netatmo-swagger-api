package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NADeviceListBody (
  devices: Option[Seq[NADevice]],
  modules: Option[Seq[NAModule]])
   extends ApiModel


