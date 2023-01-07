#include "RandomNumber.h"
#include <iostream>

using namespace std;

RandomNumber::RandomNumber(int limitInferior, int limitSuperior) : limitInferior(limitInferior), limitSuperior(limitSuperior) {}

int RandomNumber::operator()() {
	return (rand() % (this->limitSuperior - limitInferior + 1) + limitInferior);
}