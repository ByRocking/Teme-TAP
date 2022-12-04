#include "complex.h"
#include <iostream>

using namespace std;

int main(void) {
    Complex a(10, 2);
    Complex b(8, 9);
    Complex c;

    c = c.adunare(a, b);
    cout << "Suma numerelor complexe : "<< c.getReal() << " + i"<< c.getImaginar() << endl;

    c = c.scadere(a, b);
    cout << "Diferenta numerelor complexe : "<< c.getReal() << " + i"<< c.getImaginar() << endl;

    c = c.inmulitre(a, b);
    cout << "Produsul numerelor complexe : " << c.getReal() << " + i" << c.getImaginar() << endl;

    c = c.impartire(a, b);
    cout << "Catul numerelor complexe : " << c.getReal() << " + i" << c.getImaginar() << endl;

    c = modul(a,b);
    cout << "Restul numerelor complexe : " << c.getReal() << " + i" << c.getImaginar() << endl;

    conjugat(a, b);
}