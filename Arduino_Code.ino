// C++ code
int Button = 0;
void setup(){
  pinMode(12, OUTPUT);
  pinMode(13, INPUT);
}

void loop(){
  Button = digitalRead(13);
  if(Button == HIGH){
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW); 
  }
  delay(10);
}
