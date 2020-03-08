#include <iostream>
#include <string>

#include "Player.h"

std::vector<Entities::BaseCharacter>& Player::Player::GetCharacterList()
{
	return CharacterList;
}
void Player::Player::SetCharacterList(std::vector<Entities::BaseCharacter>& PCharacterList)
{
	CharacterList = PCharacterList;
}