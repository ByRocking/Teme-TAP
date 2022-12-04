#include "complex.h"
#include <iostream>

using namespace std;
Complex::Complex() {
	this->real = 0;
	this->imaginar = 0;

}
Complex::Complex(int real, int imaginar) : real(real), imaginar(imaginar) {

}
Complex::Complex(const Complex& object) {
	this->real = object.real;
	this->imaginar = object.imaginar;
}
Complex::~Complex() {
	this->real = NULL;
	this->imaginar = NULL;
}
Complex Complex::adunare(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = a.real + b.real;
	rezultat.imaginar = a.imaginar + b.imaginar;
	return rezultat;
}
Complex Complex::scadere(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = a.real - b.real;
	rezultat.imaginar = a.imaginar - b.imaginar;
	return rezultat;
}
Complex Complex::inmulitre(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = a.real * b.real;
	rezultat.imaginar = a.imaginar * b.imaginar;
	return rezultat;
}
Complex Complex::impartire(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = a.real / b.real;
	rezultat.imaginar = a.imaginar / b.imaginar;
	return rezultat;
}
