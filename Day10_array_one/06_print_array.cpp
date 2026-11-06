#include<iostream>
using namespace std;




// void printArr(int nums[]) {
//     cout << sizeof(nums) << "\n" ; // size of int pointer i.e., 8
//     int n = sizeof(nums)/sizeof(nums[0]);

//     for(int i = 0; i < n; i++)
//         cout << nums[i] << " ";
//     cout << "\n";

void printArr(int nums[], int n) {
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Array size = " << sizeof(arr) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);

    printArr(arr, n);

    return 0;
}
