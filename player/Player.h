#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../entities/BaseCharacter.h"
#include "../geography/MapSquare.h"
#include "../geography/Map.h"

namespace Player
{
	class Player
	{
	public:
		//Getters and setters---------------------------------------------------------
		std::vector<Entities::BaseCharacter>& GetCharacterList();
		void SetCharacterList(std::vector<Entities::BaseCharacter>& PCharacterList);

		//Practical functions---------------------------------------------------------
		//returns true if character moved successfully, otherwise false
		bool MoveCharacter(Geography::Map& PMap, int PMapPosition, Geography::MapSquare& PCharacterSquare);
	private:
		std::vector<Entities::BaseCharacter> CharacterList;
	};
}
