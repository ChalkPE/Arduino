#include "pitches.h"
#define BUZZER 12

void setup() {
  pinMode(BUZZER, OUTPUT);

  for(int i = 0; i < 8; i++) dae(NOTE_C6, NOTE_D6, NOTE_C6, 300);
  for(int i = 0; i < 4; i++) dae(NOTE_E6, NOTE_F6, NOTE_E6, 300);
  for(int i = 0; i < 2; i++) dae(NOTE_E6, NOTE_F6, NOTE_G6, 300);

  dae(NOTE_C6, NOTE_D6, NOTE_C6, 0); bakja();
}

void dae(int a, int b, int c, int d) {
  tone(BUZZER, a, 200);
  delay(200);
  
  tone(BUZZER, b, 300);
  delay(300);
  
  tone(BUZZER, c, 200);
  delay(200 + d);
}

void bakja() {
  tone(BUZZER, NOTE_G6, 400);
  delay(500);
  
  tone(BUZZER, NOTE_E6, 400);
  delay(500);
  
  tone(BUZZER, NOTE_D6, 300);
  delay(300);
  
  tone(BUZZER, NOTE_C6, 100);
  delay(200);
  
  tone(BUZZER, NOTE_D6, 300);
  delay(300);
  
  tone(BUZZER, NOTE_C6, 200);
  delay(200);
}

void loop() { }


