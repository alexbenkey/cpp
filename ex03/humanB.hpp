#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "weapon.hpp"

class humanB
{
    public:
        humanB(std::string name);
        ~humanB(void);

        void attack(void) const;
        void setWeapon(Weapon &weapon);
        Weapon& getWeapon(void);
        std::string getName(void);

    private:
        std::string     _name;
        Weapon          *_weapon;
};

#endif