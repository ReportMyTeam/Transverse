#include <iostream>
#include "Entite.h"
#include "Heros.h"
#include "Monstre.h"
#include <cstdlib>

using namespace std;

    Heros heros;
    Monstre gros(50,10); //Creation de 1 gros slime
    Monstre moyen1(30,10),moyen2(30,10); //Creation de 2 slimes moyens
    Monstre petit1(10,5),petit2(10,5),petit3(10,5),petit4(10,5); //Creation de 4 petits slime
    Heros monstre ;

void Affichage_slime()
{
    if (gros.VerificationVivant()==true)
    {
        cout <<"Vie heros : " ;
        heros.Etat_Combat();
        cout <<"Vie gros slime : ";
        gros.Etat_Combat();
    }
    else if (moyen1.VerificationVivant()==true||moyen2.VerificationVivant()==true)
    {
            cout <<"Vie heros : ";
            heros.Etat_Combat();
            cout <<"Vie moyen slime 1 : ";
            moyen1.Etat_Combat();
            cout <<"Vie moyen slime 2 : ";
            moyen2.Etat_Combat();
    }

        else  //if((moyen1.VerificationVivant()==false &&moyen2.VerificationVivant()==false))
        {
            cout <<"Vie heros : ";
            heros.Etat_Combat();
            cout <<"Vie petit slime 1 : ";
            petit1.Etat_Combat();
            cout <<"Vie petit slime 2 : ";
            petit2.Etat_Combat();
            cout <<"Vie petit slime 3 : ";
            petit3.Etat_Combat();
            cout <<"Vie petit slime 4 : ";
            petit4.Etat_Combat();

        }
}


void Affichage_monstre()
{
    if (monstre.VerificationVivant()==true)
    {
        cout <<"Vie heros : " ;
        heros.Etat_Combat();
        cout <<"Vie monstre : ";
        monstre.Etat_Combat();
    }

}

int main()
{
    int action; //action à executer
    while (heros.VerificationVivant()==true && gros.VerificationVivant()==true)
    {

        Affichage_slime();
        cout << endl;
        cout <<"Choississez votre action"<< endl;
        cout <<"1. Attaquer"<< endl;
        cout <<"2. Fuir "<< endl;
        cin >> action;

        if (action==1)
            heros.infligerDegats(gros);
        if (action==2)
        {
            cout <<"lache !"<<endl;
            return 0;
        }
        gros.infligerDegats(heros);
    system("cls");
    }

cout <<"Le slime se divise !\n"<< endl ;
cout << endl;
    while (heros.VerificationVivant()==true && (moyen1.VerificationVivant()==true || moyen2.VerificationVivant()==true))
    {

        Affichage_slime();
        cout<<endl;
        cout <<"Choississez votre action"<< endl;
        cout <<"1. Attaquer le 1er slime moyen"<< endl;
        cout <<"2. Attaquer le 2eme slime moyen"<< endl;
        cout <<"3. Fuir "<< endl;
        cin >> action;

            if (action==1)
                heros.infligerDegats(moyen1);
            if (action==2)
                heros.infligerDegats(moyen2);
            if (action==3)
            {
                cout<<"lache !"<< endl;
                return 0;
            }
        if (moyen1.VerificationVivant()==true)
        moyen1.infligerDegats(heros);
        if (moyen2.VerificationVivant()==true)
        moyen2.infligerDegats(heros);
        system("cls");
    }

    cout <<"Le slime se divise !\n"<< endl ;
    cout << endl ;

    while (heros.VerificationVivant()==true &&(petit1.VerificationVivant()==true || petit2.VerificationVivant()==true || petit3.VerificationVivant()==true || petit4.VerificationVivant()==true))
    {

        Affichage_slime();
        cout<<endl;

        cout <<"Choississez votre action"<< endl;
        cout <<"1. Attaquer le 1er slime petit"<< endl;
        cout <<"2. Attaquer le 2eme slime petit"<< endl;
        cout <<"3. Attaquer le 3eme slime petit"<< endl;
        cout <<"4. Attaquer le 4eme slime petit"<< endl;
        cout <<"5. Fuir "<< endl;
        cin >> action;

            if (action==1)
                heros.infligerDegats(petit1);
            if (action==2)
                heros.infligerDegats(petit2);
            if (action==3)
                heros.infligerDegats(petit3);
            if (action==4)
                heros.infligerDegats(petit4);
            if (action==5)
            {
                cout<<"lache !"<< endl;
                return 0;
            }
        if (petit1.VerificationVivant()==true)
        petit1.infligerDegats(heros);
        if (petit2.VerificationVivant()==true)
        petit2.infligerDegats(heros);
        if (petit3.VerificationVivant()==true)
        petit3.infligerDegats(heros);
        if (petit4.VerificationVivant()==true)
        petit4.infligerDegats(heros);

        system("cls");
    }

    if(heros.VerificationVivant()==true)
    cout<<"Gagne !"<<endl;
    else
    cout<<"Perdu !"<<endl;

    heros.RecevoirVie(heros);


    cout << "1. Passer au combat suivant" << endl ;
    cout << "2. magasin" <<endl ;
    cin >> action ;
    if (action == 1)
    {
        int i(0);
    while (i!=3)
    {
        Affichage_monstre();
        cout << endl;
        cout <<"Choississez votre action"<< endl;
        cout <<"1. Attaquer"<< endl;
        cout <<"2. Fuir "<< endl;
         cin >> action;

        if (action==1)
            heros.infligerDegats(monstre);
        if (action==2)
        {
            cout <<"lache !"<<endl;
            return 0;
        }
        monstre.infligerDegats(heros);
    system("cls");
    i++;
    }

    cout <<"Attention le monstre s'enerve !" <<endl;
    monstre.RecevoirVie(monstre);

     while (heros.VerificationVivant()==true && monstre.VerificationVivant()==true)
    {

        Affichage_monstre();
        cout << endl;
        cout <<"Choississez votre action"<< endl;
        cout <<"1. Attaquer"<< endl;
        cout <<"2. Fuir "<< endl;
        cin >> action;

        if (action==1)
            heros.infligerDegats(monstre);
        if (action==2)
        {
            cout <<"lache !"<<endl;
            return 0;
        }
        monstre.infligerDegats(heros);
    system("cls");
    }
    }
    else return 0;
    if(heros.VerificationVivant()==true)
    cout<<"Gagne !"<<endl;
    else
    cout<<"Perdu !"<<endl;
}


