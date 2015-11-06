package com.wordnik.client.model

import com.wordnik.client.model.NAUserAdministrative
import com.wordnik.client.model.NADate


case class NAUserBody (
  _id: String,
  administrative: NAUserAdministrative,
  date_creation: NADate,
  devices: List[String],
  friend_devices: List[String],
  mail: String,
  timeline_not_read: Int,
  timeline_size: Int
)
