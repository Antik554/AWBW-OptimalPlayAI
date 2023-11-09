#pragma once
#include <string>

namespace Model
{

class Terrain
{
protected:
	int id;
	std::string name;
	int stars;
	int terrainCosts[8];

public:
	Terrain() = default;
	virtual ~Terrain() = 0;

	int getId();
	std::string getName();
	int getStars();
	int getTerrainCosts(int id);

};

class Plains : public Terrain
{
public:
	Plains();
};

class Mountains : public Terrain
{
	Mountains();
};

class Woods : public Terrain
{
	Woods();
};

class Road : public Terrain
{
	Road();
};

}
