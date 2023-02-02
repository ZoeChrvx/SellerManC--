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
		return "herbe";
	case Elements::Electric:
		return "electrique";
	case Elements::Steel:
		return "acier";
	default:
		return "normal";
	}
}