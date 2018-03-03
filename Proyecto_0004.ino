//Semaforo de leds

int LED_ROJO=2;
int LED_AMARILLO=3;
int LED_VERDE=4;

void setup() {
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE, LOW);
}

void loop() {
  digitalWrite(LED_VERDE, HIGH);
  delay(3000);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  delay(500);
   digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_ROJO, HIGH);
  delay(2000);
  digitalWrite(LED_ROJO, LOW);

}
