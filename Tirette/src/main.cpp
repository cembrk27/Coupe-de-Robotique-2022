#include "Tirette.hpp"
#include "Arduino.h"


Tirette tirette(7);
Tirette tirette2(8, 7);

void setup(){     //objet de la classe après les paramètres
Serial.begin(9600);
}


void loop(){

   if (tirette2.estPresente() == true){
       Serial.print(7);
   }

   else{
       Serial.print(15);
   }

    delay(1000);
}