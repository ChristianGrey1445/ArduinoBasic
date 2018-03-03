//Matriz 8x8 NOTA:  tiene un error de compilación para Arduino UNO

#include "Led_Matrix.h"

Led_Matrix Matriz(8,8);

int Time = 500;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  Matriz.All_On();
  delay(Time);
  Matriz.All_Off();
  delay(Time);
  Matriz.Sweep_Ver();
  delay(Time);
  Matriz.Sweep_Hor();
  delay(Time);
  Matriz.Square_In();
  Matriz.Square_Out();
  Matriz.Line_Hor();
  delay(500);
  Matriz.Line_Hor_Rev();
  delay(500);
  Matriz.Line_Ver();
  delay(500);
  Matriz.Line_Ver_Rev();
  delay(500);
}
