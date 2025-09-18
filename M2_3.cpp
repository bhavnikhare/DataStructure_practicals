//3. Write a program to check if a stack is empty or full.
#include <iostream>
using namespace std;

const int s=5;
int stk[s];
int top=-1;

bool isempty(){
    return (top==-1);
}
bool isfull(){
    return (top==s-1);
}

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
    cout<<"Stack is empty? "<<(isempty()?"Yes":"No")<<endl;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    cout<<"Stack is full? "<<(isfull()?"Yes":"No")<<endl;
    pop();
    pop();
    cout<<"Stack is empty? "<<(isempty()?"Yes":"No")<<endl;
    return 0; 
}