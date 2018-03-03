#ifndef Led_Matrix_h
#define Led_Matrix_h

class Led_Matrix{
  private:
  int size_r;
  int size_c;
  void GND_High();
  void Row_Low();
  
  public:
  Led_Matrix(uint8_t row, uint8_t column);
  void All_On();  
  void All_Off();
  void Sweep_Ver();
  void Sweep_Hor();
  void Square_In();
  void Square_Out();
  void Line_Ver();
  void Line_Hor();
  void Line_Ver_Rev();
  void Line_Hor_Rev();
};

#endif
