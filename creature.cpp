#include <iostream>
#include "creature.h"
using namespace std;

namespace cs_creature
{
    Creature::Creature()
    {
        type = 0;
        strength = 10;
        hitpoints = 10;
    }

    
    
    
    
    
    Creature::Creature(int newType, int newStrength, int newHitpoints)
    {
        type = newType;
        strength = newStrength;
        hitpoints = newHitpoints;
    }
    
    
    
    
    
    
    int Creature::getDamage() const {
        int damage;
        
        // All Creatures inflict damage which is a random number up to their strength
        damage = (rand() % strength) + 1;
        cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
        
        return damage;
    }
    

    
    
    
    
    int Creature::getStrength() const
    {
        return strength;
    }

    
    
    
    
    
    
    int Creature::getHitpoints() const
    {
        return hitpoints;
    }

    
    
    
    
    
    
    void Creature::setStrength(int newStrength)
    {
        strength = newStrength;
    }

    
    
    
    
    
    
    void Creature::setHitpoints(int newHitpoints)
    {
        hitpoints = newHitpoints;
    }
}



