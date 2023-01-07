#include <iostream>
#include <string>
#include <fstream>
#include <set>
#include <map>
#include <sstream>
using namespace std;

int main(void) {

	ifstream fin("fisierIntrare.txt");
	fstream fout("out.txt", ios::out);
	set<string> strings;
	set <string>::iterator setIterator;
	string fileString;
	while (fin >> fileString) {
		// Inserarea sirului din fisier in stringul set
		strings.insert(fileString);
	}
	// Parcuge sirul si pune in fisierul de iesire cuvintele care nu se repeta
	for (setIterator = strings.begin(); setIterator != strings.end(); ++setIterator) {
		fout << *setIterator << endl;
	}
	fout.close();
	fin.close();
}