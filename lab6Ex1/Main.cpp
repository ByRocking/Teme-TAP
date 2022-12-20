#include "Om.h"
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	Student rzv("2", "Razvan", 10, "razvanrmn@icloud.com");
	cout << rzv.detalii() << endl;
	Angajat rmn("2", "Roman", "razvanrmn@icloud.com", " info");
	cout << endl << rmn.detalii() << endl;
}