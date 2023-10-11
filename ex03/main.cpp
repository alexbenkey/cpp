#include <iostream>
#include <iomanip>

#include "weapon.hpp"
#include "humanA.hpp"
#include "humanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        humanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        humanB jim("jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}