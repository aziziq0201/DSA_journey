#include<iostream>
using namespace std;


int main() {
    
    int n;
    cout << "Enter a number to find factorial : ";
    cin >> n;


    int factorial = 1;
    if(n < 0) {
        cout << "Factorial of -ve isn't possible ! " << endl;
        return 0;
    }

    if(n == 0 || n == 1) {
        cout << n << "! = " << factorial << endl;
        return 0;
    }
    
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << n << "! = " << factorial << endl;
    return 0;
}
