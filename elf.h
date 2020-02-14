#ifndef elf_h
#define elf_h
#include "creature.h"

namespace cs_creature
{
    class Elf : public Creature
    {
        public:
            Elf();
            Elf(int newStrength, int newHitpoints);
        
            std::string getSpecies() const;
            int getDamage() const;
    };
}

#endif
