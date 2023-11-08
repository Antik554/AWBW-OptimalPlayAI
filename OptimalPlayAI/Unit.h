#pragma once
#include <string>

namespace Model
{
class Unit
{
private:
	int id;
	std::string name;
	int health;
	int fuel;
	int ammo;
	int* attackTable;
	int* defenceTable;

};
}

