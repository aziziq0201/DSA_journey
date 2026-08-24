#include<iostream>
using namespace std;


int main() {
    
    // Relational Operators  => True/ False

    int a = 3;
    int b = 5;

    cout << (a > b) << endl;  // False -> 0   
    cout << (a < b) << endl;  // True -> 1   
    
    b = 3;
    cout << (a >= b) << endl;  // True -> 1   
    cout << (a <= b) << endl;  // True -> 1
    
    cout << (a == b) << endl;  // True -> 1
    cout << (a != b) << endl;  // True -> 0
    return 0;
}
