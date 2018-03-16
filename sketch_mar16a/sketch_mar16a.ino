void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  for(int i = 10; i <= 13; i++) {
    for(int p = 0; p <= 240; p += 16) {
      analogWrite(i, p);
      delay(25);
    }

    delay(200);

    for(int p = 240; p >= 0; p -= 16) {
      analogWrite(i, p);
      delay(25);
    }
  }
}
