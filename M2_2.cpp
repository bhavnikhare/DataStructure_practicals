//2. Write a program to display top element of a stack without removing it.
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
void peek(){
    cout<<"Topmost element is:"<<stk[top]<<endl;
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
    peek();
    return 0; 
}