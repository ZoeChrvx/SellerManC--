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
Abilities::Abilities(string name, Elements type, int damages, int ppMax)
{
	mName = name;
	mDescription = "La Flemme";
	mDamages = damages;
	mPPMax = ppMax;
	mPP = mPPMax;
	mType = type;
}
Abilities::Abilities(string name, std::string description, Elements type, int damages, int ppMax)
{
	mName = name;
	mDescription = description;
	mDamages = damages;
	mPPMax = ppMax;
	mPP = mPPMax;
	mType = type;
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
	cout << mName << ": (" << mDescription << ") : " << mDamages << " dmg, " << ElementToString(mType) << ", " << mPP << "/" << mPPMax << endl;
}

void Abilities::ShortDisplay()
{
	cout << mName << " \t| " << mDamages << " dmg \t| " << "Type : " << ElementToString(mType) << "\t| " << mPP << "/" << mPPMax << endl;
}

string Abilities::GetName()
{
	return mName;
}

void Abilities::Use()
{
	mPP--;
}

void Abilities::Reset()
{
	mPP = mPPMax;
}

Elements Abilities::GetAbilityType()
{
	return mType;
}