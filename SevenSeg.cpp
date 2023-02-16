/*
  SevenSeg.cpp - a library for driving seven-segment displays
  Created by Mark A. Rosenau, November 21, 2017.
  Released into the public domain.
*/

#include "SevenSeg.h"

SevenSeg::SevenSeg(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}