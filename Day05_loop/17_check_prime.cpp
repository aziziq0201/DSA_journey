#include<iostream>
#include<cmath>

using namespace std;


int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(n < 2) {
        cout << "Not a prime number ! " << endl;
        return 0;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) { // i is a factor of n
            cout << "Not a prime number ! " << endl;
            return 0;
        }
    }

    cout << n << " is a prime number ....<3 " << endl;

    return 0;
}
