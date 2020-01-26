#include <AFMotor.h>
#include <stdio.h>
#include <stdlib.h>
#include "Motor.h"
  
  Motor::Motor ()
  :Motor1(1),Motor2(2)
  {
    p = 0;
    v = 0;
  }
 

  int Motor:: set_direccion_sentido (int _p){ //p
    if ((p >= 0) && (p <= 8)){
      p = _p;
      return 0; //todo OK
    } else {
      return -1; //Fallo en los datos
    }
  }

  void Motor::actualizaMotores(){

switch(p){

  case 1: //FORWARD
    Motor1.setSpeed(255); //
    Motor1.run(BACKWARD);
    Motor2.setSpeed(255); //
    Motor2.run(BACKWARD);
  
  break;

  case 2: //RIGHT
    Motor1.setSpeed(255);
    Motor1.run(RELEASE);
    Motor2.setSpeed(255);
    Motor2.run(BACKWARD);

  break;

  case 3: //BACKWARD
    Motor1.setSpeed(255);
    Motor1.run(FORWARD);
    Motor2.setSpeed(255);
    Motor2.run(FORWARD);

  break;

  case 4: //LEFT
    Motor1.setSpeed(255);
    Motor1.run(BACKWARD);
    Motor2.setSpeed(255);
    Motor2.run(RELEASE);

  break;

  case 5: //FORWARD-RIGHT
    Motor1.setSpeed(180);
    Motor1.run(BACKWARD);
    Motor2.setSpeed(255);
    Motor2.run(BACKWARD);
  
  break;

  case 6: //BACKWARD-RIGHT
    Motor1.setSpeed(255);
    Motor1.run(FORWARD);
    Motor2.setSpeed(255);
    Motor2.run(FORWARD);

  break;

  case 7: //BACKWARD-LEFT
    Motor1.setSpeed(255);
    Motor1.run(FORWARD);
    Motor2.setSpeed(255);
    Motor2.run(FORWARD);

  break;

  case 8: //FORWARD-LEFT
    Motor1.setSpeed(255);
    Motor1.run(BACKWARD);
    Motor2.setSpeed(180);
    Motor2.run(BACKWARD);

  break;

  case 0:
    Motor1.setSpeed(255);
    Motor1.run(RELEASE);
    Motor2.setSpeed(255);
    Motor2.run(RELEASE);
  break;

  default:
    Motor1.setSpeed(255);
    Motor1.run(RELEASE);
    Motor2.setSpeed(255);
    Motor2.run(RELEASE);
  break;
}

  }
