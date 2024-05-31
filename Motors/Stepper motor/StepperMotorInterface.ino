#include<Stepper.h>
const int spr=4;
Stepper steper (spr, 8,9,10,11);

void setup() {
  
 // put your setup code here, to run once:
 steper.setSpeed (10);
 Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  steper.step (40);
  delay (600);
  steper.step (-40);
  delay (600);

}
