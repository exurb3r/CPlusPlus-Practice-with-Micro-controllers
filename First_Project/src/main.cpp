#include <Arduino.h>
#include "Helper.h"
// put function declarations here:
const int LED = LED_BUILTIN;
const int BUTTON = 2;


//Variable Declaration
int mode = 0;

boolean internalLedState = false;
boolean lastButtonstate = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  bool currentButtonState = digitalRead(BUTTON);

  if(lastButtonstate == HIGH && currentButtonState == LOW) {
    if(mode < 3) {
      mode ++;
      printStatus(mode);
    } else {
      mode = 0;
      printStatus(mode);
    }
    delay(50);
  }

  ledMode(mode, LED);
  

  lastButtonstate = currentButtonState;

}