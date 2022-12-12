#include <Arduino.h>
#include "bouton.hpp"
#include "Couleur.hpp"

BoutonCouleur bouton(4); 
BoutonCouleur bouton2(7,4);

void setup() {
  Serial.begin(9600);
}

void loop() {

  bouton.setCouleurEquipe();
  bouton.getCouleurEquipe();
  if (bouton.getCouleurEquipe() == Couleur::jaune){

    Serial.print(7);
  }
  else{
    Serial.print(6);
  }
  delay(1000);

}