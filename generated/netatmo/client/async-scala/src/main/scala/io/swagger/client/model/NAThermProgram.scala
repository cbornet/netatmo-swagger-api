package io.swagger.client.model

import org.joda.time.DateTime


case class NAThermProgram (
  program_id: String,
  name: String,
  zones: List[NAZone],
  timetable: List[NATimeTableItem],
  selected: Boolean
  
)
