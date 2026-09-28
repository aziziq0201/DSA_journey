#include<iostream>
using namespace std;

// Prime list 2 to n

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
        if(n%i == 0) return false;

    return true;
}

void allPrimes(int n) {
    for(int i = 2; i <= n ; i++) {
        if(isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    allPrimes(50);
    return 0;
}
