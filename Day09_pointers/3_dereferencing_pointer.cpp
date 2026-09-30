#include<iostream>
using namespace std;

// Dereference Pointer

int main() {
    int a = 10;
    int *ptr = &a;

    cout << &a << "\n";
    cout << *(&a) << "\n";

    cout << ptr << "\n";
    cout << *(ptr) << "\n";

    *ptr = 20;
    cout << endl;
    cout << a << "\n";
    cout << *(&a) << "\n";
    return 0;
}
