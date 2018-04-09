#include <pitches.h>

bool wow = true;
unsigned long next = millis() + 1000;

void setup() {  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, INPUT_PULLUP);
}

void loop() {  
  digitalWrite(13, !digitalRead(11));

  if (next < millis()) {
    int diff = 1000 - millis() / 20;
    next = millis() + (diff > 0 ? diff : 0);

    tone(9, NOTE_C6, 50);
    digitalWrite(8, wow = !wow);
  }
}
