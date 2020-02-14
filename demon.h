#ifndef demon_h
#define demon_h
#include "creature.h"

namespace cs_creature
{
    class Demon : public Creature
    {
        public:
            Demon();
            Demon(int newStrength, int newHitpoints);
        
            std::string getSpecies() const;
            int getDamage() const;
    };
}

#endif
