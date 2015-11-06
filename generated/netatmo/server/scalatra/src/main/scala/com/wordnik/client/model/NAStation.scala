package com.wordnik.client.model



case class NAStation (
  lag_down: Int,
  lag_up: Int,
  off_overshoot: Float,
  on_overshoot: Float,
  pk: Int,
  tau: Int
)
