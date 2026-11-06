#include<iostream>
using namespace std;

// Binary Search
int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n-1;
    while(start <= end) {
        int mid = start + (end - start)/2;

        if(key == arr[mid]) return mid; // if middle
        else if(key > arr[mid]) start = mid + 1; // if in second half
        else end = mid - 1; // if in first half;
    }
    return -1;
}

int main() {

    int arr[] = {2, 4, 6, 8, 10, 12 ,14};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << binarySearch(arr, n, 10) << endl;
    
    return 0;
}
