//3. Write a program to find the sum of all elements in a 1D array.
#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int sum=0;
    cout<<"Enter elements of array:";
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    for (int i=0; i<5; i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of all elements in the array is:"<<sum<<endl;
    
    return 0; 
}