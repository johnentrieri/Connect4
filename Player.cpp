#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
	
}

void Player::init() {
	cout << "What is your name?\n";
	cin >> _name;

	cout << "What piece would you like to use?\n";
	cin >> _piece;
}

string Player::getName() {
	return _name;
}

char Player::getPiece() {
	return _piece;
}

