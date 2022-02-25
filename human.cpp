#include <iostream>
#include "human.hpp"

	human::human(std::string name, int health, int speed, int strength): entity(name, health, speed, strength)
	{
		_name = name;
		_health = health;
		_speed = speed;
		_strength = strength;
	};
