#include <iostream>
#include "entity.cpp"
#include "human.cpp"
#include "monster.cpp"

int main()
{
	human Matt("Matthew", 100, 10, 100, 25, 25, 5);

	monster Godzilla("Godzilla", 100, 10, 100, 25, 25, 5);

	while(Matt.isAlive() && Godzilla.isAlive())
	{
		Godzilla.takeDamage(mAtk);
		std::cout<<Matt.get_name() << " attacks leaving " << Godzilla.get_name() << " with " << Godzilla.get_hp() << " health." << "\n";
		std::cout<<"\n";

		if(Godzilla.isAlive() && Matt.isAlive())
		{
			Matt.takeDamage(gAtk);
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
