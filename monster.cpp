#include <iostream>
#include "monster.hpp"

monster::monster(std::string name, int health, int speed, int strength): entity(name, health, speed, strength)
{
	_health = health;
};
