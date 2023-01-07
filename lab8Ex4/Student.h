#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
public:
	unsigned int CNP;
	string nume;
	unsigned int notaLab;
	unsigned int notaExamen;
	unsigned int numarAbsente;
	Student(unsigned int CNP = 0, string nume = "", unsigned int notaLab = 0, unsigned int notaExamen = 0, unsigned int numarAbsente = 0);
	Student(const Student& stud);
	~Student();
	Student& operator=(const Student& stud);
	bool operator==(const Student& stud)const;
	bool operator!=(const Student& stud)const;
	bool operator<(const Student& stud)const;
	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);
};
#endif