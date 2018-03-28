#define BTN 11
#define LED 13

//int count = 0;
int lastRead = 0;

void setup() {
  Serial.begin(9600);
  pinMode(BTN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  int n = !digitalRead(BTN);
  digitalWrite(LED, n);
  
  if (n != lastRead) {
    Serial.print("\ec\e[97m");
    Serial.print(n ? "\e[102m" : "\e[101m");
    Serial.println("           ");
    Serial.println(n ? "  H I G H  " : "   L O W   ");
    Serial.println("           ");

//    if (n) Serial.println(++count);
  }
  
  lastRead = n;
}
