#ifndef MONSTER_H
#define MONSTER_H

class monster: public entity
{
private:

protected:

public:
	monster(std::string name, float hp, float atk, float def, int add, int crit, int dodge, int id);
	void am_Monster();
};

#endif
