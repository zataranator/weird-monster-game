#ifndef creature_h
#define creature_h
#include <iostream>
#include <string>

namespace cs_creature
{
    class Creature
    {
        private:
            int type;
            int strength;
            int hitpoints;
        
        public:
            Creature();
            Creature(int newType, int newStrength, int newHitpoints);
        
            virtual int getDamage() const;
            virtual std::string getSpecies() const = 0;
            int getStrength() const;
            int getHitpoints() const;
            void setStrength(int newStrength);
            void setHitpoints(int newHitpoints);
    };
}
#endif
