#pragma once
#ifndef MATE_H
#define MATE_H
#include <iostream>

using namespace std;

class Dreapta {

	private : 
		double m;
		double n;

	public:
		Dreapta(double n = 0, double m = 1);
		Dreapta(const Dreapta& object);
		~Dreapta();
		double getM();
		double getN();
		void setM(double m);
		void setN(double n);
};
class Punct {

	private :
		double x; // Abscisa
		double y; // Ordonata

	public :
		Punct(double x, double y);
		Punct(const Punct& object);
		~Punct();
		double getX();
		double getY();
		void setX(double x);
		void setY(double y);
		void afisare();
		friend class Dreapta;
		friend double distanta(Punct unu, Punct doi);
};














#endif
