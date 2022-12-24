#pragma once
#ifndef Game_h
#include <iostream>

using namespace std;

class Game {
protected:
	string name;
	string publisher;
public:
	Game(string name = "", string publisher = "");
	Game(const Game& gm);
	virtual ~Game() {};
	virtual void printGameInfo();
};
#endif // !Game_h

