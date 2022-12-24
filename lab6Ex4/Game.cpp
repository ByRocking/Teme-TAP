#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(string name, string publisher) : name(name),publisher(publisher) {}
Game::Game(const Game& gm) {
	this->name = gm.name;
	this->publisher = gm.publisher;
}
void Game::printGameInfo() {
	cout << "Game " << this->name <<  " was published by " << this->publisher << endl;
}