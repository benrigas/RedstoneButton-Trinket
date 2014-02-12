#include <TrinketKeyboard.h>

const int buttonPin = 0;
const int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  TrinketKeyboard.begin();
}

void loop() {
  TrinketKeyboard.poll();

  if (! digitalRead(buttonPin)) {  // if the button is pressed
    digitalWrite(ledPin, HIGH);    // light up the LED
    TrinketKeyboard.print("A");
  } else {
    digitalWrite(ledPin, LOW);     // otherwise, turn it off
  }
}

