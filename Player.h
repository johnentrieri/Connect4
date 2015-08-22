#pragma once
#include <string>

using namespace std;
class Player
{
public:
	Player();
	void init();
	string getName();
	char getPiece();

private:
	string _name;
	char _piece;
};

