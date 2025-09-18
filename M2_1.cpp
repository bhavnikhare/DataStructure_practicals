//1. Write a program to implement a stack using arrays (push and pop).
#include <iostream>
using namespace std; 

const int s=5;
int stk[s];
int top=-1;

void push(int el){
    if(top==s-1){
        cout<<"Stack is full"<<endl;
    }
    else{
        top++;
        stk[top]=el;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        int el=stk[top];
        cout<<"Element removed "<<el<<endl;
        top--;
    }
}
void display(){
    cout<<"Stack elements"<<endl;
    for(int i=0;i<=top;i++){
        cout<<stk[i]<<" ";
    }
    cout<<endl;
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();
    push(50);
    display();
    return 0; 
}