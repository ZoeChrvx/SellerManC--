#include <iostream>
#include <string>
#include "Elements.h"

#pragma once
class Abilities
{
private:
	std::string mName;
	std::string mDescription;
	int mDamages, mPP, mPPMax;
	Elements mType;

public:
	//Constructeur / Destructeur
	Abilities();
	Abilities(std::string name, Elements type, int damages, int ppMax);
	Abilities(std::string name, std::string description, Elements type, int damages, int ppMax);
	~Abilities();
	
	//Accesseurs (Pour avoir acces aux valeurs de cette classe)
	std::string GetName();
	int GetDamages();
	int GetPP();
	int GetPPMax();
	Elements GetAbilityType();

	//Other
	void ShortDisplay();
	void Display();
	void Use();
	void Reset();
};

