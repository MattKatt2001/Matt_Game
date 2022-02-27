#include <iostream>
#include "entity.cpp"
#include "human.cpp"
#include "monster.cpp"

int main()
{
	human Matt("Matthew", 100, 10, 100, 25, 25, 5);
	int mDamage = Matt.get_atk();

	monster Godzilla("Godzilla", 100, 10, 100, 25, 25, 5);
	int gDamage = Godzilla.get_atk();

	while(Matt.isAlive() && Godzilla.isAlive())
	{
		Godzilla.takeDamage(mDamage);
		std::cout<<Matt.get_name() << " attacks leaving " << Godzilla.get_name() << " with " << Godzilla.get_hp() << " health." << "\n";
		std::cout<<"\n";

		if(Godzilla.isAlive() && Matt.isAlive())
		{
			Matt.takeDamage(gDamage);
			std::cout<<Godzilla.get_name() << " attacks leaving " << Matt.get_name() << " with " << Matt.get_hp() << " health." << "\n";
		}

		if(Matt.isDead())
		{
			std::cout<<"Godzilla won";
		}

		if(Godzilla.isDead())
		{
			std::cout<<"Matt won";
		}
	}
}
