//Secuencia de leds que prenden y apagan en serie

int timer = 100;
int matriz []={5, 7, 9, 11, 13};
int cont=5;
int pin;

void setup() {
  for( int pin = 0; pin < cont; pin++){
    pinMode (matriz [pin], OUTPUT);
    }
}

void loop() {
  for(int pin = 0; pin< cont; pin++ ){
    digitalWrite (matriz[pin], HIGH);
    delay(timer);
    digitalWrite (matriz [pin], LOW);
    }
 for(int pin = cont - 1; pin >= 0; pin--){
    digitalWrite (matriz[pin], HIGH);
    delay(timer);
    digitalWrite (matriz [pin], LOW);
    }
}
