#ifndef MONSTER_H
#define MONSTER_H

class monster: public entity
{
private:

protected:

public:
	monster(std::string name, int hp, int atk, int def, int add, int crit, int dodge);
	void am_Monster();
};

#endif
