#include "Game.h"
#include "Gameplay.h"
#include <iostream>

using namespace std;

Gameplay::Gameplay(string name, string publisher, unsigned int gameplayScore) : Game(name,publisher) , gameplayScore(gameplayScore) {}
Gameplay::Gameplay(const Gameplay& gmpl) {
	this->name = gmpl.name;
	this->publisher = gmpl.publisher;
	this->gameplayScore = gmpl.gameplayScore;
}
void Gameplay::printGameInfo() {
	cout << "Gameplay score : " << this->gameplayScore << endl;
}