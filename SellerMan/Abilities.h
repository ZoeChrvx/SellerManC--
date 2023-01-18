#include <iostream>
#include <string>
#pragma once
class Abilities
{
private:
	std::string mName;
	std::string mDescription;
	int mDamages, mPP, mPPMax;

public:
	//Constructeur / Destructeur
	Abilities();
	Abilities(std::string name, int damages, int ppMax);
	Abilities(std::string name, std::string description, int damages, int ppMax);
	~Abilities();
	
	//Accesseurs (Pour avoir acces au valeurs de cette classe)
	std::string GetName();
	int GetDamages();
	int GetPP();
	int GetPPMax();

	//Other
	void Display();
};

