 //Teclado Keypad que imprime en el Serial lo que tecleas

#include <Keypad.h>     // importa libreria Keypad


const byte ROWS = 4;     // define numero de filas
const byte COLS = 4;    // define numero de columnas
char hexakeys[ROWS][COLS] = {    // define la distribucion de teclas
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9,8,7,6};   // pines correspondientes a las filas
byte colPins[COLS] = {5,4,3,2}; // pines correspondientes a las columnas

Keypad customKeypad = Keypad(makeKeymap(hexakeys), rowPins, colPins, ROWS, COLS);  // crea objeto

void setup()
{
 Serial.begin(9600);      // inicializa comunicacion serie
}

void loop(){
  char customKey = customKeypad.getKey();
  if(customKey){
    Serial.println(customKey);
   }
}
