#include "Vitrine.hpp"
#include "Arduino.h"
#include "Adafruit_NeoPixel.h"

int numPixels = 30;
int delayVal = 100;



Vitrine::Vitrine(int brocheDetecteur, int brochePixels)
    :brocheDetecteur (brocheDetecteur), pixels (numPixels ,brochePixels , NEO_GRB + NEO_KHZ800) {

        pinMode(brocheDetecteur, INPUT_PULLUP);
}

void Vitrine::allumerLumiere() {

int data1;
int data2;
int data3;

for(int i=0; i<numPixels; i++) {
    pixels.begin();
    delay(delayVal);
    data1 = random(0, 255);
    data2 = random(0, 255);
    data3 = random(0, 255);
    pixels.setPixelColor(i, pixels.Color(data1, data2, data3));
    pixels.show();
    }

delay(delayVal);
pixels.clear();

}

void Vitrine::eteindreLumiere() {

pixels.clear();
pixels.show();


}


bool Vitrine::detecterStatuette() {
    
    return !digitalRead(brocheDetecteur);


}


