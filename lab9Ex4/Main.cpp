#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<fstream>
#include<map>
#include<set>
using namespace std;
int main() {
	map<string, set<string>>permutation;
	map<string, set<string>>::iterator iterator;
	string word;
	ifstream fin("FisierIntrare.txt");
	while (!fin.eof()) {
		fin >> word;
		string temp = word;
		sort(word.begin(), word.end());

		set<string> setString;
		for (int i = 0; i <= word.size(); i++)
		{
			next_permutation(word.begin(), word.end());

			setString.insert(word);
		}
		permutation.insert(pair<string, set<string>>(temp, setString));


	}
	set<string>::iterator secondIterator;
	for (iterator = permutation.begin(); iterator != permutation.end(); ++iterator)
	{
		cout << (*iterator).first << " : ";
		for (secondIterator = (*iterator).second.begin(); secondIterator != (*iterator).second.end(); ++secondIterator)
		{
			cout << (*secondIterator) << " ";
		}
		cout << endl;
	}
	fin.close();
}