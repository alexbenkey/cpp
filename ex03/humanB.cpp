#include <iostream>
#include "humanB.hpp"

humanB::humanB(std::string name)
{
    this->name = name;
    std::cout << "humanB has been constructed" << std::endl;
}

humanB::~humanB(void)
{
    std::cout << "humanB has been destructed" << std::endl;
}

std::string humanB::getName(void)
{
    return(this->_name);
}

Weapon& humanA::getWeapon(void) const
{
    return(this->_weapon);
}

void humanA::setWeapon(Weapon &weapon) const
{
    this->_weapon = &weapon
}

void humanB::attack(void) const
{
    std::cout << humanB::getName() << " attacks with their weapon " << humanB::weapon.getType() << std::endl; 
}
