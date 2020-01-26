//#include <AFMotor.h>
#include "Motor.h"
#include <TimerOne.h>

Motor motores;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);  //Set the baud rate to your Bluetooth module.

  Timer1.initialize(10000); //10ms
  Timer1.attachInterrupt(ISR_Blink);
}

//int v, t, i = 0;
char comando;

int p = 0;
int v = 0;
char n[6];

//Declaracion de funciones

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available() > 0){ 
    comando = Serial.read(); 

    if(comando == 'P') p = Serial.parseInt();


    motores.set_direccion_sentido(p);
    
  } 
    
}





void ISR_Blink(){
  motores.actualizaMotores();
  
}
