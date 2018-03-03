//Diodos LED infrarrojos NOTA: No carga el programa
int analogInPin = A5;

int sensorValue=0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  delay(200);

  if(sensorValue>500){
      digitalWrite(13, HIGH);
    } else{
        digitalWrite(13, LOW);
      }

}
