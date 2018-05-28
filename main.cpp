#include <iostream>
#include "Entite.h"
#include "Heros.h"
#include "Monstre.h"
#include <cstdlib>

using namespace std;

Heros heros;
Monstre gros(40,10); //Creation de 1 gros slime
Monstre moyen1(40,10),moyen2(40,10); //Creation de 2 slimes moyens
Monstre petit1(40,10),petit2(40,10),petit3(40,10),petit4(40,10); //Creation de 4 petits slime
Heros monstre ;
int c=1;
int p=3;

void Affichage_slime()
{
    if (gros.VerificationVivant()==true)
    {
        cout <<"Vie heros : " ;
        heros.Etat_Combat();
        cout<<"Degats heros : 20"<<endl;
        cout<<" "<<endl;
        cout <<"Vie monstre : ";
        gros.Etat_Combat();
        cout<<"Degats monstre : 10"<<endl;
    }
    else if (moyen1.VerificationVivant()==true||moyen2.VerificationVivant()==true)
    {
        cout <<"Vie heros : ";
        heros.Etat_Combat();
        cout<<"Degats heros : 20"<<endl;
        cout<<" "<<endl;
        cout <<"Vie monstre 1 : ";
        moyen1.Etat_Combat();
        cout <<"Vie monstre 2 : ";
        moyen2.Etat_Combat();
        cout<<"Degats monstre : 10"<<endl;
    }

    else  //if((moyen1.VerificationVivant()==false &&moyen2.VerificationVivant()==false))
    {
        cout <<"Vie heros : ";
        heros.Etat_Combat();
        cout<<"Degats heros : 20"<<endl;
        cout<<" "<<endl;
        cout <<"Vie monstre 1 : ";
        petit1.Etat_Combat();
        cout <<"Vie monstre 2 : ";
        petit2.Etat_Combat();
        cout <<"Vie monstre 3 : ";
        petit3.Etat_Combat();
        cout <<"Vie monstre 4 : ";
        petit4.Etat_Combat();
        cout<<"Degats monstre : 10"<<endl;

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
        cout<<"Degats monstre : 20"<<endl;
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
        cout <<"2. Utiliser Potion +50PV"<< endl;
        cout <<"    Nombre de potion(s) : "<<p<<endl;
        cout <<"3. Competence speciale : 20 degats de zone (1 point de competence)"<< endl;
        if (c ==0) cout <<"---- Competence deja utilisee ----"<< endl;
        cout <<"4. Fuir "<< endl;
        cin >> action;

        if (action==1)
            heros.infligerDegats(gros);
        if (action==2)
        {
            if (p>0)
            {
                heros.UsePot(heros);
                p--;
            }
            else;

        }
        if (action == 3)
        {
            if (c==1)
            {
                heros.infligerDegats(gros);
                c--;
            }

            else ;
        }
        if (action==4)
        {
            cout <<"lache !"<<endl;
            return 0;
        }
        gros.infligerDegats(heros);
        system("cls");
    }

    cout <<"XP = 0+20"<<endl;
    cout <<"Une nouvelle vague arrive !\n"<< endl ;
    while (heros.VerificationVivant()==true && (moyen1.VerificationVivant()==true || moyen2.VerificationVivant()==true))
    {

        Affichage_slime();
        cout<<endl;
        cout <<"Choississez votre action"<< endl;
        cout <<"1. Attaquer le 1er montre moyen"<< endl;
        cout <<"2. Attaquer le 2eme monstre moyen"<< endl;
        cout <<"3. Utiliser Potion +50PV"<< endl;
        cout <<"    Nombre de potion(s) : "<<p<<endl;
        cout <<"4. Competence speciale : 20 degats de zone (1 point de competence)"<< endl;
        if (c ==0) cout <<"----Competence deja utilisee----"<< endl;
        cout <<"5. Fuir "<< endl;
        cin >> action;
        if (action==1)
            heros.infligerDegats(moyen1);
        if (action==2)
            heros.infligerDegats(moyen2);
        if (action == 3)
        {
            if (p>0)
            {
                heros.UsePot(heros);
                p--;
            }
            else;
        }
        if (action == 4)
        {

            if (c==1)
            {
                heros.infligerDegats(moyen1);
                heros.infligerDegats(moyen2);
                c--;
            }

            else ;
        }
        if (action==5)
        {
            system("cls");
            cout<<"lache !"<< endl;
            return 0;
        }
        if (moyen1.VerificationVivant()==true)
            moyen1.infligerDegats(heros);
        if (moyen2.VerificationVivant()==true)
            moyen2.infligerDegats(heros);
        system("cls");
    }

    cout <<"XP = 20+40"<<endl;
    cout <<"Une nouvelle vague arrive !\n"<< endl ;

    while (heros.VerificationVivant()==true &&(petit1.VerificationVivant()==true || petit2.VerificationVivant()==true || petit3.VerificationVivant()==true || petit4.VerificationVivant()==true))
    {

        Affichage_slime();
        cout<<endl;

        cout <<"Choississez votre action"<< endl;
        cout <<"1. Attaquer le 1er monstre petit"<< endl;
        cout <<"2. Attaquer le 2eme monstre petit"<< endl;
        cout <<"3. Attaquer le 3eme monstre petit"<< endl;
        cout <<"4. Attaquer le 4eme monstre petit"<< endl;
        cout <<"5. Utiliser Potion +50PV"<< endl;
        cout <<"    Nombre de potion(s) : "<<p<<endl;
        cout <<"6. Competence speciale : 20 degats de zone (1 point de competence)"<< endl;
        if (c ==0) cout <<"----Competence deja utilisee----"<< endl;
        cout <<"7. Fuir "<< endl;
        cin >> action;

        if (action==1)
            heros.infligerDegats(petit1);
        if (action==2)
            heros.infligerDegats(petit2);
        if (action==3)
            heros.infligerDegats(petit3);
        if (action==4)
            heros.infligerDegats(petit4);
        if (action == 5)
        {
            if (p>0)
            {
                heros.UsePot(heros);
                p--;
            }
            else;
        }
        if (action == 6)
        {
            if (c==1)
            {
                heros.infligerDegats(petit1);
                heros.infligerDegats(petit2);
                heros.infligerDegats(petit3);
                heros.infligerDegats(petit4);
                c--;
            }
            else ;
        }
        if (action==7)
        {
            system("cls");
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
    {
        cout<<"Continue !"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"Perdu !"<<endl;
        cout<<endl;
    }

    heros.RecevoirVie(heros);
    c=c+2;
    p=p+3;
    cout <<"XP = 60+80"<<endl;
    system("cls");
    cout <<"Vous avez depasse 100 XP : LEVEL UP! Vous gagnez :"<<endl;
    cout <<"    -une nouvelle competence"<<endl;
    cout <<"    -100PV"<<endl;
    cout <<"    -100PO"<<endl;
    cout <<"    -3 Potions"<<endl;
    cout <<"    -2 points de competences"<<endl;
    cout<<endl;
    cout<<endl;
    cout << "1. Passer au combat du boss" << endl ;
    cout << "2. Magasin" <<endl ;
    cin >> action ;



    int argent(100);
    if (action == 2)
    {
        while (argent > 0);
        {
            cout <<"3-Acheter Potion de vie - 20PO"<< endl;
            cout <<"4-Acheter Point de competence - 20PO"<<endl;
            cin>>action;
            if (action == 3)
            {
                cout <<"Vous avez achete 1 potion"<<endl;
                cout <<"    Nombre de potion(s) : "<<p<<endl;
                argent=argent-20;
                cout <<"    Il vous reste : "<<argent<<"PO"<<endl;
            }

            if (action == 4)
            {
                cout <<"Vous gagner un point de competence speciale"<<endl;
                cout <<"    Nombre de competence(s) : "<<c<<endl;
                argent=argent-40;

                cout <<"    Il vous reste : "<<argent<<"PO"<<endl;
            }
        }
    }


    if (action == 1)
    {
        system("cls");
        int i(0);
        while (i!=3)
        {
            Affichage_monstre();
            cout << endl;
            cout <<"Choississez votre action"<< endl;
            cout <<"1. Attaquer"<< endl;
            cout <<"2. Utiliser Potion +50PV"<< endl;
            cout <<"    Nombre de potion(s) : "<<p<<endl;
            cout <<"3. Competence speciale de zone : 20 degats(1 point de competence)"<< endl;
            if (c ==0) cout <<"----Competence deja utilisee----"<< endl;
            cout <<"4. Competence speciale monocible : 100 degats(2 points de competences)"<<endl;
            if (c ==0) cout <<"----Competence deja utilisee----"<< endl;
            cout <<"    Nombre de competence(s) : "<<c<<endl;


            cout <<"5. Fuir "<< endl;
            cin >> action;

            if (action==1)
                heros.infligerDegats(monstre);
            if (action == 2)
            {
                if (p>0)
                {
                    heros.UsePot(heros);
                    p--;
                }
                else;
            }
            if (action == 3)
            {

                if (c==1)
                {
                    heros.infligerDegats(monstre);
                    c--;
                }
                else ;
            }
            if (action==4)
            {
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                c=c-2;

            }
            if (action==5)
            {
                system("cls");
                cout <<"lache !"<<endl;
                return 0;
            }
            monstre.infligerDegats(heros);
            system("cls");
            i++;
        }

        cout <<"Attention le monstre s'enerve ! Il prend +100 PV !" <<endl;
        monstre.RecevoirVie(monstre);

        while (heros.VerificationVivant()==true && monstre.VerificationVivant()==true)
        {

            Affichage_monstre();
            cout << endl;
            cout <<"Choississez votre action"<< endl;
            cout <<"1. Attaquer"<< endl;
            cout <<"2. Utiliser Potion +50PV"<< endl;
            cout <<"    Nombre de potion(s) : "<<p<<endl;
            cout <<"3. Competence speciale : 20 degats de zone(1 point de competence)"<< endl;
            if (c ==0) cout <<"----Competence deja utilisee----"<< endl;
            cout <<"4. Competence speciale monocible : 100 degats(2 points de competences)"<<endl;
            if (c ==0) cout <<"----Competence deja utilisee----"<< endl;
            cout <<"    Nombre de competence(s) : "<<c<<endl;
            cout <<"5. Fuir "<< endl;
            cin >> action;

            if (action==1)
                heros.infligerDegats(monstre);
            if (action == 2)
            {
                if (p>0)
                {
                    heros.UsePot(heros);
                    p--;
                }
                else;

            }
            if (action == 3)
            {
                if (c==1)
                {
                    heros.infligerDegats(monstre);
                    c--;
                }
                else ;
            }
            if (action == 4)
            {
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                heros.infligerDegats(monstre);
                c=c-2;
            }
            if (action==5)

            {
                system("cls");
                cout <<"lache !"<<endl;
                return 0;
            }
            monstre.infligerDegats(heros);

            system("cls");
        }
    }
    //else return 0;
    if(heros.VerificationVivant()==true)
        cout<<"Continue !"<<endl;
    else
        cout<<"Perdu !"<<endl;
}




