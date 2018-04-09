#include <pitches.h>

#define BUZZER 12
#define sO NOTE_G5
#define lA NOTE_A6
#define Do NOTE_C6
#define Re NOTE_D6
#define Mi NOTE_E6
#define Fa NOTE_F6
#define So NOTE_F6
#define __ 0

#define GMCI Re,4, Do,8, Re,4, Do,8
#define AGTGEBAMG sO,8, Mi,4, Mi,8, Mi,4, Fa,8, Mi,4, Re,8, Re,4, Do,8
#define NNGC Do,4, Re,8, Mi,4, __,8, Mi,4,

int melody[] = {
  // 있잖아 나는 개멍청이야
  Do,4, Re,8, Mi,4,       __,2,
  Re,4, Do,8, GMCI, Do,4, __,8,
  
  // 낮에 갔던 길을 밤에 못 가 개멍청이야
  sO,4, AGTGEBAMG, GMCI, Mi,4, __,8,

  // 우리집 강아지도 나보다는 길을 잘 찾아
  sO,4, AGTGEBAMG, GMCI, Do,4, __,8,

  // 나는 우리 집도 못 찾아가 개멍청이야
  sO,4, AGTGEBAMG, GMCI, Do,4, __,8,

  // 나는 길치 에다가 몸치
  NNGC, __,4, NNGC, __,2,

  // 거기에 음치까지 모아놓은 몸뚱어리야
  Do,4, AGTGEBAMG, GMCI, Mi,4, __,8,
  
  // 특히 대가리는 의미없어 장식품이야
  sO,4, AGTGEBAMG, GMCI, Do,4, __,8,

  // 이제 내 차례는 끝났으니 사요나라야
  sO,4, AGTGEBAMG, GMCI, Do,4, __,8,

  sO,8, lA,6, sO,8, So,4, 0,16, Mi,4, 0,16,
  Re,6, Do,8, Re,6, Mi,8
};

int tempo = 180;
int computeDuration(int s) { return 60.0 / tempo * (4000.0 / s); }

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int size = sizeof(melody) / sizeof(melody[0]);
  for (int i = 0; i < size; i += 2) {
    tone(BUZZER, melody[i]);
    delay(computeDuration(melody[i + 1]) * 1.2);
    noTone(BUZZER);
  }
  delay(2000);
}

