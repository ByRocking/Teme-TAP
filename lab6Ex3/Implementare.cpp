#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(string specie, unsigned int varsta) : specie(specie), varsta(varsta) {}
Animal::Animal(const Animal& anim) {
	this->specie = specie;
	this->varsta = varsta;
}
Animal::~Animal() {
	this->specie = "";
	this->varsta = NULL;
}
Mamifer::Mamifer(string specie, unsigned int varsta, unsigned int lungime) : Animal(specie, varsta), lungime(lungime) {}
Mamifer::Mamifer(const Mamifer& mami) {
	this->specie = mami.specie;
	this->varsta = mami.varsta;
	this->lungime = mami.lungime;
}
Mamifer::~Mamifer() {
	this->specie = "";
	this->varsta = NULL;
	this->lungime = NULL;
}
void Mamifer::heterotrof() {
	cout << "Mamifer - metoda heterotrof " << endl;
}
void Mamifer::naste() {
	cout << "Mamifer - naste " << endl;
}
Pasare::Pasare(string specie, unsigned int varsta, unsigned int nrPene) : Animal(specie, varsta) , nrPene(nrPene) {}
Pasare::Pasare(const Pasare& pas) {
	this->specie = pas.specie;
	this->varsta = pas.varsta;
	this->nrPene = pas.nrPene;
}
Pasare::~Pasare() {
	this->specie = "";
	this->varsta = NULL;
	this->nrPene = NULL;
}
void Pasare::heterotrof() {
	cout << "Pasare - metoda heterotrof " << endl;
}
void Pasare::zboara() {
	cout << "Pasare - zboara " << endl;
}
Ornitorinc::Ornitorinc(string specie, unsigned int varsta, unsigned int lungime, unsigned int nrPene) : Mamifer(specie,varsta,lungime) , Pasare(specie,varsta,nrPene) {}
Ornitorinc::Ornitorinc(const Ornitorinc& orni) : Mamifer(orni), Pasare(orni) {}
Ornitorinc::~Ornitorinc() {
	Mamifer::~Mamifer();
	Pasare::~Pasare();
}
void Ornitorinc::heterotrof() {
	cout << "Ornitorinc - metoda heterotrof " << endl;
}
void Ornitorinc::amfibiu() {
	cout << "Ornitorinc - metoda amfibiu " << endl;
}