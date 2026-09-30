#include<iostream>
using namespace std;

// Pass by value
void changeA(int param) {
    param = 20;
    cout << param << endl;
}


// Pass by reference(address) using pointer
void change_A(int *ptr) {
    *ptr = 20;
    cout << *ptr << "\n";
}


int main() {
    
    int a = 10;
    changeA(a);
    cout << a << "\n";

    cout << endl;
    
    change_A(&a) ;
    cout << a << "\n";
    
    return 0;
}
