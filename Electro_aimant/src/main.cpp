#include <Arduino.h>
#include "Electroaimant.hpp"

int elecAimantPin = 3;

Electroaimant electroaimant(elecAimantPin);


void setup() {

  Serial.begin(9600);

}

void loop() {

  electroaimant.activer();
  Serial.print(electroaimant.estActif());
  delay(5000);
  

  electroaimant.desactiver();
  Serial.print(electroaimant.estActif());
  delay(5000);
  
                
}