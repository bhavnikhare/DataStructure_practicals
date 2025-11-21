//8. Write a program to sort an array using selection sort.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";
}
