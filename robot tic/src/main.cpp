#include"telemetreIR.hpp"
#include <SharpIR.h>

int brocheAVD {A0};
int brocheAVG {A1};
int brocheARG {A2};
int brocheARD {A3};



DetectionObstacle detection (brocheAVD, brocheAVG, brocheARG, brocheARD);
const int ledPin = 3 ;

void setup (){
  Serial.begin( 9600 );
  pinMode(ledPin,OUTPUT);
}


void loop(){
  detection.reculerPossible();
  if (detection.avancePossible() == true){
    digitalWrite(ledPin,HIGH);
  }
  else {
    digitalWrite(ledPin,LOW);
  }
}
