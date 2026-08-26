#include<iostream>
using namespace std;


int main() {

    int n ;
    cout << "Enter number of terms : " ;
    cin >> n;

    if(n <= 0) return 0;
    if(n == 1) {
        cout << 0 << endl;
        return 0;
    }
    int fib0 = 0, fib1 = 1, fib;
    cout << 0 << " ";
    for(int i = 1; i < n; i++) {
        fib = fib0 + fib1;
        cout<< fib << " ";
        fib0 = fib1;
        fib1 = fib;
    }
    cout << endl;
    return 0;
}
