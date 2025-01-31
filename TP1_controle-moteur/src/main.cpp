


#include <Arduino.h>



void setup() {

  pinMode(12, OUTPUT);    //configure la pin de pwm en sortie
  analogWrite(12,255);    //pwm max
  delay(5);
  analogWrite(12,40);     //pwm 16% (1 tour/SEC)
}

void loop() {
  
  delay(5000);        //attente pour 5 tours
  analogWrite(12,0); //pwm 0%
}

