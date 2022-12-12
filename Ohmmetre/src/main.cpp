#include "Arduino.h"
#include <Ohmmetre.hpp>

int resistancePin {A0};
unsigned int tensionEntree {5};
unsigned int resistanceFix {1000};

unsigned int resistanceInconnue {};


Ohmmetre ohmmetre(resistancePin, tensionEntree, resistanceFix, resistancePin);

void setup()
{
  Serial.begin(9600);
}

void loop() 
{ 
  Serial.println(ohmmetre.mesurerResistance());
  delay(150);
  //Nous donne un resultats entre 0 et 1023
}


























