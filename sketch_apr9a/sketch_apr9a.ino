const int B = 11, L = 13;

unsigned long m, mm = 0;
bool l = LOW, b, bb = LOW;

void setup() {
  pinMode(L, OUTPUT);
  pinMode(B, INPUT_PULLUP);
}

void loop() {
  if ((b = digitalRead(B)) != bb
  && (bb = b, (m = millis()) - mm > 25)
  && (mm = m, b)) digitalWrite(L, l = !l);
}
