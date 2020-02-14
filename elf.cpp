#include "elf.h"
using namespace std;

namespace cs_creature
{
    Elf::Elf() : Creature()
    {}

    
    
    
    
    
    Elf::Elf(int newStrength, int newHitpoints) : Creature(3, newStrength, newHitpoints)
    {}

    
    
    
    
    
    string Elf::getSpecies() const
    {
        return "Elf";
    }

    
    
    
    
    
    int Elf::getDamage() const
    {
        int damage = Creature::getDamage();
        
        
        if ((rand() % 10 ) == 0)
        {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            
            damage += damage;
        }
        
        return damage;
    }
}
