#pragma once
#include <string>

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
		virtual void LevelUp() = 0;
		virtual void GetStatAtLevel() = 0;
		virtual void SetParameters() = 0;
		//------------------------------------
	private:
		std::string MapSymbol;
	};
}
