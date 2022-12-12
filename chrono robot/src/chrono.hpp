#ifndef CHRONO_HPP
#define CHRONO_HPP
#include <MsTimer2.h>

class Chrono
{
private:

    int tempsRestant();

public:

    int demarrer();
    int getTempsRestant();
    bool veriFiniMatch();

};


#endif