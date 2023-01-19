using namespace std;
#include "Abilities.h"
#include <iostream>
#include <string>

Abilities::Abilities()
{
	mName = "Default";
	mDescription = "La Flemme";
	mDamages = 5;
	mPPMax = 10;
	mPP = mPPMax;
}
Abilities::Abilities(string name, int damages, int ppMax)
{
	mName = name;
	mDescription = "La Flemme";
	mDamages = damages;
	mPPMax = ppMax;
	mPP = mPPMax;
}
Abilities::Abilities(string name, string description, int damages, int ppMax) 
{
	mName = name;
	mDescription = description;
	mDamages = damages;
	mPPMax = ppMax;
	mPP = mPPMax;
}
Abilities::~Abilities(){}

int Abilities::GetDamages()
{
	return mDamages;
}
int Abilities::GetPP()
{
	return mPP;
}
int Abilities::GetPPMax()
{
	return mPPMax;
}

void Abilities::Display() 
{
	cout << mName << ": (" << mDescription << ") : " << mDamages << " dmg, " << mPP << "/" << mPPMax;
}

void Abilities::ShortDisplay()
{
	cout << mName <<", " << mDamages << " dmg, " << mPP << "/" << mPPMax;
}

string Abilities::GetName()
{
	return mName;
}