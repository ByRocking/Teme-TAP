#pragma once
#include "Gameplay.h"
#include "Story.h"
#include <iostream>

using namespace std;

class Rating : public Gameplay, public Story {
protected :
	unsigned int overall;
public:
	Rating(string name, string publisher, unsigned int gameScore, unsigned int storyScore, unsigned int overall = 0);
	Rating(const Rating& rate);
	virtual ~Rating() {};
	virtual void printGameInfo();
};