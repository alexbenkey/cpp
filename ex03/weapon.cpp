#include <iostream>
#include "weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon is consructed" << std::endl;
}    

Weapon::~Weapon(void)
{
    std::cout << "Weapon is destructed" << std::endl;
}

const std::string&   Weapon::getType(void) const
{
    return(this->type);
}

void    Weapon::setType(const std::string& type)
{
    this->type = type;
}