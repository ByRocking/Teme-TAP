#include "Om.h"
#include <iostream>
#include <string>
using namespace std;

Persoana::Persoana(string cnp, string nume) : cnp(cnp), nume(nume){}
Persoana::Persoana(const Persoana& pers) {
	this->nume = pers.nume;
	this->cnp = pers.cnp;
}
Persoana::~Persoana() {
	this->nume = "";
	this->cnp = "";
}

Student::Student(string cnp, string nume, int nota, string email) : Persoana(cnp, nume) , nota(nota), email(email){}

Student::Student(const Student& stud) {
	this->nota = stud.nota;
	this->email = stud.email;
}
Student::~Student() {
	this->nota = NULL;
	this->email = "";
}
string Student::detalii() {;
return  ("Studentul " + this->nume + " are nota " + to_string(this->nota));
}
Angajat::Angajat(string cnp, string nume , string email, string departament) : Persoana(cnp, nume), email(email), departament(departament) {}
Angajat::Angajat(const Angajat& angj) {
	this->departament = angj.departament;
}
Angajat::~Angajat() {
	this->departament = "";
}
string Angajat::detalii(){
	return ("Angajatul " + this->nume + " face parte din departamentul" + this->departament);
}