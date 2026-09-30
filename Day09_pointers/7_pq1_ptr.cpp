#include<iostream>
using namespace std;


int main() {
    
    // What will ptr2 point 

    int x = 5, y  = 10;
    int *ptr1 = &x, *ptr2 = &y;

    ptr2 = ptr1;

    cout << *ptr2 << "\n";  // *ptr1 = 5;
    // ptr2 == ptr1 == &x ; 

    cout << ptr2 << "\n" << ptr1 << "\n" << &x << "\n";
    return 0;
}
