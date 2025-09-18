//8. Write a program to count even and odd numbers in an array.
#include <iostream>
using namespace std;

int main(){
    int arr[5], even=0, odd=0;
    cout<<"Enter elements of array: "<<endl;
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    for (int i=0; i<5; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    
    cout<<"Total Even numbers are:"<<even<<endl;
    cout<<"Total Odd numbers are:"<<odd<<endl;;
    return 0; 
}