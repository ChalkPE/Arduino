void setup() {
  for(int i = 0; i < 24; i++) {
    tone(12, 220.0 * pow(2, i / 12.0), 250);
    delay(250);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
