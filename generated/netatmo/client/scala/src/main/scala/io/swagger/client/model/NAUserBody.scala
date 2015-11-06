package io.swagger.client.model




case class NAUserBody (
  _id: String,
  /* Contains administrative information related to the user */
  administrative: NAUserAdministrative,
  date_creation: NADate,
  /* An array of string containing the ids of the devices owned by the user */
  devices: List[String],
  /* An array of string containing the ids of the devices on which the user has a \"guest\" access */
  friend_devices: List[String],
  mail: String,
  timeline_not_read: Integer,
  timeline_size: Integer)
  
