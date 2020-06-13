#pragma once
#include <string>

#include "GenericClass.h"

namespace Entities
{
	class Acolyte : public GenericClass
	{
	public:
		//getters and setters-----------------
		std::string GetMapSymbol();
		//------------------------------------

		//practical functions-----------------
		void LevelUp(Entities::BaseCharacter* PtrCharacter);
		int GetStatAtLevel(Entities::BaseCharacter* PtrCharacter, std::string PStat, int PLevels);
		void SetParameters();
		//------------------------------------
	private:
		std::string MapSymbol = "o";
	};
}