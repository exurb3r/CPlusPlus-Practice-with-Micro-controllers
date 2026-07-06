#include <Arduino.h>
#include "Helper.h"

#define BUTTON_TEMP 8
#define BUTTON_HUMIDITY 9
#define BUTTON_SONG 10

const int TEMP = CHOICE_TEMP;
const int HUM = CHOICE_HUMIDITY;
const int SONG = CHOICE_SONG;

unsigned long lastPress = 0;
const unsigned long debounceDelay = 250;

void setup() {
  Serial.begin(9600);
  
  pinMode(BUTTON_TEMP, INPUT_PULLUP);
  pinMode(BUTTON_HUMIDITY, INPUT_PULLUP);
  pinMode(BUTTON_SONG, INPUT_PULLUP);

  dht.begin();
}

void loop() {
  unsigned long now = millis();

  if (now - lastPress > debounceDelay) {
    if (digitalRead(BUTTON_TEMP) == LOW) {
      message(TEMP);
      lastPress = now;
    } else if (digitalRead(BUTTON_HUMIDITY) == LOW) {
      message(HUM);
      lastPress = now;
    } else if (digitalRead(BUTTON_SONG) == LOW) {
      message(SONG);
      lastPress = now;
    }
  }
}
