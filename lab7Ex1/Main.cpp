#include <iostream>
#include <string>

using namespace std;

template <class T>
T* read(T* v, unsigned int n) {
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	return v;
}
template <class T>
void write(T* v, unsigned int n) {
	for (int i = 0; i < n; ++i) {
		cout << v[i] << " ";
	}
}
template <class T>
T maximum(T* v, unsigned int n) {
	T max = v[0];
	for (int i = 0; i < n; ++i) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
template <class T>
T minimum(T* v, unsigned int n) {
	T min = v[0];
	for (int i = 0; i < n; ++i)
	{
		if (v[i] < min)
			min = v[i];
	}
	return min;
}
template <class T>
void sequential(T* v, unsigned int n, T key) {
	bool found = false;
	for (int i = 0; i < n; ++i) {
		if (v[i] == key) {
			cout << endl << "Element found at position : " << i << endl;
			found = true;
		}
	}
	if (!found) {
		cout << endl << "Element not found" << endl;
	}
}
template <class T>
void bubble(T* v, unsigned int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (v[j] > v[j + 1]) {
				T temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}
template <>
void bubble(char* v, unsigned int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (v[j] < v[j + 1]) {
				char temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}
template<class T>
T binary(T* v, T low, T high, T key) {
	T mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (v[mid] == key) {
			return key;
		}
		else if (v[mid] < key) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

int main(void) {

	unsigned int n;
	cout << "Introduceti dimensiunea tabloului unsigned int : ";
	cin >> n;
	unsigned int* vectorInt = new unsigned int[n];
	char* vectorChar = new char[n];

	read<unsigned int>(vectorInt, n);
	write<unsigned int>(vectorInt, n);
	cout << endl << "Elementul maxim din tabloul unsigned int este : " << maximum<unsigned int>(vectorInt, n) << endl;
	cout << endl << "Elementul minim din tabloul unsigned int este : " << minimum<unsigned int>(vectorInt, n) << endl;
	sequential<unsigned int>(vectorInt, n, 9);
	bubble<unsigned int>(vectorInt, n);
	write<unsigned int>(vectorInt, n);
	cout << endl << "Element " << binary<unsigned int>(vectorInt, 0, n - 1, 10) << " was found" << endl;
	write<unsigned int>(vectorInt, n);
	cout << endl;

	//read<char>(vectorChar, n);
	//write<char>(vectorChar, n);

	//cout << endl << "Elementul maxim din tablou float este : " << maximum<char>(vectorChar, n) << endl;
	//cout << endl << "Elementul minim din tablul float este : " << minimum<char>(vectorChar, n) << endl;

	//sequential<char>(vectorChar, n, 'k');
	//bubble<char>(vectorChar, n);
	//write<char>(vectorChar, n);
}