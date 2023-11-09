#include "Terrain.h"

using namespace Model;

// Terrain
Terrain::~Terrain() {}
int Terrain::getId() { return id; }
std::string Terrain::getName() { return name; }
int Terrain::getStars() { return stars; }
int Terrain::getTerrainCosts(int id) { return terrainCosts[id]; }


// Plains
Plains::Plains()
{
	id = 1;
	name = "Plains";
	stars = 1;
	int arr[8] = {1, 1, 1, 2, 1, 0, 0, 0};
	memcpy(terrainCosts, arr, sizeof(arr));
}

// Mountains
Mountains::Mountains()
{
	
}