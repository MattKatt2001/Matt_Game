#include <iostream>
#include "entity.cpp"
#include "human.cpp"
#include "monster.cpp"

int main()
{
	srand(time(0));
	int mRand = rand() % 101; //make this a public variable in enttiy
	int gRand = mRand + 1;

	human Matt("Matthew", 100, 18, 17, 25, 25, 5, mRand);
	float mHealth = Matt.get_hp();
	float mAtk = Matt.get_atk();
	float mDef = Matt.get_def();
	int mAdd = Matt.get_add();
	int mCrit = Matt.get_crit();
	int mDodge = Matt.get_dodge();
	int mCount = Matt.get_id();

	monster Godzilla("Godzilla", 100, 32, 1, 1, 25, 5, gRand);
	float gHealth = Godzilla.get_hp();
	float gAtk = Godzilla.get_atk();
	float gDef = Godzilla.get_def();
	int gAdd = Godzilla.get_add();
	int gCrit = Godzilla.get_crit();
	int gDodge = Godzilla.get_dodge();
	int gCount = Godzilla.get_id();

	while(Matt.isAlive() && Godzilla.isAlive())
	{
		Godzilla.takeDamage(mAtk, mDef, mAdd, mCrit, mDodge, mCount);
		std::cout<<Matt.get_name() << " attacks leaving " << Godzilla.get_name() << " with " << Godzilla.get_hp() << " health." << "\n";
		std::cout<<"\n";

		if(Godzilla.isAlive() && Matt.isAlive())
		{
			Matt.takeDamage(gAtk, gDef, gAdd, gCrit, gDodge, gCount);
			std::cout<<Godzilla.get_name() << " attacks leaving " << Matt.get_name() << " with " << Matt.get_hp() << " health." << "\n";
		}

		if(Matt.isDead())
		{
			std::cout<<Godzilla.get_name() << " killed " << Matt.get_name();
		}

		if(Godzilla.isDead())
		{
			std::cout<<Matt.get_name() << " killed " << Godzilla.get_name();
		}
	}
}
