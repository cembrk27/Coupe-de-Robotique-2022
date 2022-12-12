#ifndef TELEMETREIR_HPP
#define TELEMETREIR_HPP
#include <SharpIR.h>


class DetectionObstacle {

private:

    SharpIR telemetreAVG ;
    SharpIR telemetreAVD ;
    SharpIR telemetreARG ;
    SharpIR telemetreARD ;
    int distMiniPourDepl = 10;
    int mesureDistance1;
    int mesureDistance2;

public:

    bool avancePossible();
    bool reculerPossible();
    bool tournerGauchePossible();
    bool tournerDroitePossible();
    
    DetectionObstacle(int brocheAVD, int brocheAVG, int brocheARG, int brocheARD);
    
};

#endif