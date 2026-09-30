#include<iostream>
using namespace std;


int main() {
    int *ptr ;
    cout << ptr << endl;

    int *ptr2 = NULL;
    cout << ptr2 << endl;


    cout << *ptr << endl;
    cout << *ptr2 << endl; // segmentation fault. dereferencing of null pointer is not possible
    
    cout << "Bye " << endl;
    return 0;
}
