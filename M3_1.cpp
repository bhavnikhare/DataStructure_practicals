//1.Write a program to create a singly linked list and display it.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertNode(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
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
    insertNode(10);
    insertNode(20);
    insertNode(30);
    
    display();

    return 0;
}
