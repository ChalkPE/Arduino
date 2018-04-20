const int TILT = 42, LAZER = 12;

void setup() {
  pinMode(TILT, INPUT);
  pinMode(LAZER, OUTPUT);
}

void loop() {
  digitalWrite(LAZER, digitalRead(TILT));
}
