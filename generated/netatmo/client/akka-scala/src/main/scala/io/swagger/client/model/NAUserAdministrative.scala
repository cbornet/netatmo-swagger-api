package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class NAUserAdministrative (
  /* user country */
  country: Option[String],
  /* user locale */
  lang: Option[String],
  /* user regional preferences (used for displaying date) */
  regLocale: Option[String],
  /* 0 -> metric system, 1 -> imperial system */
  unit: Option[String],
  /* 0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot */
  windunit: Option[String],
  /* 0 -> mbar, 1 -> inHg, 2 -> mmHg */
  pressureunit: Option[String],
  /* algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index */
  feelLikeAlgo: Option[String])
   extends ApiModel


