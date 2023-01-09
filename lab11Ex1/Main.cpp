#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
using namespace std;
int main(void)
{
	ifstream fin("fisierIntrare.txt");
	ofstream fout("txtLinii.txt");

	string line;
	string word;
	while (!fin.eof()) {

		getline(fin, line);
		stringstream stringStream(line);
		while (!stringStream.eof()) {
			stringStream >> word;
			fout << word << endl;
		}
		fout << endl;
	}
}
