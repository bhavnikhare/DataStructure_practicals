//5. Write a program to implement hashing with linear probing.
#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int hashTable[10];
    
    for (int i = 0; i < size; i++)
        hashTable[i] = -1;

    int n, key, index;
    cout << "How many keys to insert? ";
    cin >> n;

    while (n--) {
        cout << "Enter key: ";
        cin >> key;

        index = key % size;

        while (hashTable[index] != -1)
            index = (index + 1) % size;

        hashTable[index] = key;
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < size; i++)
        cout << i << ": " << hashTable[i] << endl;
}
