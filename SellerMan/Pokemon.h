#include <iostream>
#include <string>
#include "Abilities.h"
#include <random>
#include <string>

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

	void GoAttack(Pokemon& target, int ability); //Je pointe un pokémon précis avec & 
	void TakeDamage(int enemyAttack);
	bool IsAttackValid(int ability);
	//void GoInAndOutPokeBall();
	void Heal(int potion);
	void Display();
	void Learn(Abilities ability, int place);
	bool IsAlive();
	void ShowAbilities();
};

