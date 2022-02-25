#include <iostream>
#include "entity.hpp"

	entity::entity(std::string name, int health, int speed, int strength)
	{
		_name = name;
		_health = health;
		_speed = speed;
		_strength = strength;
	};

	bool entity::isAlive()
	{
  	return _health > 0;
	}

	void entity::set_name(std::string name)
	{
		_name = name;
	}

	std::string entity::get_name()
	{
		return _name;
	}

	void entity::set_health(int health)
	{
		_health = health;
	}

	int entity::get_health()
	{
		return _health;
	}

	void entity::set_speed(int speed)
	{
		_speed = speed;
	}

	int entity::get_speed()
	{
		return _speed;
	}

	void entity::set_strength(int strength)
	{
		_strength = strength;
	}

	int entity::get_strength()
	{
		return _strength;
	}

	void entity::takeDamage(int x)
	{
		_health -= x;
	}
