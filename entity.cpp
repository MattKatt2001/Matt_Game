#include <iostream>
#include "entity.hpp"

	entity::entity(std::string name, int hp, int atk, int def, int add, int crit, int dodge)
	{
		_name = name;
		_hp = hp;
		_atk = atk;
		_def = def;
		_add = add;
		_crit = crit;
		_dodge = dodge;
	};

	bool entity::isAlive()
	{
  	return _hp > 0;
	}

	bool entity::isDead()
	{
  	return _hp <= 0;
	}

	void entity::set_name(std::string name)
	{
		_name = name;
	}

	std::string entity::get_name()
	{
		return _name;
	}

	void entity::set_hp(int hp)
	{
		_hp = hp;
	}

	int entity::get_hp()
	{
		return _hp;
	}

	void entity::set_atk(int atk)
	{
		_atk = atk;
	}

	int entity::get_atk()
	{
		return _atk;
	}

	void entity::set_def(int def)
	{
		_def = def;
	}

	int entity::get_def()
	{
		return _def;
	}

	void entity::set_add(int add)
	{
		_add = add;
	}

	int entity::get_add()
	{
		return _add;
	}

	void entity::set_crit(int crit)
	{
		_crit = crit;
	}

	int entity::get_crit()
	{
		return _crit;
	}

	void entity::set_dodge(int dodge)
	{
		_dodge = dodge;
	}

	int entity::get_dodge()
	{
		return _dodge;
	}

	void entity::takeDamage(int x)
	{
		_hp -= x;
	}
