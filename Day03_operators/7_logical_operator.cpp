#include<iostream>
using namespace std;


int main() {
    
    // Logical Operators
    cout << ((3 < 5) && 10 > 5)<< endl; // True
    cout << ((3 < 5) && 10 == 5)<< endl; // False

    cout << ((3 < 5) || 10 == 5)<< endl; // True
    cout << ((3 == 5) || 10 == 5)<< endl; // False

    cout << (!(3 == 5))<< endl; // True
    cout << ((3 != 5))<< endl; // True
    cout << (!(3 < 5) && 10 == 5)<< endl; // False
    return 0;
}
