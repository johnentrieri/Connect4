#include <iostream>
#include "Board.h"
#include "Player.h"
#include "GameManager.h"

using namespace std;

int main()
{
	GameManager gm;
	gm.init();

	while (gm.isPlaying()) {
		gm.play();
	}

	system("PAUSE");
	return 0;
}