/*
  IBC.h - Library for teaching Innovation Bootcamp
  Created by A. Vega, November 5, 2019.
  Released into the public domain.
*/

#ifndef IBC_h
#define IBC_h

#include "Arduino.h"

#define morse_setup(_pin, _pause, _longpause) int __pin = _pin, __pause = _pause, __longpause = _longpause

void dot(void);
void dash(void);

#endif
