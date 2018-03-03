 //Motor servo NOTA: No funciono 
#include <Servo.h>
Servo servo;

int pinLed = 13;
int pinBoton = A0;

void setup() {
  pinMode (pinBoton, INPUT);
  pinMode (pinLed, OUTPUT);
  servo.attach(3, 650, 1750);
}

void loop() {
  if(digitalRead(pinBoton) == HIGH){
      digitalWrite(pinLed, HIGH);
      tone (12, 420, 500);
      delay(500);
      digitalWrite(pinLed, LOW);
      servo.write(0);
      delay(1500);
      servo.write(90);
      delay(4000);
      servo.write(0);
      delay(5000);
      digitalWrite(pinLed, HIGH);
      tone (12, 420, 500);
      delay(500);
      digitalWrite(pinLed, LOW);
    }
    else{
        servo.write(90);
      } 
}
