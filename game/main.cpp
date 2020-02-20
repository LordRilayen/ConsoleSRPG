#include <string>
#include <iostream>

#include "../entities/Survivor.h"
#include "../loot/Helmet.h"
#include "../loot/Axe.h"


int main()
{
	Entities::Survivor Roxas;
	Entities::Survivor Vanitas;
	Vanitas.SetName("Vanitas");
	Vanitas.SetCriticalChance(50);

	Roxas.AttackTarget(Vanitas);

	Loot::Helmet Helmet;
	Loot::Axe Axe;

	std::cout << Helmet.GetAccuracy() << std::endl;
	std::cout << Axe.GetAccuracy() << std::endl;

	return 0;
}