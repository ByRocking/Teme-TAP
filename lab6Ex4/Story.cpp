#include "Story.h"
#include "Game.h"
#include <iostream>

using namespace std;

Story::Story(string name, string publisher, unsigned int storyScore) : Game(name,publisher), storyScore(storyScore) {}
Story::Story(const Story& story) {
	this->name = story.name;
	this->publisher = story.publisher;
	this->storyScore = story.storyScore;
}
void Story::printGameInfo() {
	cout << "Story score : " << this->storyScore << endl;
}