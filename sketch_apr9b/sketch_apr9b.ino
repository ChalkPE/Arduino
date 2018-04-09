const int B = 3, L = 13, R = 12;

bool l = 0, r = 0;
unsigned long mm = 0;

void setup() {
  pinMode(B, INPUT_PULLUP);
  pinMode(L, OUTPUT);
  pinMode(R, OUTPUT);
  attachInterrupt(1, isr, RISING);
}

void loop() {
  digitalWrite(L, l = !l);
  delay(500);
}

void isr() {
  unsigned long m = millis();
  digitalWrite(R, r = !r);
}

