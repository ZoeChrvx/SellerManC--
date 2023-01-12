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

void Pokemon::GoAttack(Pokemon& target, int damages) 
{
	cout << mName << " attack " << target.mName << " avec " << damages << " damages." << endl;
	target.TakeDamage(damages);
}
void Pokemon::TakeDamage(int enemyAttack) 
{
	mLifePoint -= enemyAttack;
	if (mLifePoint <= 0) 
	{
		PassOut();
	}
}
void Pokemon::Heal(int potion) 
{
	mLifePoint += potion;
}
void Pokemon::PassOut() 
{
	cout << mName << " pass out." << endl;
}

void Pokemon::Display()
{
	cout << mName << " is a pokemon who are "<< mDescriptionPokedex <<" and who has "<< mLifePoint << " hp." << endl;
}
