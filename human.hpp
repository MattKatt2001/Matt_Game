#ifndef HUMAN_H
#define HUMAN_H

class human : public entity
{
private:

protected:

public:
	human(std::string name, int hp, int atk, int def, int add, int crit, int dodge);
	void am_Human();
};

#endif
