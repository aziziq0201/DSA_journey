#include<iostream>
using namespace std;


int main() {
    // Dangling Pointers
    int *p = new int(10);

    delete p;

    // p is now a dangling pointer
    cout << *p;   // ❌ Undefined behavior
    return 0;
}
