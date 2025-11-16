//3. Write a program to insert a node at the end of a singly linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
    } 
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;   // move to last node
        }
        temp->next = newNode;     // link last node to new node
    }
}

void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();

    return 0;
}
