#pragma once
#ifndef Gameplay_h
#include "Game.h"
#include <iostream>
using namespace std;

class Gameplay : public virtual Game {
protected:
	unsigned int gameplayScore;
public:
	Gameplay(string name, string publisher, unsigned int gameplayScore = 0);
	Gameplay(const Gameplay& gmpl);
	virtual ~Gameplay() {};
	virtual void printGameInfo();


};
#endif // !Gameplay_h

