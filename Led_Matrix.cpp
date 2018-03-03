#include "Arduino.h"
#include "Led_Matrix.h"

Led_Matrix::Led_Matrix(uint8_t row, uint8_t column){
  size_r = row;
  size_c = column;

  for ( int i = 0; i < (size_r + size_c); i++ )
    pinMode( i, OUTPUT );
}

void Led_Matrix::GND_High(){
  for( int i = 0; i < size_c; i++)
  digitalWrite( i, HIGH );
}

void Led_Matrix::Row_Low(){
  for( int i = size_r; i < ((size_c + size_r) - 1); i++)
    digitalWrite( i, LOW );
}

void Led_Matrix::All_On(){
  for ( int i = (size_r + size_c) - 1; i >= size_r; i-- )
    digitalWrite( i, HIGH );
  for( int i = size_r - 1; i >= 0; i-- )
    digitalWrite( i, LOW );
}

void Led_Matrix::All_Off(){
  for ( int i = (size_r + size_c) - 1; i >= size_r; i-- )
    digitalWrite( i, LOW );
}

void Led_Matrix::Sweep_Ver(){
  int mTime = 0;
  All_Off();
  for ( int i = (size_r + size_c); i >= size_r; i--){
    digitalWrite( i, HIGH );
    delay(50);    
    mTime = mTime + 50;
  }
  All_On();
  delay(1000 - mTime);
  All_Off();
}

void Led_Matrix::Sweep_Hor(){
  int mTime = 0;
  All_On();
  GND_High();
  for( int i = (size_c - 1); i >= 0; i--){
    digitalWrite( i, LOW );
    delay(50);    
    mTime = mTime + 50;
  }
  All_On();
  delay(1000 - mTime);
  All_Off();
}

void Led_Matrix::Square_In(){
  int time = 1;
  int rep = 10;
  All_On();
  for (int x = 0; x < rep; x++){
    for( int i = 0; i < 8;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }

  digitalWrite(size_c, LOW);
  digitalWrite(size_c+size_r-1, LOW);
  for (int x = 0; x < rep; x++){
    for( int i = 1; i < 7;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }

  digitalWrite(size_c + 1, LOW);
  digitalWrite(size_c+size_r-2, LOW);
  for (int x = 0; x < rep; x++){
    for( int i = 2; i < 6;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }

  digitalWrite(size_c + 2, LOW);
  digitalWrite(size_c+size_r-3, LOW);
  for (int x = 0; x < rep *50; x++){
    for( int i = 3; i < 5;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }
}

void Led_Matrix::Square_Out(){
  int time = 1;
  int rep = 10;
  All_On();
  
  digitalWrite(size_c, LOW);
  digitalWrite(size_c+size_r-1, LOW);
  digitalWrite(size_c + 1, LOW);
  digitalWrite(size_c+size_r-2, LOW);
  digitalWrite(size_c + 2, LOW);
  digitalWrite(size_c+size_r-3, LOW);
  for (int x = 0; x < rep; x++){
    for( int i = 3; i < 5;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }

  digitalWrite(size_c + 2, HIGH);
  digitalWrite(size_c+size_r-3, HIGH);
  for (int x = 0; x < rep; x++){
    for( int i = 2; i < 6;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }
  
  digitalWrite(size_c + 1, HIGH);
  digitalWrite(size_c+size_r-2, HIGH);
  for (int x = 0; x < rep; x++){
    for( int i = 1; i < 7;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }

  digitalWrite(size_c, HIGH);
  digitalWrite(size_c+size_r-1, HIGH);
  for (int x = 0; x < rep; x++){
    for( int i = 0; i < 8;i++){
      GND_High();
      digitalWrite(i,LOW);
      delay(time);
    }
  }
  All_On();
  delay(500);
}

void Led_Matrix::Line_Ver(){
  int mTime = 0;
  All_On();
  GND_High();
  for( int i = (size_c - 1); i >= 0; i--){
    digitalWrite(i+1,HIGH);
    digitalWrite( i, LOW );
    delay(50);    
    mTime = mTime + 50;
  }
}

void Led_Matrix::Line_Ver_Rev(){
  int mTime = 0;
  All_On();
  GND_High();
  for( int i = 0; i <= size_c - 1; i++){
    digitalWrite(i-1,HIGH);
    digitalWrite( i, LOW );
    delay(50);    
    mTime = mTime + 50;
  }
}

void Led_Matrix::Line_Hor(){
  int mTime = 0;
  All_Off();
  for ( int i = (size_r + size_c); i >= size_r; i--){
    digitalWrite( i+1,LOW);
    digitalWrite( i, HIGH );
    delay(50);    
    mTime = mTime + 50;
  } 
}

void Led_Matrix::Line_Hor_Rev(){
  int mTime = 0;
  All_Off();
  for ( int i = size_r; i <= size_r+size_c; i++){
    digitalWrite( i-1,LOW);
    digitalWrite( i, HIGH );
    delay(50);    
    mTime = mTime + 50;
  } 
}

