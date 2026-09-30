#include<iostream>
using namespace std;


int main() {
    int a = 10;

    // Address of operators
    cout << &a << "\n";

    // Pointers
    int *ptr = &a;
    cout << &a << " = " << ptr << "\n";


    float pi = 3.14;
    float *ptr2 = &pi;

    cout << &pi << " = " << ptr2 << "\n";


    // Size of pointers 
    cout << "Size of int pointer = " << sizeof(ptr) << "\n";
    cout << "Size of float pointer = " << sizeof(ptr2) << "\n";


    // Pointers to Pointers
    int **pptr = &ptr;
    cout << &ptr << " = " << pptr << "\n";
    
    
    float **pptr2 = &ptr2;
    cout << &ptr2 << " = " << pptr2 << "\n";
    return 0;
}
