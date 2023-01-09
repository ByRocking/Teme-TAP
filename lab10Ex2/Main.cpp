#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

template <class ForwardIterator, class T>
void replace(ForwardIterator first, ForwardIterator last,
    const T& old_value, const T& new_value)
{
    while (first != last) {
        if (*first == old_value) *first = new_value;
        ++first;
    }
}
int main(void) {
    int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    std::vector<int> myvector(myints, myints + 8);            
    // 10 20 30 30 20 10 10 20

    replace(myvector.begin(), myvector.end(), 20, 99); 
    // 10 99 30 30 99 10 10 99

    std::cout << "Vector items : ";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << endl;
}
