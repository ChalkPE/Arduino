#include <SimpleTimer.h>

const int LED = 8;
SimpleTimer timer;

void setup() {
  pinMode(LED, OUTPUT);
  timer.setInterval(1000, wow);
}

void loop() {
  timer.run();
}

void wow() {
  static bool led = true;
  digitalWrite(LED, led = !led);
}
