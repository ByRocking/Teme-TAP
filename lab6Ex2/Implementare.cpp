#include "Triunghi.h"
#include <iostream>
#include <cmath>

using namespace std;

Triunghi::Triunghi(double a, double b, double c) : a(a), b(b), c(c) {}
Dreptunghic::Dreptunghic(double a, double b, double c) : Triunghi(a,b,c) {}
Dreptunghic::Dreptunghic(const Dreptunghic& dreptunghic) {
	this->a = dreptunghic.a;
	this->b = dreptunghic.b;
	this->c = dreptunghic.c;
}
Dreptunghic::~Dreptunghic() {
	this->a = NULL;
	this->b = NULL;
	this->c = NULL;
}
void Dreptunghic::arie() {
	double semiperimetru = ((this->a + this->b + this->c) / 2);
	double aria = sqrt(semiperimetru * ((semiperimetru - a) * (semiperimetru - b) * (semiperimetru - c)));
	cout << "Aria triunghiului dreptunghic este = " << aria << endl;
}
void Dreptunghic::perimetru() {
	cout << "Perimetrul triunghiului dreptunghic este = " << (a + b + c) << endl;
}
Isoscel::Isoscel(double a, double b, double c) : Triunghi(a,b,c) {}
Isoscel::Isoscel(const Isoscel& iso) {
	this->a = iso.a;
	this->b = iso.b;
	this->c = iso.c;
}
Isoscel::~Isoscel() {
	this->a = NULL;
	this->b = NULL;
	this->c = NULL;
}
void Isoscel::arie() {
	double arie = (1 / 2) * (sqrt(pow(this->a, 2) - (pow(this->b, 2) / 4) * this->b));
	cout << "Aria triunghiului isoscel este = " << arie << endl;
}
void Isoscel::perimetru() {
	double perimetru = 2 * (this->a + this->b);
	cout << "Perimetrul triunghiului isoscel este = " << perimetru << endl;
}
DreptunghicIsoscel::DreptunghicIsoscel(double a, double b, double c) : Isoscel(a, b, c), Dreptunghic(a, b, c) {}
DreptunghicIsoscel::DreptunghicIsoscel(const DreptunghicIsoscel& dris) : Isoscel(dris), Dreptunghic(dris) {}
DreptunghicIsoscel::~DreptunghicIsoscel() {
	Isoscel::~Isoscel();
	Dreptunghic::~Dreptunghic();
} 
void DreptunghicIsoscel::arie() {
	double arie = ((Isoscel::a * Isoscel::b) * (Isoscel::a * Isoscel::c) / 2);
	cout << "Aria triunghiului dreptunghic isoscel este = " << arie << endl;
}
void DreptunghicIsoscel::perimetru() {
	double perimetru = 2 * (Isoscel::a + Isoscel::b);
	cout << "Perimetrul triunghiului dreptunghic isoscel este = " << perimetru << endl;
}
Echilateral::Echilateral(double a, double b, double c) : Isoscel(a, b, c) {}
Echilateral::Echilateral(const Echilateral& echi) {
	this->a = echi.a;
	this->b = echi.b;
	this->c = echi.c;
}
Echilateral::~Echilateral() {
	this->a = NULL;
	this->b = NULL;
	this->c = NULL;
}
void Echilateral::arie() {
	double s = (this->a + this->b + this->c) / 2;
	double aria = sqrt(s * ((s - this->a) * (s - this->b) * (s - this->c)));
	cout << "Aria triunghiului echilateral este = " << aria << endl;
}
void Echilateral::perimetru() {
	double perimetru = 2 * (this->a + this->b);
}