//2. Write a program to insert a node at the beginning of a singly linked list.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBeginning(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    head = newNode;         // update head
}

void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertBeginning(30);
    insertBeginning(20);
    insertBeginning(10);

    display();

    return 0;
}
