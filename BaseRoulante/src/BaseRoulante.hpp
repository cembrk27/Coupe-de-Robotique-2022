#ifndef BASEROULANTE_HPP
#define BASEROULANTE_HPP

#include <Arduino.h>
#include <AccelStepper.h>


class BaseRoulante {

private :
    AccelStepper stepper1;
    AccelStepper stepper2;


public:
    BaseRoulante();
    void tournerGauche ();
    void tournerDroite ();
    void avancer (int mm);
    void reculer (int mm);
    void arreter ();
    void suivreLigne ();
    void aller (int x_,int y_, int a_);


};


#endif