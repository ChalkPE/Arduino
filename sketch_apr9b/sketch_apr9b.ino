const int B = 3, L = 13, R = 12;

bool l = 0, r = 0;
unsigned long mm = 0;

void setup() {
  pinMode(L, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(B, INPUT_PULLUP);
  attachInterrupt(1, isr, CHANGE);
}

void loop() {
  digitalWrite(L, l = !l);
  delay(500);
}


void isr() {
  unsigned long m = micros();
  if ((m - mm) < 25000) return; mm = m;
  if (!digitalRead(B)) digitalWrite(R, r = !r);
}

