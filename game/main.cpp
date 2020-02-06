#include <string>
#include <iostream>

#include "../entities/Survivor.h"


int main()
{
	Entities::Survivor Roxas;
	Entities::Survivor Vanitas;
	Vanitas.SetName("Vanitas");
	Vanitas.SetCriticalChance(50);

	Roxas.AttackTarget(Vanitas);

	/*Roxas.GetCompleteStatus();
	std::cout << " " << std::endl;
	Vanitas.GetCompleteStatus();*/


	/*int test = (1 + 3) * 1.01;
	float test2 = (1 + 3) * 1.01;

	std::cout << std::endl;
	std::cout << test << std::endl;
	std::cout << test2 << std::endl;*/

	return 0;
}