#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "creature.h"
#include "demon.h"
#include "human.h"
#include "cyberdemon.h"
#include "balrog.h"
#include "elf.h"
using namespace std;
using namespace cs_creature;

void battleArena(Creature& Creature1, Creature& Creature2);

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    Elf e(50,200);
    Cyberdemon b(50,200);
    
    battleArena(e, b);
}






// Battle simulation of two objects derived from class Creature.
void battleArena(Creature& Creature1, Creature& Creature2)
{
    do
    {
        Creature2.setHitpoints(Creature2.getHitpoints() - Creature1.getDamage());
        
        Creature1.setHitpoints(Creature1.getHitpoints() - Creature2.getDamage());
    } while(Creature1.getHitpoints() > 0 && Creature2.getHitpoints() > 0);
    
    if (Creature1.getHitpoints() > 0)
    {
        cout << "The " << Creature2.getSpecies() << " has lost all their health points and as a result loses to " << Creature1.getSpecies() << " who has " << Creature1.getHitpoints() << " health remaining! " << endl;
    }
    
    else if (Creature2.getHitpoints() > 0)
    {
        cout << "The " << Creature1.getSpecies() << " has lost all their health points and as a result loses to " << Creature2.getSpecies() << " who has " << Creature2.getHitpoints() << " health remaining! " << endl;
    }
    
    else
    {
        cout << "Both the " << Creature1.getSpecies() << " and the " << Creature2.getSpecies() << " have lost all their health points. The match resulted in a tie!" << endl;
    }
}

