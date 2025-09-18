//5. Write a program to reverse the elements of a 1D array.
#include <iostream>
using namespace std;

int main() {
    int arr[5]={1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start=0;
    int end=4;
    while (start < end) {
        // Swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
