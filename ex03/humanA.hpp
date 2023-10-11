#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "weapon.hpp"

class humanA
{
    public:
        humanA(std::string name, Weapon& Weapon);
        ~humanA(void);

        void attack(void) const;
        Weapon &getWeapon(void) const;
        std::string getName(void);

    private:
        std::string _name;
        Weapon&     _weapon;

};

#endif