#pragma once
#ifndef Om_h
#define Om_h
#include <iostream>
using namespace std;

class Persoana {
	public :
		string cnp;
		string nume;
		virtual string detalii() = 0;
		Persoana(string cnp = " ", string nume = " ");
		Persoana(const Persoana& pers);
		~Persoana();
};
class Student : public Persoana {
	private:
		int nota;
	public:
	string email;
	Student(string cnp = " ", string nume = " ", int nota = 0, string email = " ");
	Student(const Student& stud);
	~Student();
	inline int getNota() const {
		return this->nota;
	}
	string detalii() override;
};

class Angajat : public Persoana {
	public :
	string email;
	string departament;
	Angajat(string cnp = " ", string nume = " ", string email = " ", string departament = " ");
	Angajat(const Angajat& angj);
	~Angajat();
	inline string getDepartament() const{
		return this->departament;
	}
	string detalii() override;

};
#endif