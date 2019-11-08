/*
  IBC.cpp - Library for teaching Innovation Bootcamp.
  Created by A. Vega, November 5, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "IBC.h"

void dot()
{
  digitalWrite(_pin_, HIGH);
  delay(_pause_);
  digitalWrite(_pin_, LOW);
  delay(_pause_);  
}

void dash()
{
  digitalWrite(_pin_, HIGH);
  delay(_longpause_);
  digitalWrite(_pin_, LOW);
  delay(_pause_);
}
