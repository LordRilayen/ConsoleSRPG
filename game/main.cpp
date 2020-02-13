#include <string>
#include <iostream>

#include "../entities/Survivor.h"
#include "../loot/Item.h"
#include "../loot/Weapon.h"


int main()
{
	Entities::Survivor Roxas;
	Entities::Survivor Vanitas;
	Vanitas.SetName("Vanitas");
	Vanitas.SetCriticalChance(50);

	Roxas.AttackTarget(Vanitas);

	Loot::Item Potion;
	Loot::Weapon Sword;

	std::cout << Potion.GetAccuracy() << std::endl;
	std::cout << Sword.GetAccuracy() << std::endl;

	return 0;
}