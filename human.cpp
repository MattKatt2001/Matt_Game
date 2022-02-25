#include <iostream>
#include "human.hpp"

	human::human(std::string name, int health, int speed, int strength): entity(name, health, speed, strength)
	{
		_name = name;
		_health = health;
		_speed = speed;
		_strength = strength;
	};

	void human::am_Human()
	{
		std::cout<<"This is a test to prove that i am a human object and can only be used on a human object";
	}
