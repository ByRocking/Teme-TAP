#include "Game.h"
#include "Gameplay.h"
#include "Story.h"
#include "Rating.h"
#include <iostream>

using namespace std;

int main(void) {
	Rating gow("God of War", "Santa Monica", 8, 10, 9);
	gow.printGameInfo();
}