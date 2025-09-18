//7. Write a program to perform element-wise addition of two 1D arrays.
#include <iostream>
using namespace std; 

int main(){
    int arr1[5], arr2[5],sum[5];
    cout<<"Enter elements of array 1:";
    for (int i=0; i<5; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of array 2:";
    for (int i=0; i<5; i++){
        cin>>arr2[i];
    }
    cout<<"Addition of both the arrays:";
    for (int i=0; i<5; i++){
        sum[i]=arr1[i]+arr2[i];
    }
    for (int i=0; i<5; i++){
        cout<<sum[i]<<" ";
    }
    return 0; 
}