#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(11, OUTPUT);
}

// в идеале запихать в отдельный файл как класс
bool button(bool btnState) {
  bool btnFlag = false;
  if(btnState && !btnFlag) {
    return btnFlag = true;
  } 
  else {
    return btnFlag = false;
  } 
}

void buzzer(bool buzzerState) {
  if(buzzerState == true) {
    tone(12, 2000, 50);
  }
}

void diod(bool diodState) {
  if(diodState == true) {
    digitalWrite(11, HIGH);
  }
  else {
    digitalWrite(11, LOW);
  }
}

void loop() {
  // сделать перебор с индексом, что бы не было говнокода
  bool btnState1 = digitalRead(2);
  bool btnState2 = digitalRead(3);
  bool btnState3 = digitalRead(4);
  buzzer(button(btnState1));
  diod(button(btnState2));
}