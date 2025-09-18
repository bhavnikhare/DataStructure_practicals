//6. Write a program to input a 2D array (3x3) and display it in matrix form.

#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"enter values for matrix"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }

    return 0; 
}