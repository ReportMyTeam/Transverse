#ifndef MONSTRE_H_INCLUDED
#define MONSTRE_H_INCLUDED
#include "Entite.h"


class Monstre : public Entite
{
public :
    Monstre ();
    Monstre (int VIE,int DEGATS);
    void Diviser();
};

#endif // MONSTRE_H_INCLUDED
