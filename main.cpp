#include <iostream>
#include "entity.cpp"
#include "human.cpp"
#include "monster.cpp"

int main()
{
	human Matt("Matthew", 100, 10, 10);
	int mDamage = Matt.get_strength();

	monster Godzilla("Godzilla", 100, 10, 10);

	while(Godzilla.isAlive())
	{
		Godzilla.takeDamage(mDamage);
		std::cout<<Godzilla.get_health()<<"\n";
	}
}
