#include<iostream>
using namespace std;

// Reverse an array without using extra space with 2 pointer approach

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0, end = n-1;

    while(start < end) {
        // swap
        swap(arr[start], arr[end]);

        start++, end--;

    }

    printArr(arr, n);
    return 0;
}
