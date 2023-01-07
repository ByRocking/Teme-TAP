#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main(void) {

	ifstream fin("fisierIntrare.txt");
	fstream fout("fisierIesire.txt", ios::out);
	typedef map <string, unsigned> data;
	map<int, data> numarAparitii;
	string line;
	string word;
	int contor = 0;
	map<int, data>::iterator iteratorA;
	map<string, unsigned>::iterator iteratorB;

	while (getline(fin, line)) {
		map<string, unsigned>::iterator it;
		stringstream stringsStream(line);

		while (stringsStream >> word) {
			it = numarAparitii[contor].find(word);
			if (it != numarAparitii[contor].end()) {
				++numarAparitii[contor][word];
			}

			else {
				numarAparitii[contor][word] = 1;
			}
		}
		++contor;
	}

	for (iteratorA = numarAparitii.begin(); iteratorA != numarAparitii.end(); ++iteratorA) {
		fout << "linia " << iteratorA->first << endl;
		for (iteratorB = iteratorA->second.begin(); iteratorB != iteratorA->second.end(); ++iteratorB) {
			fout << "cuvant " << iteratorB->first << " ";
			fout << "aparitii " << iteratorB->second << endl;
		}
	}

	fout.close();
	fin.close();
}