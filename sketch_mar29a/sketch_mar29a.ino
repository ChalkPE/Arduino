#define BUZZER 13

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  beep(BUZZER, 440, 500);
  beep(BUZZER, 880, 500);
}

void beep(int pin, long freq, long len) {
  long delay = 1000000 / freq / 2;
  long count = freq * len / 1000;

  for (int i = 0; i < count; i++) {
    digitalWrite(pin, HIGH);
    delayMicroseconds(delay);
    digitalWrite(pin, LOW);
    delayMicroseconds(delay);
  }
}

