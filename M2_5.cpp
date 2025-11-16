//5. Write a program to display front and rear elements of a queue.
#include <iostream>
using namespace std;

int n=5;
int queueArr[5];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == n - 1) {
        cout << "Queue Overflow"<<endl;
    } 
    else {
        if (front == -1) front = 0;
        rear++;
        queueArr[rear] = x;
    }
}
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow"<<endl;
    }
    else {
        queueArr[front++];
    }
}

void displayFrontRear() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty"<<endl;
    } 
    else {
        cout << "Front: " << queueArr[front] << endl;
        cout << "Rear: " << queueArr[rear] << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    enqueue(50);
    displayFrontRear();
    return 0;
}
