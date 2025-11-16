//4. Write a program to delete a node from the beginning of a singly linked list.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int x) {    // helper function to build list
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

void deleteBeginning() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;     // move head to next node
    cout << temp->data << " deleted\n";
    delete temp;           // free memory
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

    deleteBeginning();
    display();

    deleteBeginning();
    display();

    return 0;
}
