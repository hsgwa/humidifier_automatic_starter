#define PIN 13
#define DTIME 500

void setup() {
  pinMode(PIN, OUTPUT);
  digitalWrite(PIN, HIGH);
  delay(DTIME);
  digitalWrite(PIN, LOW);
  delay(DTIME);
  digitalWrite(PIN, HIGH);
}

void loop() {
}
