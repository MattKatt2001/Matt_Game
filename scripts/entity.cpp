#include <iostream>
#include "entity.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

	entity::entity(std::string name, float hp, float atk, float def, int add, int crit, int dodge, int id)
	{
		_name = name;
		_hp = hp;
		_atk = atk;
		_def = def;
		_add = add;
		_crit = crit;
		_dodge = dodge;
		_id = id;
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

	void entity::set_hp(float hp)
	{
		_hp = hp;
	}

	float entity::get_hp()
	{
		return _hp;
	}

	void entity::set_atk(float atk)
	{
		_atk = atk;
	}

	float entity::get_atk()
	{
		return _atk;
	}

	void entity::set_def(float def)
	{
		_def = def;
	}

	float entity::get_def()
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

	void entity::set_id(int id)
	{
		_id = id;
	}

	int entity::get_id()
	{
		return _id;
	}

	void entity::takeDamage(float atk, float def, int add, int crit, int dodge)
	{
		srand(time(NULL));
		for(int i=0;i<1;i++)
		{
			_id = rand() % 100 +1;
		}

		float reduction = def/2;
		float damage = atk - reduction;

		std::cout << _id <<"\n";

		if (damage <= 0)
		{
			damage = atk;
		}

		if (crit >= _id)
		{
			damage = damage*1.9;
			std::cout<<"CRIT ";
		}

		_hp -= damage;
	}
