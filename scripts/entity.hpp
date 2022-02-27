#ifndef ENTITY_H
#define ENTITY_H

class entity
{
private:

protected:
	std::string _name;
	float _hp;
	float _atk;
	float _def;
	int _add;
	int _crit;
	int _dodge;

public:
	entity(std::string name, float hp, float atk, float def, int add, int crit, int dodge);

	bool isAlive();
	bool isDead();

	void set_name(std::string name);
	std::string get_name();

	void set_hp(float hp);
	float get_hp();

	void set_atk(float atk);
	float get_atk();

	void set_def(float def);
	float get_def();

	void set_add(int add);
	int get_add();

	void set_crit(int crit);
	int get_crit();

	void set_dodge(int dodge);
	int get_dodge();

	void takeDamage(float atk, float def, int add, int crit, int dodge);
};

#endif
