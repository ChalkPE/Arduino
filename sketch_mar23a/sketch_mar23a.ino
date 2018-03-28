void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  int v = analogRead(A0);
  analogWrite(13, v / 4);
}
