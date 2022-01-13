#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  bool btnFlag = false;
  // сделать перебор с индексом, что бы не было говнокода
  bool btnState1 = !digitalRead(3);
  bool btnState2 = !digitalRead(4);
  bool btnState3 = !digitalRead(5);
  button(btnFlag, btnState1);
}

// в идеале запихать в отдельный файл как класс
void button(bool btnState, bool btnFlag) {
  if(btnState && !btnFlag) {
    btnFlag = true;
    Serial.println("pressed");
  } 
  else {
    btnFlag = false;
    Serial.println("unpressed");
  } 
}