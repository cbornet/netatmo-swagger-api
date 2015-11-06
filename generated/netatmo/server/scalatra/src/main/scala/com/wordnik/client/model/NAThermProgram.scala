package com.wordnik.client.model

import com.wordnik.client.model.NATimeTableItem
import com.wordnik.client.model.NAZone


case class NAThermProgram (
  program_id: String,
  name: String,
  zones: List[NAZone],
  timetable: List[NATimeTableItem],
  selected: Boolean
)
