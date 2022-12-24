#include <iostream>
#include <string>
using namespace std;

template<typename T> class List {
private:
    class Node {
        T data;
        Node* next;
        friend class List;
    };
    Node* getNode(T data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        return newNode;
    }
    Node*& getRootNode() {
        return rootNode;
    }
    static Node* rootNode;

public:
    List<T>() {
        rootNode = nullptr;
    }
    
    void push_back(T data) {
        Node* temp = getNode(data);
        if (getRootNode() == nullptr) {
            getRootNode() = temp;
        }
        else {
            Node* head = getRootNode();
            while (head->next) {
                head = head->next;
            }
            head->next = temp;
        }
    }
    void delete_back() {
        if (this->rootNode == nullptr) {
            cout << "Empty list" << endl;
        }
        else {
            Node* saved = nullptr;
            saved = this->rootNode;
            this->rootNode = rootNode->next;
            delete saved;
        }
    }
    void traverse() {
        Node* head = getRootNode();
        while (head) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
    List& operator=(const List& list) {
        this->rootNode = list.rootNode;
        return *this;
    }
    bool operator==(const List& it) {
        return (this->rootNode == it.rootNode);
    }
    ostream& operator<<(ostream& os) const {
        os << "Root node is : " << this->rootNode << endl;
        return os;
    }
    istream& operator>>(istream& is) {
        is >> this->rootNode;
        return is;
    }
};

template <typename T> typename List<T>::Node* List<T>::rootNode = nullptr;

int main() {
    List<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    cout << "Int list before a deletion : " << endl;
    list.traverse();
    list.delete_back();
    cout << "Int list after a deletion : " << endl;
    list.traverse();
    List<int> secondList;
    secondList = list;
    cout << "Int list 1 = Int list 2 ? " << boolalpha << list.operator==(secondList) << endl;
    secondList.operator<<(cout);
    cout << endl;
    List<char> charList;
    charList.push_back('a');
    charList.push_back('b');
    charList.push_back('c');
    charList.push_back('d');
    charList.push_back('e');
    cout << "Char list before a deletion : " << endl;
    charList.traverse();
    charList.delete_back();
    cout << "Char list after a deletion : " << endl;
    charList.traverse();
    charList.operator<<(cout);
    return 0;
}