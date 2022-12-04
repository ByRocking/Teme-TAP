#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <complex>

using namespace std;

class Complex {
	private :
		int real;
		int imaginar;
	public :
		Complex();
		Complex(int real,int imaginar);
		Complex(const Complex& object);
		~Complex();
		inline void setReal(int real) {
			this->real = real;
		}
		inline void setImaginar(int imaginar) {
			this->imaginar = imaginar;
		}
		inline int getReal() {
			return this->real;
		}
		inline int getImaginar() {
			return this->imaginar;
		}
		Complex adunare(Complex a, Complex b);
		Complex scadere(Complex a, Complex b);
		Complex inmulitre(Complex a, Complex b);
		Complex impartire(Complex a, Complex b);
		friend Complex modul(Complex a, Complex b) {
			Complex rezultat;
			rezultat.real = a.real % b.real;
			rezultat.imaginar = a.imaginar % b.imaginar;
			return rezultat;
		}
		friend void conjugat(Complex a, Complex b) {
			complex<double> nrComplexA(a.real, a.imaginar);
			complex<double> nrComplexB(b.real, b.imaginar);
			cout << "Conjugata primului numar complex este : " << conj(nrComplexA) << endl;
			cout << "Conjugata celui de al doile numar complex este : " << conj(nrComplexB) << endl;
		}
};
#endif 

