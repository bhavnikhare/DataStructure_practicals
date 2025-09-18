//2. Write a program to input 10 numbers in an array and display them.
#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter elements of array:"<<endl;
    for (int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"Array:"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0; 
}