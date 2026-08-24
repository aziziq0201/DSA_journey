#include<iostream>
using namespace std;

// type promotion
int main() {
    cout << (10/3) << endl; // 3 implicit
    cout << (10/3.0) << endl; // 3.33 implicit
    cout << ('a' + 1) << endl; // 98 //// implicit
    cout << ('A' + 1) << endl; // 66 implicit
    
    cout << char('A' + 32) << endl; //explicit a
    cout << int('A') << endl; //explicit 65
    
    float PI = 3.14;
    cout << int(PI) << endl; //  explicit(3)
    cout << (float(10/3)) << endl; // 3.33 explicit
    
    return 0;
}
