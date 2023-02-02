#pragma once
#include <string>
enum class Elements
{
	Normal,
	Fire,
	Water,
	Grass,
	Electric,
	Steel
};

static std::string ElementToString(Elements element)
{
	switch(element)
	{
	case Elements::Normal:
		return "normal";
	case Elements::Fire:
		return "feu";
	case Elements::Water:
		return "eau";
	case Elements::Grass:
		return "plante";
	case Elements::Electric:
		return "elec";
	case Elements::Steel:
		return "acier";
	default:
		return "normal";
	}
}

static float ResistanceTabl[6][6]
{
//		  N		F	  W		G	   E	 S	
		{1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f},	//NORMAL
		{1.0f, 0.5f, 0.5f, 2.0f, 1.0f, 2.0f},	//FIRE
		{1.0f, 2.0f, 0.5f, 0.5f, 1.0f, 1.0f},	//WATER
		{1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f},	//GRASS
		{1.0f, 1.0f, 2.0f, 0.5f, 0.5f, 1.0f},	//ELEC
		{1.0f, 0.5f, 0.5f, 1.0f, 0.5f, 0.5f},	//STEEL
};