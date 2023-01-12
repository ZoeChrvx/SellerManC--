#include <iostream>
#include <string>
#include "Abilities.h"

#pragma once
class Pokemon
{
private:
	std::string mName;
	std::string mDescriptionPokedex;
	int mLifePoint;
	int mDamage;
	void PassOut();
	Abilities mAbilities[4];

public:
	Pokemon(std::string name, std::string descriptiond, int hp);
	~Pokemon();

	void GoAttack(Pokemon& target, int damages); //Je pointe un pokémon précis avec &
	void TakeDamage(int enemyAttack);
	//void GoInAndOutPokeBall();
	void Heal(int potion);
	void Display();
};

