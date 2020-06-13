#pragma once
#include <string>
#include <vector>

#include "BaseCharacter.h"

namespace Entities
{
	class GenericClass
	{
	public:
		//getters and setters-----------------
		virtual std::string GetMapSymbol() = 0;
		//------------------------------------

		//practical functions-----------------
		virtual void LevelUp(Entities::BaseCharacter* PtrCharacter) = 0;
		virtual int GetStatAtLevel(Entities::BaseCharacter* PtrCharacter, std::string PStat, int PLevels) = 0;
		virtual void SetParameters() = 0;
		//------------------------------------
	private:
		std::string MapSymbol;
	};
}
