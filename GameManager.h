#include "Player.h"
#include "Board.h"

#pragma once
class GameManager
{
public:
	GameManager();
	void init();
	bool isPlaying();
	void checkWin(int col, char piece);
	void play();
private:
	bool _isPlaying;
	Player _p1;
	Player _p2;
	Player _currentPlayer;
	Board _board;
};

