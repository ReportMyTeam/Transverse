#ifndef HEROS_H_INCLUDED
#define HEROS_H_INCLUDED
#include "Entite.h"

class Heros : public Entite
{
public :
    void potion();
    void Reposer();
private :
    int endurance;
};

#endif // HEROS_H_INCLUDED
