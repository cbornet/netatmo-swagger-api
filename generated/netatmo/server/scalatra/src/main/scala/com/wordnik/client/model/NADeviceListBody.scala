package com.wordnik.client.model

import com.wordnik.client.model.NADevice
import com.wordnik.client.model.NAModule


case class NADeviceListBody (
  devices: List[NADevice],
  modules: List[NAModule]
)
