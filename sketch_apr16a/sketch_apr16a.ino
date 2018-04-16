bool l = false, r = false;
const int L = 13, R = 2, B = 3;

void setup() {
  pinMode(L, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(B, INPUT_PULLUP);
  attachInterrupt(1, isr, LOW);
}

void loop() {
  delay(1000);
  digitalWrite(L, l = !l);
}

// delay() computes its count based on *timer interrupt*.
// However, all other interrupts are blocked while ISR is running.

// So any functions which require interrupts to be work,
// like delay() and millis(), won't behave properly if called inside ISR.

// If you really need delaying in ISR, is strongly not recommended,
// consider using delayMicroseconds() which doesn't rely on interrupts instead.

void isr() {
  digitalWrite(R, r = !r);
  for (int i = 0; i < 500; i++) delayMicroseconds(1000); // 500 * 1000μs = 0.5s
}

