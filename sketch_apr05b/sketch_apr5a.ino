#include <daebakja.h>
#include <SimpleTimer.h>

#define BUTTON 7
#define LED 8
#define BUZZER 12
#define BUILTIN 13

SimpleTimer timer;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  
  timer.setInterval(1, song);
  timer.setInterval(1, button);
  timer.setInterval(500, blink);
}

void loop() {
  timer.run();
}

void blink() {
  static bool on = true;
  digitalWrite(BUILTIN, on = !on);
}

void button() {
  digitalWrite(LED, !digitalRead(BUTTON));
}

void song() {
  static int i = 0;
  static unsigned long start = 0, duration = 0;
  if (millis() < (start + duration)) return;

  duration = computeDuration(durations[i]);
  if (pitches[i] > 30) tone(BUZZER, pitches[i], duration);
  
  start = millis(); duration *= 1.3;
  if (++i == size) { i = 0; duration = 5000; }
}
