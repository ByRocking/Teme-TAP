#include "Student.h"
#include "ComparaNota.h"
#include <iostream>
#include <set>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main(void) {

	set<Student>students;
	set<Student>::iterator iterator;
	set<Student, ComparaNota>studentCmp;
	set<Student, ComparaNota>::iterator iteratorCmp;
	unsigned int nrStud;
	ifstream inputFile("students.txt", ios::in);
	unsigned int CNP;
	string nume;
	unsigned int notaLab;
	unsigned int notaExamen;
	unsigned int numarAbsente;

	inputFile >> nrStud;

	for (unsigned int i = 0; i < nrStud; ++i) {
		inputFile >> CNP >> nume >> notaLab >> notaExamen >> numarAbsente;
		Student stud(CNP, nume, notaLab, notaExamen, numarAbsente);
		students.insert(stud);
		studentCmp.insert(stud);
	}
	fstream fout("stud.txt", ios::out);
	for (iterator = students.begin(); iterator != students.end(); ++iterator) {
		fout << iterator->CNP << endl;
		fout << iterator->nume << endl;
		fout << iterator->notaLab << endl;
		fout << iterator->notaExamen << endl;
		fout << iterator->numarAbsente << endl;
	}

	for (iterator = students.begin(); iterator != students.end(); ++iterator) {
		cout << iterator->nume << " cu nota " << iterator->notaExamen << endl;
	}
	cout << endl;

	Student hera;
	hera.nume = "Hera";
	set<Student>::iterator itgasit;
	itgasit = students.find(hera);

	if (itgasit == students.end()) {
		cout << "Not found" << endl;
	}
	else {
		cout << "Found" << endl;
	}

	unsigned int gradeA;
	unsigned int gradeB;
	cout << "First grade : ";
	cin >> gradeA;
	cout << "Second grade : ";
	cin >> gradeB;

	for (iterator = students.begin(); iterator != students.end(); ++iterator) {

		if (iterator->notaExamen >= gradeA && iterator->notaExamen <= gradeB) {
			cout << iterator->nume << endl;
		}
		else {
			cout << "Not found" << endl;
		}
	}

	cout << endl << "Prezente < 11" << endl;
	for (iterator = students.begin(); iterator != students.end(); iterator++) {
		if (iterator->numarAbsente < 11) {
			cout << iterator->nume << endl;
		}
	}
}