#include <daebakja.h>

#define BUZZER 12
#define BUTTON 7
#define LED 8

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
//  song();
  digitalWrite(LED, digitalRead(BUTTON));
}

int i = 0;
unsigned long start = 0;
unsigned long duration = 0;

void song() {
  if (millis() < (start + duration)) return;

  duration = computeDuration(durations[i]);
  if (pitches[i] > 30) tone(BUZZER, pitches[i], duration);
  
  start = millis();
  duration *= 1.3;

  if (++i == size) {
    i = 0;
    duration = 5000;
  }
}

