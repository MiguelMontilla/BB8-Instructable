#include <AFMotor.h>

class Motor{

  private:
    int p;
    int v;
    AF_DCMotor Motor1;
    AF_DCMotor Motor2;
    
  public:

  Motor();

  int set_direccion_sentido (int);
  void actualizaMotores();

};
