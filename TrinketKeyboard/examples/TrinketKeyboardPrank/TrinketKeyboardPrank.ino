/*
TrinketKeyboard prank example
For Trinket by Adafruit Industries
*/

#include <TrinketKeyboard.h>

void setup()
{
  // start USB stuff
  TrinketKeyboard.begin();
}

void loop()
{
  TrinketKeyboard.poll();
  TrinketKeyboard.typeChar((char)random(33, 122)); // type out a random character (valid ASCII)
}


