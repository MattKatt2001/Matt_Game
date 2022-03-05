#include <iostream>
#include "human.hpp"

	human::human(std::string name, float hp, float atk, float def, int add, int crit, int dodge, int id): entity(name, hp, atk, def, add, crit, dodge, id)
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

	void human::am_Human()
	{
		std::cout<<"This is a test to prove that i am a human object and can only be used on a human object";
	}
