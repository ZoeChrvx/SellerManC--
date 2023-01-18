using namespace std;
#include "Pokemon.h"
#include <iostream>


Pokemon::Pokemon(string name, string description, int hp)
{
	mName = name;
	mDescriptionPokedex = description;
	mLifePoint = hp;
}
Pokemon::~Pokemon(){}

void Pokemon::GoAttack(Pokemon& target, int ability)
{
	if(ability < 0 || ability > 3 || mAbilities[ability].GetName() == "Default" || mAbilities[ability].GetPP() <= 0)
	{
		cerr << mName << " n'a pas pu attaquer avec l'attaque #" << ability << endl;
		return;
	}
	float coefficient = 1+ ((rand() % 4) - 2) / 10.0;
	int damages = mAbilities[ability].GetDamages() * coefficient;

	cout << mName << " attaque " << target.mName << " avec " << mAbilities[ability].GetName() << " et lui inflige " << damages << "." << endl;
	target.TakeDamage(damages);
}
void Pokemon::TakeDamage(int enemyAttack) 
{
	mLifePoint -= enemyAttack;
	if (mLifePoint <= 0) 
	{
		PassOut();
	}
	else 
	{
		cout << mName << " a " << mLifePoint << " hp." << endl;
	}
}
void Pokemon::Heal(int potion) 
{
	mLifePoint += potion;
}
void Pokemon::PassOut() 
{
	cout << mName << " est mort." << endl;
}

void Pokemon::Display()
{
	cout << mName << " est un pokemon qui est "<< mDescriptionPokedex <<" et a "<< mLifePoint << " hp." << endl;
}

void Pokemon::Learn(Abilities ability, int place)
{
	if (place < 0 || place > 3) 
	{
		cerr << "L'emplacement " << place << " est invalide, donnez un chiffre entre 0 et 3" << endl;
		return;
	}

	mAbilities[place] = ability;
	
	cout << mName << " a appris la capacité " << ability.GetName() << "." << endl;
}