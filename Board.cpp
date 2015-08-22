#include "Board.h"
#include <iostream>

using namespace std;
Board::Board()
{
}

void Board::initBoard() {
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 7; x++) {
			_board[x][y] = '.';
		}
	}

}

void Board::printBoard() {
	cout << "  1   2   3   4   5   6   7\n";
	cout << " ---------------------------\n";
	for (int y = 0; y < 6; y++) {
		cout << "| ";
		for (int x = 0; x < 7; x++) {
			cout << _board[x][y] << " | ";
		}
		cout << endl;
	}
	cout << " ---------------------------\n";
}

bool Board::placePiece(int col, char piece) {
	for (int y = 5; y >= 0; y--) {
		if (_board[col-1][y] == '.') {
			_board[col-1][y] = piece;
			printBoard();
			return true;
		}
	}
	return false;
}

bool Board::isFull() {
	for (int x = 0; x < 7; x++) {
		if (_board[x][0] == '.') {
			return false;
		}
	}
	return true;
}

bool Board::isWinner() {
	for (int y = 0; y < 6; y++) {
		for (int x = 3; x < 7; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x - 1][y]) && (_board[x][y] == _board[x - 2][y]) && (_board[x][y] == _board[x - 3][y])) {
				return true;
			}
		}
	}

	for (int y = 3; y < 6; y++) {
		for (int x = 0; x < 7; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x][y-1]) && (_board[x][y] == _board[x][y-2]) && (_board[x][y] == _board[x][y-3])) {
				return true;
			}
		}
	}

	for (int y = 3; y < 6; y++) {
		for (int x = 3; x < 7; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x-1][y - 1]) && (_board[x][y] == _board[x-2][y - 2]) && (_board[x][y] == _board[x-3][y - 3])) {
				return true;
			}
		}
	}

	for (int y = 3; y < 6; y++) {
		for (int x = 0; x < 4; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x + 1][y - 1]) && (_board[x][y] == _board[x + 2][y - 2]) && (_board[x][y] == _board[x + 3][y - 3])) {
				return true;
			}
		}
	}
	return false;
}