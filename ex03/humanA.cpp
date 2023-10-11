#include <iostream>
#include "humanA.hpp"

humanA::humanA(std::string name, Weapon& weapon)
{
    this->_name = name;
    this->_weapon = weapon;
    std::cout << "humanA has been constructed" << std::endl;
}

humanA::~humanA(void)
{
    std::cout << "humanA has been destructed" << std::endl;
}

Weapon& HumanA::getWeapon(void) const
{
    return (this->_weapon);
}

std::string humanA::getName(void)
{
    return (this->_name);
}

void humanA::attack(void) const
{
    std::cout << humanA::getName() << " attacks with their weapon " << humanA::weapon.getType() << std::endl; 
}
