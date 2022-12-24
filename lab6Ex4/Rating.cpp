#include "Gameplay.h"
#include "Story.h"
#include "Rating.h"
#include <iostream>

using namespace std;

Rating::Rating(string name, string publisher, unsigned int gameplayScore, unsigned int storyScore, unsigned int overall) : Gameplay(name,publisher,gameplayScore) , Story(name,publisher,storyScore), Game(name, publisher), overall(overall) {}
Rating::Rating(const Rating& rate) : Gameplay(rate), Story(rate) {
	this->overall = rate.overall;
}
void Rating::printGameInfo() {
	Game::printGameInfo();
	cout << "The game have an overall rating of " << (this->gameplayScore + this->storyScore + this->overall) / 3 << endl;
	Story::printGameInfo();
	Gameplay::printGameInfo();
}