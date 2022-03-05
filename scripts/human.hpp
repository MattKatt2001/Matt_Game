#ifndef HUMAN_H
#define HUMAN_H

class human : public entity
{
private:

protected:

public:
	human(std::string name, float hp, float atk, float def, int add, int crit, int dodge, int id);
	void am_Human();
};

#endif
