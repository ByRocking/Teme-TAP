#pragma once
#ifndef Story_h
#include "Game.h"
#include <iostream>

using namespace std;

class Story : public virtual Game {
protected:
	unsigned int storyScore;
public :
	Story(string name, string publisher, unsigned int storyScore = 0);
	Story(const Story& story);
	virtual ~Story() {};
	virtual void printGameInfo();
};
#endif // !Story_h
