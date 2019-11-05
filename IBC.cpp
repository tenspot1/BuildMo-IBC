/*
  IBC.cpp - Library for teaching Innovation Bootcamp.
  Created by A. Vega, November 5, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "IBC.h"

Morse::Morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}
