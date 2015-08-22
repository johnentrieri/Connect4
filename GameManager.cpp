#include <iostream>
#include <string>
#include "GameManager.h"


using namespace std;

GameManager::GameManager() {
	
}

void GameManager::init()
{
	cout << "\n\nInitializing Game Board...\n\n";
	Board board;
	_board = board;
	_board.initBoard();

	cout << "\nPlayer 1\n";
	Player p1;
	_p1 = p1;
	_p1.init();

	cout << "\nPlayer 2\n";
	Player p2;
	_p2 = p2;
	_p2.init();

	cout << _p1.getName() << " VS. " << _p2.getName() << endl;

	_isPlaying = true;
	_currentPlayer = _p1;

	cout << "\n\nGame Has Begun!!!\n\n";

	_board.printBoard();
}

bool GameManager::isPlaying() {
	return _isPlaying;
}
void GameManager::checkWin(int col, char piece) {

}

void GameManager::play() {
	int col;

	cout << _currentPlayer.getName() << "'s Turn\n";
	cout << "Choose A Column: ";
	cin >> col;
	while(!_board.placePiece(col, _currentPlayer.getPiece())) {
		cout << "\nThat Column is Full, Try Another: ";
		cin >> col;
	}

	if (_board.isWinner()) {
		cout << endl << _currentPlayer.getName() << " Wins!!!\n\n";
		_isPlaying = false;
	}

	if (_board.isFull()) {
		cout << "\nBoard is Full\n";
		_isPlaying = false;
	}
	

	if (_currentPlayer.getPiece() == _p1.getPiece()) {
		_currentPlayer = _p2;
	}
	else {
		_currentPlayer = _p1;
	}
}
