//HOLA MUNDO!!


void setup() {
  pinMode(13, OUTPUT); //Declaramos el pin 13 como salida

}

void loop() {
  digitalWrite(13, HIGH); //Encendemos el led
  delay(4000);            //Esperamos un segundo
  digitalWrite(13, LOW);  //Apagamos el led
  delay(4000);            //Esperamos un segundo

}
