#pragma once
#ifndef RandomNumber_h
#define RandomNumber_h
#include <iostream>

using namespace std;

class RandomNumber {
public:
	int limitSuperior;
	int limitInferior;
	RandomNumber(int limitInferior = 0, int limitSuperior = 0);
	int operator()();
};
#endif // !RandomNumber_h