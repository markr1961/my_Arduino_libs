/*
  SevenSeg.h - a library for driving seven-segment displays
  Created by Mark A. Rosenau, November 21, 2017.
  Released into the public domain.
*/

#ifndef SevenSeg_h
#define SevenSeg_h

#include "Arduino.h"

class SevenSeg
{
  public:
    SevenSeg(int pin);
    void mux();
    void SetDigit();
  private:
    int _pin;
};
#endif