#include "demon.h"
using namespace std;

namespace cs_creature
{
    Demon::Demon()
    {}

    
    
    
    
    
    Demon::Demon(int newStrength, int newHitpoints)
    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    
    
    
    
    
    string Demon::getSpecies() const
    {
        return "Demon";
    }

    
    
    
    
    
    int Demon::getDamage() const
    {
        int damage = Creature::getDamage();
                
        if (rand() % 4 == 1)
        {
            damage += 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
        
        return damage;
    }
}
