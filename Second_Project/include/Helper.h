#ifndef HELPER_H
#define HELPER_H

#include <Arduino.h>
#include <DHT.h>

// --- DHT sensor config ---
#define DHTPIN 4
#define DHTTYPE DHT11

extern DHT dht;

// status LED that blinks in time with playMusic() -- needs pinMode(LED_PIN, OUTPUT) in setup()
#define LED_PIN 13

// choice codes (must match main sketch)
#define CHOICE_TEMP 0
#define CHOICE_HUMIDITY 1
#define CHOICE_SONG 2

// Reads/plays depending on choice: 0 = temp, 1 = humidity, 2 = song
void message(int choice);

// Megalovania playback (buzzer)
void playMusic();
void play(double note, int octave, double note_val);
void rest(double note_val);
void vibrato(double note, int octave, double note_val);

#endif