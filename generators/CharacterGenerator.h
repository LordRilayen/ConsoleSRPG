#pragma once
#include <string>
#include <vector>

#include "../entities/BaseCharacter.h"

namespace Generators
{
	class CharacterGenerator
	{
	public:
		Entities::BaseCharacter CreateNewCharacter(std::vector<Entities::BaseCharacter>& PCharacterVector);
		Entities::BaseCharacter CreateNewCharacterFromTemplate(std::vector<Entities::BaseCharacter>& PCharacterVector, Entities::BaseCharacter PTemplate);
	private:
	};
}