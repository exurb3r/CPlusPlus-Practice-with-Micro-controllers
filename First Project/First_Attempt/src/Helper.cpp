#include <Arduino.h>
#include "Helper.h"

void ledMode(int mode, int ledPin) {

    switch (mode) {

        case 0:
            digitalWrite(ledPin, LOW);
            break;

        case 1:
            digitalWrite(ledPin, HIGH);
            break;

        case 2:
            digitalWrite(ledPin, HIGH);
            delay(500);
            digitalWrite(ledPin, LOW);
            delay(500);
            break;

        case 3:
            digitalWrite(ledPin, HIGH);
            delay(100);
            digitalWrite(ledPin, LOW);
            delay(100);
            break;
    }
}

void printStatus(int mode){
    switch (mode) {

        case 0:
            Serial.println("Led OFF");
            break;

        case 1:
            Serial.println("Led ON: Stable");
            break;

        case 2:
            Serial.println("Led ON: Slow Blinking");
            break;

        case 3:
            Serial.println("Led ON: Fast Blinking");
            break;
    }
}