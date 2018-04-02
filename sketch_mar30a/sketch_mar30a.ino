#include <pitches.h>
#define BUZZER 12

int pitches[] = {
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  NOTE_C6, NOTE_D6, NOTE_C6, 0,
  
  NOTE_E6, NOTE_F6, NOTE_E6, 0,
  NOTE_E6, NOTE_F6, NOTE_E6, 0,
  NOTE_E6, NOTE_F6, NOTE_E6, 0,
  NOTE_E6, NOTE_F6, NOTE_E6, 0,
  
  NOTE_E6, NOTE_F6, NOTE_G6, 0,
  NOTE_E6, NOTE_F6, NOTE_G6, 0,

  NOTE_C6, NOTE_D6, NOTE_C6,
  NOTE_G6, 0, NOTE_E6, 0,
  NOTE_D6, NOTE_C6, NOTE_D6, NOTE_C6
};

int durations[] = {
  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,

  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,
  8, 6, 8, 6,

  8, 6, 8, 6,
  8, 6, 8, 6,

  8, 6, 8,
  4, 16, 4, 16,
  6, 8, 6, 8
};

int size = sizeof(pitches) / sizeof(pitches[0]);

int TEMPO = 180;
int computeDuration(int s) {
  return 60.0 / TEMPO * (4000.0 / s);
}

void loop() {  
  for (int i = 0; i < size; i++) {
    int p = pitches[i];
    int d = durations[i];

    if (p > 30) tone(BUZZER, p);
    delay(computeDuration(d) * 1.2);
    noTone(BUZZER);
  }

  delay(2000);
}

void setup() {
  pinMode(BUZZER, OUTPUT);

}

