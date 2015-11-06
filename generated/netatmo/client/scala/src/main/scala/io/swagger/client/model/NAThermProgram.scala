package io.swagger.client.model




case class NAThermProgram (
  program_id: String,
  name: String,
  zones: List[NAZone],
  timetable: List[NATimeTableItem],
  selected: Boolean)
  
