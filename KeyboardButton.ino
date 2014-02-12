#include <TrinketKeyboard.h>

/* 
 Keyboard Button test
 
 For the Arduino Leonardo and Micro.
 
 Sends a text string when a button is pressed.
 
 The circuit:
 * pushbutton attached from pin 2 to +5V
 * 10-kilohm resistor attached from pin 4 to ground
 
 created 24 Oct 2011
 modified 27 Mar 2012
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/KeyboardButton
 */
 
const int buttonPin = 0;          // input pin for pushbutton
const int ledPin = 2;
//int previousButtonState = HIGH;   // for checking the state of a pushButton
//int counter = 0;                  // button push counter

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  // initialize control over the keyboard:
  digitalWrite(buttonPin, HIGH);
  TrinketKeyboard.begin();

}

void loop() {
    TrinketKeyboard.poll();

  // read the pushbutton:
  if (! digitalRead(buttonPin)) {  // if the button is pressed
    digitalWrite(ledPin, HIGH);    // light up the LED
    TrinketKeyboard.print("A");
  } else {
    digitalWrite(ledPin, LOW);     // otherwise, turn it off
  }
}

