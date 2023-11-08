#pragma once
#include "Player.h"
#include "Board.h"

namespace Model
{
class Game
{
private:
	int day;
	int turn;
	int weather;
	Player players[16];
	Board board;

};
}


