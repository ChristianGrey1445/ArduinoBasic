 //Motor servo 
#include <Servo.h>
Servo servo;


void setup() {
  servo.attach(3, 650, 1750);
}

void loop() {
  servo.write(90);
  digitalWrite(13, HIGH);
  delay(2000);
  servo.write(45);
  digitalWrite(13, LOW);
  delay(2000);
}
