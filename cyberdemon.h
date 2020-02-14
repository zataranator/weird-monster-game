#ifndef cyberdemon_h
#define cyberdemon_h
#include "demon.h"

namespace cs_creature
{
    class Cyberdemon : public Demon
    {
        public:
            Cyberdemon();
            Cyberdemon(int newStrength, int newHitpoints);
        
            std::string getSpecies() const;
            int getDamage() const;
    };
}

#endif
