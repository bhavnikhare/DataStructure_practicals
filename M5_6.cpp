//6. Write a program to implement a basic hash function (modulo method).
#include <iostream>
using namespace std;

int main() {
    int key, size;
    cout << "Enter key: ";
    cin >> key;
    cout << "Enter table size: ";
    cin >> size;

    int hashIndex = key % size;

    cout << "Hash index = " << hashIndex;
}
