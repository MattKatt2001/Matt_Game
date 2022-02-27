#ifndef ENTITY_H
#define ENTITY_H

class entity
{
private:

protected:
	std::string _name;
	int _hp;
	int _atk;
	int _def;
	int _add;
	int _crit;
	int _dodge;

public:
	entity(std::string name, int hp, int atk, int def, int add, int crit, int dodge);

	bool isAlive();
	bool isDead();

	void set_name(std::string name);
	std::string get_name();

	void set_hp(int hp);
	int get_hp();

	void set_atk(int atk);
	int get_atk();

	void set_def(int def);
	int get_def();

	void set_add(int add);
	int get_add();

	void set_crit(int crit);
	int get_crit();

	void set_dodge(int dodge);
	int get_dodge();

	void takeDamage(int x);
};

#endif
