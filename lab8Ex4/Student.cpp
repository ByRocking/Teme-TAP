#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(unsigned int CNP, string nume, unsigned int notaLab, unsigned int notaExamen, unsigned int numarAbsente) : CNP(CNP), nume(nume), notaLab(notaLab), notaExamen(notaExamen), numarAbsente(numarAbsente) {}
Student::Student(const Student& stud) {
	this->CNP = stud.CNP;
	this->nume = stud.nume;
	this->notaLab = stud.notaLab;
	this->notaExamen = stud.notaExamen;
	this->numarAbsente = stud.numarAbsente;
}
Student::~Student() {
	this->CNP = NULL;
	this->nume = "Undefined";
	this->notaLab = NULL;
	this->notaExamen = NULL;
	this->numarAbsente = NULL;
}
Student& Student::operator=(const Student& stud) {
	this->CNP = stud.CNP;
	this->nume = stud.nume;
	this->notaLab = stud.notaLab;
	this->notaExamen = stud.notaExamen;
	this->numarAbsente = stud.numarAbsente;
	return *this;
}
bool Student::operator==(const Student& stud) const {
	Student studentA = *this;
	Student studentB = stud;

	if (studentA.CNP == studentB.CNP && studentA.nume == studentB.nume && studentA.notaLab == studentB.notaLab && studentA.notaExamen == studentB.notaExamen && studentA.numarAbsente == studentB.numarAbsente) {
		return true;
	}
	else {
		return false;
	}
}
bool Student::operator!=(const Student& stud) const {
	Student studentA = *this;
	Student studentB = stud;

	if (studentA.CNP != studentB.CNP && studentA.nume != studentB.nume && studentA.notaLab != studentB.notaLab && studentA.notaExamen != studentB.notaExamen && studentA.numarAbsente != studentB.numarAbsente) {
		return true;
	}
	else {
		return false;
	}
}
bool Student::operator<(const Student& stud) const {
	Student studentA = *this;
	Student studentB = stud;

	if (studentA.CNP < studentB.CNP && studentA.nume < studentB.nume && studentA.notaLab < studentB.notaLab && studentA.notaExamen < studentB.notaExamen && studentA.numarAbsente < studentB.numarAbsente) {
		return true;
	}
	else {
		return false;
	}
}
ostream& Student::operator<<(ostream& os) const {
	os << "CNP : " << this->CNP << endl << "Nume : " << this->nume << endl << "Nota LAB : " << this->notaLab << endl << "Nota Examen : " << this->notaExamen << endl << "Numar absente : " << this->numarAbsente << endl;
	return os;
}
istream& Student::operator>>(istream& is) {
	is >> this->CNP >> this->nume >> this->notaLab >> this->notaExamen >> this->numarAbsente;
	return is;
}