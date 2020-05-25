#include <string>
#include <vector>

#include "CharacterGenerator.h"
#include "../entities/BaseCharacter.h"

Entities::BaseCharacter Generators::CharacterGenerator::CreateNewCharacter(std::vector<Entities::BaseCharacter>& CharacterVector)
{
	Entities::BaseCharacter NewCharacter;
	return CreateNewCharacterFromTemplate(CharacterVector, NewCharacter);
}
Entities::BaseCharacter Generators::CharacterGenerator::CreateNewCharacterFromTemplate(std::vector<Entities::BaseCharacter>& PCharacterVector, Entities::BaseCharacter PTemplate)
{
	//Get the last character in PCharacterVector (which should have everyone), get their CreationId, increment it, and set that for the new character
	if (PCharacterVector.size() == 0)
	{
		PTemplate.SetCreationId(1);
	}
	else
	{
		PTemplate.SetCreationId(PCharacterVector.at(PCharacterVector.size() - 1).GetCreationId() + 1);
	}

	return PTemplate;
}