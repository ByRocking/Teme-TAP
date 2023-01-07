#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<ctime>
#include "RandomNumber.h"

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
template <typename T>
void printSet(set<T> mySet) {
	cout << "Printed set : ";
	for (auto it = mySet.begin(); it != mySet.end(); ++it) {
		cout << *it << "  ";
	}
	cout << endl;
}

int main(void) {

	int n;
	cout << "Give the size of vector : ";
	cin >> n;
	RandomNumber random(0, n/2);

	vector<int> vectorA(n);
	vector<int> vectorB(n);
	vector<int> vectorC(n);
	vector<int> vectorD(n);
	vector<int> vectorF(n + n);

	generate(vectorA.begin(), vectorA.end(), random);
	generate(vectorB.begin(), vectorB.end(), random);

		
	for_each(vectorA.begin(), vectorA.end(), myfunction);
	cout << endl;
	for_each(vectorB.begin(), vectorB.end(), myfunction);
	cout << endl;

	set<int> setA;
	set<int> setB;
	set<int> setC;
	set<int> setD;
	set<int> setF;

	vector<int>::iterator iteratorA;
	vector<int>::iterator iteratorB;
	vector<int>::iterator iteratorC;

	for (int i = 0; i < n; ++i) {
		setA.insert(vectorA[i]);
	}
		
	for (int i = 0; i < n; ++i) {
		setB.insert(vectorB[i]);
	}
	
	iteratorA = set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(), vectorC.begin());
	iteratorB = set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), vectorD.begin());
	iteratorC = set_union(setA.begin(), setA.end(), setB.begin(), setB.end(), vectorF.begin());

	cout << "Intersection : ";
	vectorC.resize(iteratorA - vectorC.begin());
	for_each(vectorC.begin(), vectorC.end(), myfunction);
	cout << endl;

	cout << "Difference : ";
	vectorD.resize(iteratorB - vectorD.begin());
	for_each(vectorD.begin(), vectorD.end(), myfunction);
	cout << endl;

	cout << "Union : ";
	vectorF.resize(iteratorC - vectorF.begin());
	for_each(vectorF.begin(), vectorF.end(), myfunction);
	cout << endl;


	printVector(vectorA);
	printSet(setA);
}