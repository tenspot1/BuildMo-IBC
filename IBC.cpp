/*
  IBC.cpp - Library for teaching Innovation Bootcamp.
  Created by A. Vega, November 5, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "IBC.h"

void dot()
{
  digitalWrite(__pin, HIGH);
  delay(__pause);
  digitalWrite(__pin, LOW);
  delay(__pause);  
}

void dash()
{
  digitalWrite(__pin, HIGH);
  delay(__longpause);
  digitalWrite(__pin, LOW);
  delay(__pause);
}
