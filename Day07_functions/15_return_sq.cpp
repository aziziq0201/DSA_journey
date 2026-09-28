#include<iostream>
using namespace std;

// return square of sum of 2 numbers
int sq(int a , int b) {
    return (a*a + b*b + 2*a*b);
}

int main() {
    cout << sq(2,3) << endl;
    cout << sq(5,7) << endl;
    cout << sq(1,7) << endl;
    cout << sq(3,6) << endl;
    cout << sq(9,12) << endl;
    return 0;
}
