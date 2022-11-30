#include "mate.h"
#include <iostream>
#include <cmath>

using namespace std;

Dreapta::Dreapta(double m, double n) : m(m), n(n) {
}
Dreapta::Dreapta(const Dreapta& object) {
	this->m = object.m;
	this->n = object.n;
}
Dreapta::~Dreapta() {
	this->m = NULL;
	this-> n = NULL;
}
double Dreapta::getM() {
	return this->m;
}
double Dreapta::getN() {
	return this->n;
}
void Dreapta::setM(double m) {
	this->m = m;
}
void Dreapta::setN(double n) {
	this->n = n;
}

// Punctul

Punct::Punct(double x, double y) : x(x), y(y) {

}
Punct::Punct(const Punct& object) {
	this->x = object.x;
	this->y = object.y;
}
Punct::~Punct() {
	this->x = NULL;
	this->y = NULL;
}
double Punct::getX() {
	return this->x;
}
double Punct::getY() {
	return this->y;
}
void Punct::setX(double x) {
	this->x = x;
}
void Punct::setY(double y) {
	this->x = x;
}
double distanta(Punct unu, Punct doi) {
	
	double distanta = sqrt((pow((doi.y - doi.x), 2)) + (pow((unu.y - unu.x), 2)));
	return distanta;

}
void Punct::afisare() {
	cout << endl << "x : " << this->x << endl;
	cout << endl << "y : " << this->y << endl;
}