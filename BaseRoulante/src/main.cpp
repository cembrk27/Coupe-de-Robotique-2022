#include <Arduino.h>
#include <AccelStepper.h>
#include "BaseRoulante.hpp"

BaseRoulante baseRoulante;


void setup(){



/*
baseRoulante.avancer(1000);
baseRoulante.tournerDroite();
baseRoulante.avancer(300);
baseRoulante.tournerDroite();
baseRoulante.avancer(1000);
baseRoulante.tournerDroite();
baseRoulante.avancer(300);
baseRoulante.tournerDroite();
*/
}

void loop(){
/*baseRoulante.tournerDroite();
delay(3000);*/
baseRoulante.avancer(500);
baseRoulante.reculer(500);


}

//1.24 mm pour 1 pas de moteur 


