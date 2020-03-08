#pragma once

#include <iostream>
#include <string>

namespace Game
{
	class GameLoop
	{
	public:
		bool GetIsGamePlaying();
		void SetIsGamePlaying(bool PIsGamePlaying);
		void PlayGame(Game::GameLoop& PGame);
	private:
		bool IsGamePlaying = true;
	};
}
