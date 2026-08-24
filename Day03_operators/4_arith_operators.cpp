#include<iostream>
using namespace std;


int main() {
    // Arithmetic Operators
    int a = 3;
    int b = 5;

    // Binary Operators
    cout <<"+ " << a+b << endl; // 8
    cout <<"- " << a-b << endl; // -2
    cout <<"* " << a*b << endl; // 15
    cout <<"/ " << a/b << endl; // 0
    cout <<"% " << a%b << endl; // 3 Modulo (rem)

    // Unary
    a++; // a = a+1;
    cout << "a = " << a << endl; // 4
    a--; // a = a-1
    cout << "a = " << a << endl; // 3
    
    int c = ++a; // a = 4, c = 4 
    int d = a++; // d = 5, a = 5

    cout << "c = " << c << endl; // 4
    cout << "d = " << d << endl; // 4
    cout << "a = " << a << endl; // 5

    return 0;
}
