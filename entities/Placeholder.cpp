#include <string>

#include "Placeholder.h"

//Getters and Setters---------------------------------------
std::string Entities::Placeholder::GetMapSymbol()
{
	return MapSymbol;
}
//----------------------------------------------------------

//Practical functions---------------------------------------
void Entities::Placeholder::LevelUp()
{
	std::cout << "ERROR: Placeholder class characters are not real, and should not be levelling up." << std::endl;
}
void Entities::Placeholder::GetStatAtLevel()
{
	std::cout << "ERROR: Placeholder class characters are not real, and should not be receiving stat modifications." << std::endl;
}
void Entities::Placeholder::SetParameters()
{
	std::cout << "ERROR: Placeholder class characters are not real, and should not be having parameters changed." << std::endl;
}
//----------------------------------------------------------