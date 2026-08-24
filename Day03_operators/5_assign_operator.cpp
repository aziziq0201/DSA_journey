#include<iostream>
using namespace std;


int main() {

    int a = 10;
    int b = 3;
    
    a += 5; // a = a+5   => 15
    cout << "a = " << a << endl;

    a -= 5; // a = a-5  => 10
    cout << "a = " << a << endl;
    
    a *= 5; // a = a*5  => 50
    cout << "a = " << a << endl;

    a /= 5; // a = a/5  => 10
    cout << "a = " << a << endl;

    a %= 5; // a = a%5  => 0
    cout << "a = " << a << endl;
    return 0;
}
