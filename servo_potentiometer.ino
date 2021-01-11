#include<Servo.h>
int pos = 0;
int pot = A0;
int potRead;

Servo myservo;

void setup(){
  myservo.attach(9);
}

void loop(){
  potRead = analogRead(pot);
  pos = (155./1023.)*potRead + 15;
  myservo.write(pos);
}
