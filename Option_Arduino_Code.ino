// C++ code
int Button = 0;
int StorageSign = 0;
void setup() {
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
}
void loop() {
  Button = digitalRead(13);
  if (Button == HIGH) {
    if (StorageSign == HIGH) {
      StorageSign = LOW;
    } else {
      StorageSign = HIGH;
    }
  }
  if (StorageSign == HIGH) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  delay(200);
}
