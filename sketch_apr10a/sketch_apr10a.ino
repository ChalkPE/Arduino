#include <Bounce2.h>

const int B = 3, L = 13;
Bounce debounce = Bounce();

void setup() {
  pinMode(L, OUTPUT);
  pinMode(B, INPUT_PULLUP);

  debounce.attach(B);
  debounce.interval(20);
}

bool l = false;
void loop() {
  debounce.update();
  if (debounce.rose()) digitalWrite(L, l = !l);
}
