package io.swagger.client.model

import org.joda.time.DateTime


case class NAUserBody (
  _id: String,
  administrative: NAUserAdministrative,  // Contains administrative information related to the user
  date_creation: NADate,
  devices: List[String],  // An array of string containing the ids of the devices owned by the user
  friend_devices: List[String],  // An array of string containing the ids of the devices on which the user has a \&quot;guest\&quot; access
  mail: String,
  timeline_not_read: Integer,
  timeline_size: Integer
  
)
