//4. Write a program to implement a queue using arrays (enqueue and dequeue).
#include <iostream>
using namespace std;
const int n = 5;
int queue[n];

int front = -1;
int rear = -1;

// Enqueue function
void enqueue(int x) {
    if (rear == n - 1) {
        cout << "Queue Overflow" << x << endl;
    } else {
        if (front == -1) front = 0;
        queue[++rear] = x;
        cout << x << " enqueued into queue"<<endl;
    }
}

// Dequeue function
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow"<<endl;
    } else {
        cout << queue[front++] << " dequeued from queue"<<endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue();
    dequeue();

    enqueue(60);  // Will fail because linear queue doesn't reuse space

    return 0;
}
