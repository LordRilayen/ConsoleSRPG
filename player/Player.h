#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../entities/BaseCharacter.h"

namespace Player
{
	class Player
	{
	public:
		std::vector<Entities::BaseCharacter>& GetCharacterList();
		void SetCharacterList(std::vector<Entities::BaseCharacter>& PCharacterList);
	private:
		std::vector<Entities::BaseCharacter> CharacterList;
	};
}
