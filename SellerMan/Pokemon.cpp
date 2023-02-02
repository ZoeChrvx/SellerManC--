using namespace std;
#include "Pokemon.h"
#include <iostream>


Pokemon::Pokemon(string name, string description, Elements type, int hp)
{
	mName = name;
	mDescriptionPokedex = description;
	mLifePoint = hp;
	mType = type;
}
Pokemon::~Pokemon(){}

void Pokemon::GoAttack(Pokemon& target, int choice)
{
	int ability = choice - 1;
	if(!IsAttackValid(choice))
	{
		return;
	}
	float coefficient = 1+ ((rand() % 4) - 2) / 10.0;
	int damages = mAbilities[ability].GetDamages() * coefficient * ResistanceTabl[(int)mAbilities[ability].GetAbilityType()][(int)target.mType];
	if (ResistanceTabl[(int)mAbilities[ability].GetAbilityType()][(int)target.mType] == 1)
	{
		cout << mName << " attaque " << target.mName << " avec " << mAbilities[ability].GetName() << " et lui inflige " << damages << "." << endl;
		target.TakeDamage(damages);
		mAbilities[ability].Use();
	}
	else if (ResistanceTabl[(int)mAbilities[ability].GetAbilityType()][(int)target.mType] == 0.5) 
	{
		cout << mName << " attaque " << target.mName << " avec " << mAbilities[ability].GetName() << " et lui inflige " << damages << "." << endl;
		cout << "Ce n'est pas très efficace..." << endl;
		target.TakeDamage(damages);
		mAbilities[ability].Use();
	}
	else if (ResistanceTabl[(int)mAbilities[ability].GetAbilityType()][(int)target.mType] == 2)
	{
		cout << mName << " attaque " << target.mName << " avec " << mAbilities[ability].GetName() << " et lui inflige " << damages << "." << endl;
		cout << "C'est super efficace !!!" << endl;
		target.TakeDamage(damages);
		mAbilities[ability].Use();
	}
}

bool Pokemon::IsAttackValid(int choice)
{
	int ability = choice - 1;
	if (ability < 0 || ability > 3 || mAbilities[ability].GetName() == "Default" || mAbilities[ability].GetPP() <= 0)
	{
		cerr << mName << " n'a pas pu attaquer avec l'attaque #" << ability<< endl;
		return false;
	}
	return true;
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
	cout << mName << " est un pokemon qui est " << mDescriptionPokedex << ", qui est de type " << ElementToString(mType) << " et a " << mLifePoint << " hp." << endl;
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
bool Pokemon::IsAlive()
{
	if (mLifePoint <= 0) 
	{
		return false;
	}
	else 
	{
		return true;
	}
}

void Pokemon::ShowAbilities()
{
	int index = 0;
	for(Abilities ability : mAbilities)//tant qu'il y a une abilité dans la case, continue)
	{
		if (ability.GetName() == "Default") {
			cout << (index + 1) << " | Non assigné\n";
			index++;
			continue;
		}
		cout << (index + 1) << " | ";
		ability.ShortDisplay();
		index++;
	}
}

Elements Pokemon::GetPkmnType()
{
	return mType;
}