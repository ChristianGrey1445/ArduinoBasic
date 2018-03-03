// Contador Display 7 segmentos, Dos digitos NOTA:no funciono, intenta con resistencias de 1k

int retardo=10;
int var=0;

int unidad=0;
int decena=0;
int conmutador=0;
int cont=0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  delay(retardo);
  cont++;
  if(cont==100){
      cont=0;
      unidad=unidad+1;
      if(unidad >=10){
          decena=decena+1;
          unidad=0;
          if(decena >=10){
            decena=0;
            }
        }
    }

  if(conmutador == 0){
    digitalWrite(10, 1);
    digitalWrite(11, 0);
    var=unidad;
    conmutador=1;
    }
  else{
      digitalWrite(10, 0);
      digitalWrite(11, 1);
      var=decena;
      conmutador=0;
    }

    switch (var){
       case 1:
        digitalWrite(2, 0);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
        break;
        
       case 2:
        digitalWrite(2, 1);
        digitalWrite(3, 1);
        digitalWrite(4, 0);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 0);
        digitalWrite(8, 1);
        break;
        
       case 3:
        digitalWrite(2, 1);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 1);
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        digitalWrite(8, 1);
        break;

      case 4:
        digitalWrite(2, 0);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
        break;

      case 5:
        digitalWrite(2, 1);
        digitalWrite(3, 0);
        digitalWrite(4, 1);
        digitalWrite(5, 1);
        digitalWrite(6, 0);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
        break;

       case 6:
        digitalWrite(2, 1);
        digitalWrite(3, 0);
        digitalWrite(4, 1);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
        break;
        
       case 7:
        digitalWrite(2, 1);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
        break; 

      case 8:
        digitalWrite(2, 1);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
        break;

       case 9:
        digitalWrite(2, 1);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
        break;
       case 0:
        digitalWrite(2, 1);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 0);
        break;

       default:
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
        break; 
      }  
}
