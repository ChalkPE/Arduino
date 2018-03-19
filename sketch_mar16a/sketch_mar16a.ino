#define MIN 10
#define MAX 14

void setup() {
  randomSeed(analogRead(0));

  pinMode(2, OUTPUT);
  for(int i = MIN; i < MAX; i++) pinMode(i, OUTPUT);
}

void dim (int i) {
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

void blink (int i) {
  for(int n = 0; n < 5; n++) {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
    delay(50);
  }
}

void loop() {
  dim(random(MIN, MAX));
  blink(2);
//  digitalWrite(2, LOW);
//  delay(500);
//  digitalWrite(2, HIGH);
//  delay(50);
}
