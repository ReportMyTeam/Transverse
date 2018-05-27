#include "Heros.h"

using namespace std;

/*void Heros::potion()
{
    vie += 50;

    if (vie > 100) //Interdiction de dépasser 100 de vie
    {
        vie = 100;
    }
}*/

void Heros::Reposer()
{
    endurance+= 100;

    if (endurance > 100)
    {
        endurance = 100;
    }
}

