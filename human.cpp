#include "human.h"
using namespace std;

namespace cs_creature
{
    Human::Human() : Creature()
    {}

    
    
    
    
    
    Human::Human(int newStrength, int newHitpoints) : Creature(0, newStrength, newHitpoints)
    {}

    
    
    
    
    
    string Human::getSpecies() const
    {
        return "Human";
    }

    
    
    
    
    
    int Human::getDamage() const
    {
        int damage = Creature::getDamage();
        return damage;
    }
}


