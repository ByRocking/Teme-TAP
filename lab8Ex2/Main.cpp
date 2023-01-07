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
	map<string, unsigned> numarAparitii;
	map<string, unsigned>::iterator it;

	string fileString;
	while (fin >> fileString) {
		it = numarAparitii.find(fileString);
		if (it != numarAparitii.end())
		{
			numarAparitii[fileString]++;
		}
			
		else {
			numarAparitii[fileString] = 1;
		}
	}

	for (it = numarAparitii.begin(); it != numarAparitii.end(); ++it) {
		fout << it->first << " " << it->second << endl;
	}
	fout.close();
	fin.close();
}