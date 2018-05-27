#include <iostream>
#include "Entite.h"
#include "Heros.h"
#include "Monstre.h"

using namespace std;


Entite::Entite() : vie(106), degats_arme(20), pdv(200)
{
}

Entite::Entite(int VIE, int DEGATS) : vie(VIE), degats_arme(DEGATS)
{
}

void Entite::recevoirDegats (int degats)
{
    vie = vie - degats;
        if (vie < 0) //Pour éviter d'avoir une vie négative
    {
        vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Entite::infligerDegats (Entite &cible)
{
    cible.recevoirDegats(degats_arme);
}

bool Entite::VerificationVivant ()
{
    if (vie>0)
        return true;

    return false;
}

void Entite::Etat_Combat()
 {
    cout << vie << endl;
 }

void Entite::DonnerVie(int potion)
{
    vie = vie + potion;
}

void Entite::RecevoirVie(Entite &cible)
{
    cible.DonnerVie(pdv);
}
