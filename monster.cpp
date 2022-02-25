#include <iostream>
#include "monster.hpp"

monster::monster(std::string name, int health, int speed, int strength): entity(name, health, speed, strength)
{
	_health = health;
};

void monster::am_Monster()
{
	std::cout<<"This is a test to prove that i am a monster object and can only be used on a monster object";
}
