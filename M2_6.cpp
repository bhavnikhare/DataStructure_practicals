//6. Write a program to implement Circular Queue
#include <iostream>
using namespace std;

const int n=5;
int cq[n];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % n == front) {
        cout << "Circular Queue is Full\n";
    } else {
        if (front == -1) front = 0;
        rear = (rear + 1) % n;
        cq[rear] = x;
        cout << x << " inserted\n";
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Circular Queue is Empty\n";
    } else {
        cout << cq[front] << " removed\n";
        if (front == rear)       // only 1 element
            front = rear = -1;
        else
            front = (front + 1) % n;
    }
}
void display() {
    if (front == -1) {
        cout << "Circular Queue is Empty\n";
        return;
    }

    cout << "Circular Queue: ";
    int i = front;

    while (true) {
        cout << cq[i] << " ";
        if (i == rear) break;
        i = (i + 1) % n;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    enqueue(40);
    enqueue(50);
    display();
    enqueue(60);  // shows full
    display();
    return 0;
}
