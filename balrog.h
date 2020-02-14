#ifndef balrog_h
#define balrog_h
#include "demon.h"

namespace cs_creature
{
    class Balrog : public Demon
    {
        public:
            Balrog();
            Balrog(int newStrength, int newHitpoints);
        
            std::string getSpecies() const;
            int getDamage() const;
    };
}

#endif
