#include <Bounce2.h>
#include <SimpleTimer.h>

const int B = 11, L = 13, R = 12;

SimpleTimer timer;
Bounce bounce = Bounce();
bool r = false, l = false;

void setup() {
  pinMode(L, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(B, INPUT_PULLUP);
  
  bounce.attach(B);
  bounce.interval(50);
  
  timer.setInterval(1, tick);
  timer.setInterval(1000, toggle);
}

void loop() {
  timer.run();
}

void tick() {
  bounce.update();
  if (bounce.rose()) digitalWrite(R, r = !r);
}

void toggle() {
  digitalWrite(L, l = !l);
}
