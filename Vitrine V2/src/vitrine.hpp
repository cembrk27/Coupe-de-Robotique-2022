#ifndef VITRINE_HPP
#define VITRINE_HPP
#include <Adafruit_NeoPixel.h>

class Vitrine {

    public :
    Vitrine(int brocheDetecteur, int brochePixels);
    void allumerLumiere();
    void eteindreLumiere();
    bool detecterStatuette();
    

    private :

    int brocheDetecteur;
    Adafruit_NeoPixel pixels;
    

};
#endif

