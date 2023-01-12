#include <iostream>
#include <string>
#pragma once
class Abilities
{
private:
	std::string mName;
	std::string mDescription;
	int mDamages;
	int mPP, mPPMax;

public:
	//Constructeur / Destructeur
	Abilities();
	Abilities(std::string name, int damages, int ppMax);
	Abilities(std::string name, std::string description, int damages, int ppMax);
	~Abilities();
	
	//Accesseurs (Pour avori acces au valeurs de cette classe
	int GetDamages();
	int GetPP();
	int GetPPMax();

	//Other
	void Display();
};

