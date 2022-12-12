#include <Arduino.h>
#include "vitrine.hpp"


int brocheDetecteurPin = 4;
int brochePixels = 3;

Vitrine vitrine(brocheDetecteurPin , brochePixels);

void setup() {
  vitrine.eteindreLumiere();

}

void loop() {


  if (vitrine.detecterStatuette() == true) {
    vitrine.allumerLumiere();
  }
  else{
    vitrine.eteindreLumiere();

  }


}
