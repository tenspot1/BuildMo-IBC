/*
  IBC.h - Library for teaching Innovation Bootcamp
  Created by A. Vega, November 5, 2019.
  Released into the public domain.
*/

#ifndef IBC_h
#define IBC_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif
