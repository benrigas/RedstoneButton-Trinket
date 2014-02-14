
#include <TrinketKeyboard.h>

const int buttonPin = 0;
const int ledPin = 2;
unsigned long lastButtonTime;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  TrinketKeyboard.begin();
}

void loop() {
  TrinketKeyboard.poll();

  if (! digitalRead(buttonPin)) {  // if the button is pressed
    if (millis() - lastButtonTime > 5000) {
      digitalWrite(ledPin, HIGH);    // light up the LED
      TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_SHIFT|KEYCODE_MOD_LEFT_CONTROL|KEYCODE_MOD_LEFT_GUI, KEYCODE_B);
      TrinketKeyboard.pressKey(0,0);
      lastButtonTime = millis();
    }
  } else {
    digitalWrite(ledPin, LOW);     // otherwise, turn it off
  }
}

