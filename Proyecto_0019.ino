//Motor Servo con dos pulsadores

#include <Servo.h>

Servo servo1;
int pulsador_der = 1;
int pulsador_izq = 1;


void setup() {
  servo1.attach(5, 600, 1500);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  pulsador_der = digitalRead(2);
  pulsador_izq = digitalRead(3);

  if(pulsador_der == LOW){
      servo1.write(160);
      delay(15);
    }
  if(pulsador_izq == LOW){
      servo1.write(0);
      delay(15);
    }
  if(pulsador_izq == HIGH && pulsador_der == HIGH){
       servo1.write(90);
      delay(15);
    }
}
    

