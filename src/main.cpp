#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  bool btnFlag = false;
  bool btnState = !digitalRead(3);

  if(btnState && !btnFlag) {
    btnFlag = true;
    Serial.println("pressed");
  } 
  else {
    btnFlag = false;
    Serial.println("unpressed");
  }

}