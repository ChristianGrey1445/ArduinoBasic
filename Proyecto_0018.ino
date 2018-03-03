 //Brazo robotico controlado por dos botones 
#include <Servo.h>

Servo servo;
int switchState1 = 0;
int switchState2 = 0;

void setup() {
  servo.attach(6, 650, 1750);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  
}

void loop() {
  switchState1 = digitalRead(2);
  switchState2 = digitalRead(3);
  if(switchState1 == LOW){
     servo.write(180);
     digitalWrite(5, LOW);
     digitalWrite(4, HIGH);
    }
  if(switchState2 == LOW){
     servo.write(0);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
    }
    if(switchState1 == HIGH && switchState2 == HIGH){
       servo.write(90);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
    }
}
