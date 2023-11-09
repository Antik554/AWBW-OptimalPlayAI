#include "Main.h"

int main()
{
	Model::Plains plain;
	std::cout << plain.getId() << " " << plain.getName() << " " << plain.getTerrainCosts(2);
	return 0;
}
