#include <Arduino.h>
#include "Afficheur.hpp"
#include "Couleur.hpp"

Afficheur afficheur;

void setup() {
  afficheur.begin();
  afficheur.changerCouleur(Couleur::violet);
}

void loop() {

  afficheur.afficherScore(15);
  delay(3000);

  afficheur.afficherInfo("VICTOIRE");
  delay(3000);

}