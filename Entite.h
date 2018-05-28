#ifndef ENTITE_H_INCLUDED
#define ENTITE_H_INCLUDED


class Entite
{
public:
    Entite();
    Entite(int VIE,int DEGATS);

    void recevoirDegats (int degats);
    void infligerDegats (Entite &cible);
    bool VerificationVivant ();
    void Etat_Combat();
    void DonnerVie (int potion);
    void RecevoirVie (Entite &cible);
    void UsePot(Entite &cible);

private:
    int vie;
    int degats_arme;
    int pdv;
    int pdh;
};

#endif // ENTITE_H_INCLUDED
