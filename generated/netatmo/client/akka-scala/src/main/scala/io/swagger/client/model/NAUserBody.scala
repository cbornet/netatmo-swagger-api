package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAUserBody (
  id: Option[String],
  /* Contains administrative information related to the user */
  administrative: Option[NAUserAdministrative],
  dateCreation: Option[NADate],
  /* An array of string containing the ids of the devices owned by the user */
  devices: Option[Seq[String]],
  /* An array of string containing the ids of the devices on which the user has a \"guest\" access */
  friendDevices: Option[Seq[String]],
  mail: Option[String],
  timelineNotRead: Option[Int],
  timelineSize: Option[Int])
   extends ApiModel


