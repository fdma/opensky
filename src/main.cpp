#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

// в идеале запихать в отдельный файл как класс
void button(bool btnState) {
  bool btnFlag = false;
  if(btnState && !btnFlag) {
    btnFlag = true;
    Serial.println("pressed");
  } 
  else {
    btnFlag = false;
    Serial.println("unpressed");
  } 
}

void loop() {
  // сделать перебор с индексом, что бы не было говнокода
  bool btnState1 = digitalRead(2);
  bool btnState2 = digitalRead(4);
  bool btnState3 = digitalRead(5);
  button(btnState1);
}