#include <iostream>
#include <iterator>
#include <deque>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

void myfunction(int i) {
	cout << i << "  ";
}
template <typename T>
void printVector(vector<T> myVector) {
	cout << "Printed vector : ";
	for_each(myVector.begin(), myVector.end(), myfunction);
	cout << endl;
}

int main() {
	deque<int> dq;
	vector<int> vect;
	list<int> lst;

	dq.push_front(3);
	dq.push_front(6);
	dq.push_front(9);

	vect.push_back(2);
	vect.push_back(4);
	vect.push_back(6);
	vect.push_back(8);
	vect.push_back(10);

	lst.push_back(-1);
	lst.push_back(-2);
	lst.push_back(-3);
	lst.push_back(-4);
	lst.push_back(-5);
	lst.push_back(-6);
	lst.push_back(-7);
	lst.push_back(-8);
	lst.push_back(-9);
	lst.push_back(-10);

	// Metoda 1 
	/*vector<int>::iterator vectIT = std::next(vect.begin(), 4);*/

	// Metoda 2
	/*int index = 4;
	vector<int>::iterator vectIT = vect.begin() + index;*/

	// Metoda 3
	/*vector<int>::iterator vectIT = vect.begin(); ++vectIT; ++vectIT;*/

	// Metoda 4
	/*vector<int>::iterator vectIT = vect.begin() + 5;*/

	// Metoda 5
	/*vector<int>::iterator vectIT = vect.begin();
	std::advance(vectIT, 5);*/

	copy(dq.begin(), dq.end(), inserter(vect, vect.end()));

	copy(vect.begin(), vect.end(), inserter(dq, dq.end()));

	copy(lst.begin(), lst.end(), inserter(vect, vectIT));

	
	printVector(vect);
}
