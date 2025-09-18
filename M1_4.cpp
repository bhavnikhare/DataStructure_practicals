//4. Write a program to find the maximum and minimum element in an array.

#include <iostream>
using namespace std;

int main(){
    int arr[5]={12,24,23,44,5};
    int min=arr[0];
    int max=arr[0];
    for (int i=0; i<5; i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
        else{
            continue;
        }
        
    }
    cout<<"Minimum element:"<<min<<endl;
    cout<<"Maximum element:"<<max<<endl;
    return 0; 
}