//#define C4 261.63
//#define C6 1046.50
//#define C7 2093.00

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
//  pinMode(7, OUTPUT);
}

void loop() {
  int a = analogRead(A0);
  int b = 255 - a * 2.5;
  
  analogWrite(13, b < 0 ? 0 : b);
//  tone(7, C4 + (C7 - C4) * (b / 256.0));
//  delay(200);
}
