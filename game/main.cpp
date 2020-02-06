#include <string>
#include <iostream>

#include "../entities/Survivor.h"


int main()
{
	Entities::Survivor survivor;
	survivor.GetCompleteStatus();

	int test = (1 + 3) * 1.01;
	float test2 = (1 + 3) * 1.01;

	std::cout << test << std::endl;
	std::cout << test2 << std::endl;

	return 0;
}