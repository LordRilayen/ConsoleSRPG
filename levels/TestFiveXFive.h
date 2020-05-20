#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "../entities/BaseCharacter.h"
#include "../generators/MapGenerator.h"

namespace Levels
{
	class TestFiveXFive
	{
	public:
		Geography::Map setUpAMap();
		std::vector<Entities::BaseCharacter> setUpCharacters();
		
		void setUpAndTestAMap();
	};
}

