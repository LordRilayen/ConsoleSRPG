#include <string>

#include "Placeholder.h"

//Getters and Setters---------------------------------------
std::string Entities::Placeholder::GetMapSymbol()
{
	return MapSymbol;
}
//----------------------------------------------------------

//Practical functions---------------------------------------
void Entities::Placeholder::LevelUp(Entities::BaseCharacter PtrCharacter)
{
	std::cout << "ERROR: Placeholder class characters are not real, and should not be levelling up." << std::endl;
}
int Entities::Placeholder::GetStatAtLevel(Entities::BaseCharacter* PtrCharacter, std::string PStat, int PLevels)
{
	std::cout << "ERROR: Placeholder class characters are not real, and should not be receiving stat modifications." << std::endl;
	return 0;
}
void Entities::Placeholder::SetParameters(Entities::BaseCharacter* PtrCharacter)
{
	std::cout << "ERROR: Placeholder class characters are not real, and should not be having parameters changed." << std::endl;
}
//----------------------------------------------------------