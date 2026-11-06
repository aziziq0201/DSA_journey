#include<iostream>
using namespace std;

// Array Pointer


int main() {

    int x = 10;
    int *ptr = &x;

    int y = 25;
    ptr = &y;

    cout << *ptr << endl;  //25


    int arr[5];
    
    cout << arr << "\n";
    cout << *arr << "\n";

    int z = 25;
    // arr = &z;  // Not possible cuz array name refer constant 0th element of array and can't be modified. it's read only
    return 0;
}
