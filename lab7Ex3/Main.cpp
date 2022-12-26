#include <iostream>
#include <string>

using namespace std;

template<class T>
class Tablou {
public:
	T* vector;
	unsigned int size;
	Tablou(unsigned int n) : size(n) { 
		vector = new T[n];
	};
	Tablou(const Tablou& vect) : size(vect.size) {
		this->vector = new Tablou[size];
		for (int i = 0; i < this->size; ++i) {
			vector[i] = vect.vector[i];
		}
	}
	~Tablou() {
		this->size = NULL;
		delete[] this->vector;
	}
	ostream& operator<<(ostream& os) const {
		os << endl << "Printed vector : ";
		for (int i = 0; i < this->size; ++i) {
			os << vector[i] << " ";
		}
		return os;
	}
	istream& operator>>(istream & is) {
		cout << endl << "Enter elements" << endl;
			for (int i = 0; i < this->size; ++i) {
				cout << "Element " << i << ": ";
				is >> vector[i];
			}
		return is;
	}
	void createVector(unsigned int size) {
		Tablou::operator>>(cin);
		Tablou::operator<<(cout);
	}
	T& operator[](int i) const {
		return this->vector[i];
	}
	//ostream& operator<<(ostream& os) const {
	//	os << endl << "Printed vector : ";
	//	for (int i = 0; i < this->size; ++i) {
	//		os << vector[i] << " ";
	//	}
	//	return os;
	//}
	//istream& operator>>(istream& is) {
	//	cout << endl << "Enter elements" << endl;
	//	for (int i = 0; i < this->size; ++i) {
	//		cout << "Element " << i << ": ";
	//		is >> vector[i];
	//	}
	//	return is;
	//}
	//void createVector(unsigned int size) {
	//	Tablou::operator>>(cin);
	//	Tablou::operator<<(cout);
	//}
	Tablou& operator=(const Tablou& tabl) {
		this->size = tabl.size;
		this->vector = new Tablou[size];
		for (int i = 0; i < this->size; ++i) {
			vector[i] = tabl.vector[i];
		}
		return *this;
	}
};
template<>
class Tablou<char> {
public:

	char* vector;
	unsigned int size;
	Tablou(unsigned int n) : size(n), vector(new char[n]) {};
	Tablou(const Tablou& vect) : size(vect.size) {
		this->vector = new char[this->size];
		for (int i = 0; i < this->size; ++i) {
			vector[i] = vect.vector[i];
		}
	}
	~Tablou() {
		this->size = NULL;
		delete[] this->vector;
	}
	char& operator[](int i) const {
		return this->vector[i];
	}
	Tablou& operator=(const Tablou& param) {
		this->size = param.size;
		this->vector = new char[size];
		for (int i = 0; i < this->size; ++i) {
			vector[i] = param.vector[i];
		}
		return *this;
	}
	ostream& operator<<(ostream& oss) const {
		oss << endl << "Printed char array : ";
		for (int i = 0; i < this->size; ++i) {
			oss << vector[i] << " ";
		}
		return oss;
	}
	istream& operator>>(istream& iss) {
		cout << endl << "Enter elements of char array" << endl;
		for (int i = 0; i < this->size; ++i) {
			cout << "Element " << i << ": ";
			iss >> vector[i];
		}
		return iss;
	}
	void createChar(unsigned int size) {
		Tablou::operator>>(cin);
		Tablou::operator<<(cout);
	}
};
int main(void) {
	unsigned int n;
	cout << "Enter vector lenght : ";
	cin >> n;
	//Tablou<int> intTab(n);
	//intTab.createVector(n);
	Tablou<char> tablouChar(n);
	tablouChar.createChar(n);
	cout << endl << "Element from index 2 is : " << tablouChar.operator[](2);
}