#pragma once
class Board
{
public:
	Board();
	void initBoard();
	void printBoard();
	bool isWinner();
	bool isFull();
	bool placePiece(int col, char piece);

private:
	char _board[7][6];
};

