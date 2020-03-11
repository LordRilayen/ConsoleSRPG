#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../entities/BaseCharacter.h"

namespace Game
{
	class GameLoop
	{
	public:
		//Getters and setters-------------------------------
		bool GetIsGamePlaying();
		void SetIsGamePlaying(bool PIsGamePlaying);
		std::vector<Entities::BaseCharacter> GetAllGameCharacters();
		void SetAllGameCharacters(std::vector<Entities::BaseCharacter>& PAllGameCharacters);
		//--------------------------------------------------

		//Practical functions-------------------------------
		void PlayGame(Game::GameLoop& PGame);
		Entities::BaseCharacter CreateNewCharacter();
		Entities::BaseCharacter CreateNewCharacterFromTemplate(Entities::BaseCharacter PTemplate);
		//--------------------------------------------------
	private:
		bool IsGamePlaying = true;
		std::vector<Entities::BaseCharacter> AllGameCharacters;
	};
}
